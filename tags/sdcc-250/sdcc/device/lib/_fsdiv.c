/* Floating point library in optimized assembly for 8051
 * Copyright (c) 2004, Paul Stoffregen, paul@pjrc.com
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */


#define SDCC_FLOAT_LIB
#include <float.h>


#ifdef FLOAT_ASM_MCS51

// float __fsdiv (float a, float b) reentrant
static void dummy(void) _naked
{
	_asm
	.globl	___fsdiv
___fsdiv:
	// extract the two inputs, placing them into:
	//      sign     exponent   mantiassa
	//      ----     --------   ---------
	//  a:  sign_a   exp_a      r4/r3/r2
	//  b:  sign_b   exp_b      r7/r6/r5

	lcall	fsgetargs

	// compute final sign bit
	jnb	sign_b, 00001$
	cpl	sign_a
00001$:

	// if divisor is zero, return infinity
	cjne	r7, #0, 00002$
	ljmp	fs_return_inf
00002$:
	// if dividend is zero, return zero
	cjne	r4, #0, 00003$
	ljmp	fs_return_zero
00003$:

	// subtract exponents
	clr	c
	mov	a, exp_a
	subb	a, exp_b
	add	a, #127
	mov	exp_a, a

	// need extra bits on a's mantissa
#ifdef FLOAT_FULL_ACCURACY
	clr	c
	mov	a, r5
	subb	a, r2
	mov	a, r6
	subb	a, r3
	mov	a, r7
	subb	a, r4
	jc	00005$
	dec	exp_a
	clr	c
	mov	a, r2
	rlc	a
	mov	r1, a
	mov	a, r3
	rlc	a
	mov	r2, a
	mov	a, r4
	rlc	a
	mov	r3, a
	clr	a
	rlc	a
	mov	r4, a
	sjmp	00006$
00005$:
#endif
	clr	a
	xch	a, r4
	xch	a, r3
	xch	a, r2
	mov	r1, a
00006$:

	// begin long division
	push	exp_a
#ifdef FLOAT_FULL_ACCURACY
	mov	b, #25
#else
	mov	b, #24
#endif
00010$:
	// compare
	clr	c
	mov	a, r1
	subb	a, r5
	mov	a, r2
	subb	a, r6
	mov	a, r3
	subb	a, r7
	mov	a, r4
	subb	a, #0		// carry==0 if mant1 >= mant2

#ifdef FLOAT_FULL_ACCURACY
	djnz	b, 00011$
	sjmp	00015$
00011$:
#endif
	jc	00012$
	// subtract
	mov	a, r1
	subb	a, r5
	mov	r1, a
	mov	a, r2
	subb	a, r6
	mov	r2, a
	mov	a, r3
	subb	a, r7
	mov	r3, a
	mov	a, r4
	subb	a, #0
	mov	r4, a
	clr	c

00012$:
	// shift result
	cpl	c
	mov	a, r0
	rlc	a
	mov	r0, a
	mov	a, dpl
	rlc	a
	mov	dpl, a
	mov	a, dph
	rlc	a
	mov	dph, a

	// shift partial remainder
	clr	c
	mov	a, r1
	rlc	a
	mov	r1, a
	mov	a, r2
	rlc	a
	mov	r2, a
	mov	a, r3
	rlc	a
	mov	r3, a
	mov	a, r4
	rlc	a
	mov	r4, a

#ifdef FLOAT_FULL_ACCURACY
	sjmp	00010$
00015$:
#else
	djnz	b, 00010$
#endif

	// now we've got a division result, so all we need to do
	// is round off properly, normalize and output a float

#ifdef FLOAT_FULL_ACCURACY
	cpl	c
	clr	a
	mov	r1, a
	addc	a, r0
	mov	r2, a
	clr	a
	addc	a, dpl
	mov	r3, a
	clr	a
	addc	a, dph
	mov	r4, a
	pop	exp_a
	jnc	00016$
	inc	exp_a
	mov	r4, #0x80
00016$:
#else
	mov	r1, #0
	mov	a, r0
	mov	r2, a
	mov	r3, dpl
	mov	r4, dph
	pop	exp_a
#endif

	lcall	fs_normalize_a
	ljmp	fs_zerocheck_return
	_endasm;
}

#else




/*
** libgcc support for software floating point.
** Copyright (C) 1991 by Pipeline Associates, Inc.  All rights reserved.
** Permission is granted to do *anything* you want with this file,
** commercial or otherwise, provided this message remains intact.  So there!
** I would appreciate receiving any updates/patches/changes that anyone
** makes, and am willing to be the repository for said changes (am I
** making a big mistake?).
**
** Pat Wood
** Pipeline Associates, Inc.
** pipeline!phw@motown.com or
** sun!pipeline!phw or
** uunet!motown!pipeline!phw
*/

/* (c)2000/2001: hacked a little by johan.knol@iduna.nl for sdcc */


union float_long
  {
    float f;
    long l;
  };

/* divide two floats */
float __fsdiv (float a1, float a2)
{
  volatile union float_long fl1, fl2;
  volatile long result;
  volatile unsigned long mask;
  volatile long mant1, mant2;
  volatile int exp ;
  char sign;

  fl1.f = a1;
  fl2.f = a2;

  /* subtract exponents */
  exp = EXP (fl1.l) ;
  exp -= EXP (fl2.l);
  exp += EXCESS;

  /* compute sign */
  sign = SIGN (fl1.l) ^ SIGN (fl2.l);

  /* divide by zero??? */
  if (!fl2.l)
    /* return NaN or -NaN */
    return (-1.0);

  /* numerator zero??? */
  if (!fl1.l)
    return (0);

  /* now get mantissas */
  mant1 = MANT (fl1.l);
  mant2 = MANT (fl2.l);

  /* this assures we have 25 bits of precision in the end */
  if (mant1 < mant2)
    {
      mant1 <<= 1;
      exp--;
    }

  /* now we perform repeated subtraction of fl2.l from fl1.l */
  mask = 0x1000000;
  result = 0;
  while (mask)
    {
      if (mant1 >= mant2)
	{
	  result |= mask;
	  mant1 -= mant2;
	}
      mant1 <<= 1;
      mask >>= 1;
    }

  /* round */
  result += 1;

  /* normalize down */
  exp++;
  result >>= 1;

  result &= ~HIDDEN;

  /* pack up and go home */
  fl1.l = PACK (sign ? 1ul<<31 : 0, (unsigned long) exp, result);
  return (fl1.f);
}

#endif
