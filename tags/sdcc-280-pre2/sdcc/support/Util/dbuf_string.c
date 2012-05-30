/*
  dbuf_string.c - Append formatted string to the dynamic buffer
  version 1.1.0, December 29th, 2007

  Copyright (c) 2002-2007 Borut Razem

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2, or (at your option)
  any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin Street - Fifth Floor,
  Boston, MA 02110-1301, USA.
*/


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "dbuf_string.h"


/*
 * Append string to the end of the buffer.
 */

int
dbuf_append_str (struct dbuf_s *dbuf, const char *str)
{
  assert (str != NULL);

  return dbuf_append (dbuf, str, strlen(str));
}


/*
 * Append single character to the end of the buffer.
 */

int
dbuf_append_char (struct dbuf_s *dbuf, char chr)
{
  return dbuf_append (dbuf, &chr, 1);
}

/*
 * Calculate length of the resulting formatted string.
 *
 * Borrowed from vasprintf.c
 */

static int
calc_result_length (const char *format, va_list args)
{
  const char *p = format;
  /* Add one to make sure that it is never zero, which might cause malloc
     to return NULL.  */
  int total_width = strlen (format) + 1;
  va_list ap;

#ifdef va_copy
  va_copy (ap, args);
#else
  memcpy (&ap, &args, sizeof (va_list));
#endif

  while (*p != '\0')
    {
      if (*p++ == '%')
        {
          while (strchr ("-+ #0", *p))
            ++p;
          if (*p == '*')
            {
              ++p;
              total_width += abs (va_arg (ap, int));
            }
          else
            total_width += strtoul (p, (char **) &p, 10);
          if (*p == '.')
            {
              ++p;
              if (*p == '*')
                {
                  ++p;
                  total_width += abs (va_arg (ap, int));
                }
              else
              total_width += strtoul (p, (char **) &p, 10);
            }
          while (strchr ("hlL", *p))
            ++p;
          /* Should be big enough for any format specifier except %s and floats.  */
          total_width += 30;
          switch (*p)
            {
            case 'd':
            case 'i':
            case 'o':
            case 'u':
            case 'x':
            case 'X':
            case 'c':
              (void) va_arg (ap, int);
              break;
            case 'f':
            case 'e':
            case 'E':
            case 'g':
            case 'G':
              (void) va_arg (ap, double);
              /* Since an ieee double can have an exponent of 307, we'll
                 make the buffer wide enough to cover the gross case. */
              total_width += 307;
              break;
            case 's':
              total_width += strlen (va_arg (ap, char *));
              break;
            case 'p':
            case 'n':
              (void) va_arg (ap, char *);
              break;
            }
          p++;
        }
    }
#ifdef va_copy
  va_end (ap);
#endif
  return total_width;
}


/*
 * Append the formatted string to the end of the buffer.
 */

int
dbuf_vprintf (struct dbuf_s *dbuf, const char *format, va_list args)
{
  int size = calc_result_length (format, args);

  assert (dbuf != NULL);
  assert (dbuf->alloc != 0);
  assert (dbuf->buf != NULL);

  if (0 != _dbuf_expand (dbuf, size))
    {
      int len = vsprintf (&(((char *)dbuf->buf)[dbuf->len]), format, args);

      if (len >= 0)
        {
          /* if written length is greater then the calculated one,
             we have a buffer overrun! */
          assert (len <= size);
          dbuf->len += len;
        }
      return len;
    }

  return 0;
}


/*
 * Append the formatted string to the end of the buffer.
 */

int
dbuf_printf (struct dbuf_s *dbuf, const char *format, ...)
{
  va_list arg;
  int len;

  va_start (arg, format);
  len = dbuf_vprintf (dbuf, format, arg);
  va_end (arg);

  return len;
}


/*
 * Append line from file to the dynamic buffer
 */

size_t
dbuf_getline (struct dbuf_s *dbuf, FILE *infp)
{
  int c;
  char chr;

  while ((c = getc (infp)) != '\n' && c != EOF)
    {
      chr = c;

      dbuf_append (dbuf, &chr, 1);
    }

  /* add trailing NL */
  if (c == '\n')
    {
      chr = c;

      dbuf_append (dbuf, &chr, 1);
    }

  /* terminate the line without increasing the length */
  if (0 != _dbuf_expand (dbuf, 1))
    ((char *)dbuf->buf)[dbuf->len] = '\0';

  return dbuf_get_length (dbuf);
}


/*
 * Write dynamic buffer to the file.
 */

void
dbuf_write (struct dbuf_s *dbuf, FILE *dest)
{
  fwrite (dbuf_get_buf (dbuf), 1, dbuf_get_length (dbuf), dest);
}


/*
 * Write dynamic buffer to the file and destroy it.
 */

void
dbuf_write_and_destroy (struct dbuf_s *dbuf, FILE *dest)
{
  dbuf_write (dbuf, dest);

  dbuf_destroy (dbuf);
}