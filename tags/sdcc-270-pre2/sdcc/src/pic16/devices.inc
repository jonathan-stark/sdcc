/*-------------------------------------------------------------------------
  device.inc - pic16 device descriptions for inclusion into device.c

   Written By -  Scott Dattalo scott@dattalo.com
   Ported to PIC16 By -  Martin Dubuc m.dubuc@rogers.com
   Moved from device.c - Raphael Neider <rneider AT web.de>

   This program is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by the
   Free Software Foundation; either version 2, or (at your option) any
   later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.

   $Id$
-------------------------------------------------------------------------*/

/* This file is included into device.c in order to populate the 
 * Pics16 array with the various device's descriptions.
 * For a reference of the structure to be filled in here see
 * PIC16_device in device.h.
 *
 * The list is scanned top-down, the first device entry matching the
 * desired processor name will be used. Temporary overrides of faulty
 * device descriptions can be specified be placing them near the top
 * of this file.
 */

//  {
//    {"p18f242", "18f242", "pic18f242", "f242", "18F242"},		// aliases
//    0,
//    0x300,						// RAMsize
//    0,
//    { 0xf80, 0xfff },       /* PIC18F242 range of SFR's */
//	{
//		/* PIC18F242 configuration words */
//		0x300001,
//		0x30000d,
//		{ { 0x27, 0, 0xff } /* 1 */ , { 0x0f, 0, 0xff } /* 2 */ , { 0x0f, 0, 0xff } /* 3 */ , 
//		{ -1, 0, 0xff } /* 4 */  , { 0x01, 0, 0xff } /* 5 */ , { 0x85, 0, 0xff } /* 6 */ , 
//		{ -1, 0, 0xff } /* 7 */  , { 0x03, 0, 0xff } /* 8 */ , { 0xc0, 0, 0xff } /* 9 */ , 
//		{ 0x03, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ , { 0x03, 0, 0xff } /* c */ , 
//		{ 0x40, 0, 0xff } /* d */ } 
//	}
//  },

  {
    {"p18f242", "18f242", "pic18f242", "f242"},
    0,
    0x300,	/* 768 */
    0x80,
    0,
    { 0xf80, 0xfff },	/* PIC18F242 range of SFR's */
    {
    /* PIC18F242 configuration words */
      0x300001,
      0x30000d,
      { { 0x27, 0, 0xff } /* 1 */ , { 0x0f, 0, 0xff } /* 2 */ , { 0x0f, 0, 0xff } /* 3 */ , 
      { -1, 0, 0xff } /* 4 */  , { 0x01, 0, 0xff } /* 5 */ , { 0x85, 0, 0xff } /* 6 */ , 
      { -1, 0, 0xff } /* 7 */  , { 0x0f, 0, 0xff } /* 8 */ , { 0xc0, 0, 0xff } /* 9 */ , 
      { 0x0f, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ , { 0x0f, 0, 0xff } /* c */ , 
      { 0x40, 0, 0xff } /* d */  }
    },
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f248", "18f248", "pic18f248", "f248"},
    0,
    0x300,	/* 768 */
    0x60,
    0,
    { 0xf00, 0xfff },	/* PIC18F248 range of SFR's */
    {
    /* PIC18F248 configuration words */
      0x300001,
      0x30000d,
      { { 0x27, 0, 0xff } /* 1 */ , { 0x0f, 0, 0xff } /* 2 */ , { 0x0f, 0, 0xff } /* 3 */ , 
      { -1, 0, 0xff } /* 4 */  , { -1, 0, 0xff } /* 5 */  , { 0x85, 0, 0xff } /* 6 */ , 
      { -1, 0, 0xff } /* 7 */  , { 0x0f, 0, 0xff } /* 8 */ , { 0xc0, 0, 0xff } /* 9 */ , 
      { 0x0f, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ , { 0x0f, 0, 0xff } /* c */ , 
      { 0x40, 0, 0xff } /* d */  }
    },
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f252", "18f252", "pic18f252", "f252"},
    0,
    0x600,	/* 1536 */
    0x80,
    0,
    { 0xf80, 0xfff },	/* PIC18F252 range of SFR's */
    {
    /* PIC18F252 configuration words */
      0x300001,
      0x30000d,
      { { 0x27, 0, 0xff } /* 1 */ , { 0x0f, 0, 0xff } /* 2 */ , { 0x0f, 0, 0xff } /* 3 */ , 
      { -1, 0, 0xff } /* 4 */  , { 0x01, 0, 0xff } /* 5 */ , { 0x85, 0, 0xff } /* 6 */ , 
      { -1, 0, 0xff } /* 7 */  , { 0x0f, 0, 0xff } /* 8 */ , { 0xc0, 0, 0xff } /* 9 */ , 
      { 0x0f, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ , { 0x0f, 0, 0xff } /* c */ , 
      { 0x40, 0, 0xff } /* d */  }
    },
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f258", "18f258", "pic18f258", "f258"},
    0,
    0x600,	/* 1536 */
    0x60,
    0,
    { 0xf00, 0xfff },	/* PIC18F258 range of SFR's */
    {
    /* PIC18F258 configuration words */
      0x300001,
      0x30000d,
      { { 0x27, 0, 0xff } /* 1 */ , { 0x0f, 0, 0xff } /* 2 */ , { 0x0f, 0, 0xff } /* 3 */ , 
      { -1, 0, 0xff } /* 4 */  , { -1, 0, 0xff } /* 5 */  , { 0x85, 0, 0xff } /* 6 */ , 
      { -1, 0, 0xff } /* 7 */  , { 0x0f, 0, 0xff } /* 8 */ , { 0xc0, 0, 0xff } /* 9 */ , 
      { 0x0f, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ , { 0x0f, 0, 0xff } /* c */ , 
      { 0x40, 0, 0xff } /* d */  }
    },
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f442", "18f442", "pic18f442", "f442"},
    0,
    0x300,	/* 768 */
    0x80,
    0,
    { 0xf80, 0xfff },	/* PIC18F442 range of SFR's */
    {
    /* PIC18F442 configuration words */
      0x300001,
      0x30000d,
      { { 0x27, 0, 0xff } /* 1 */ , { 0x0f, 0, 0xff } /* 2 */ , { 0x0f, 0, 0xff } /* 3 */ , 
      { -1, 0, 0xff } /* 4 */  , { 0x01, 0, 0xff } /* 5 */ , { 0x85, 0, 0xff } /* 6 */ , 
      { -1, 0, 0xff } /* 7 */  , { 0x0f, 0, 0xff } /* 8 */ , { 0xc0, 0, 0xff } /* 9 */ , 
      { 0x0f, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ , { 0x0f, 0, 0xff } /* c */ , 
      { 0x40, 0, 0xff } /* d */  }
    },
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f448", "18f448", "pic18f448", "f448"},
    0,
    0x300,	/* 768 */
    0x60,
    0,
    { 0xf00, 0xfff },	/* PIC18F448 range of SFR's */
    {
    /* PIC18F448 configuration words */
      0x300001,
      0x30000d,
      { { 0x27, 0, 0xff } /* 1 */ , { 0x0f, 0, 0xff } /* 2 */ , { 0x0f, 0, 0xff } /* 3 */ , 
      { -1, 0, 0xff } /* 4 */  , { -1, 0, 0xff } /* 5 */  , { 0x85, 0, 0xff } /* 6 */ , 
      { -1, 0, 0xff } /* 7 */  , { 0x0f, 0, 0xff } /* 8 */ , { 0xc0, 0, 0xff } /* 9 */ , 
      { 0x0f, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ , { 0x0f, 0, 0xff } /* c */ , 
      { 0x40, 0, 0xff } /* d */  }
    },
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f452", "18f452", "pic18f452", "f452"},
    0,
    0x600,	/* 1536 */
    0x80,
    0,
    { 0xf80, 0xfff },	/* PIC18F452 range of SFR's */
    {
    /* PIC18F452 configuration words */
      0x300001,
      0x30000d,
      { { 0x27, 0, 0xff } /* 1 */ , { 0x0f, 0, 0xff } /* 2 */ , { 0x0f, 0, 0xff } /* 3 */ , 
      { -1, 0, 0xff } /* 4 */  , { 0x01, 0, 0xff } /* 5 */ , { 0x85, 0, 0xff } /* 6 */ , 
      { -1, 0, 0xff } /* 7 */  , { 0x0f, 0, 0xff } /* 8 */ , { 0xc0, 0, 0xff } /* 9 */ , 
      { 0x0f, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ , { 0x0f, 0, 0xff } /* c */ , 
      { 0x40, 0, 0xff } /* d */  }
    },
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f458", "18f458", "pic18f458", "f458"},
    0,
    0x600,	/* 1536 */
    0x60,
    0,
    { 0xf00, 0xfff },	/* PIC18F458 range of SFR's */
    {
    /* PIC18F458 configuration words */
      0x300001,
      0x30000d,
      { { 0x27, 0, 0xff } /* 1 */ , { 0x0f, 0, 0xff } /* 2 */ , { 0x0f, 0, 0xff } /* 3 */ , 
      { -1, 0, 0xff } /* 4 */  , { -1, 0, 0xff } /* 5 */  , { 0x85, 0, 0xff } /* 6 */ , 
      { -1, 0, 0xff } /* 7 */  , { 0x0f, 0, 0xff } /* 8 */ , { 0xc0, 0, 0xff } /* 9 */ , 
      { 0x0f, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ , { 0x0f, 0, 0xff } /* c */ , 
      { 0x40, 0, 0xff } /* d */  }
    },
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f1220", "18f1220", "pic18f1220", "f1220"},
    0,
    0x100,	/* 256 */
    0x80,
    0,
    { 0xf80, 0xfff },	/* PIC18F1220 range of SFR's */
    {
    /* PIC18F1220 configuration words */
      0x300001,
      0x30000d,
      { { 0xcf, 0, 0xff } /* 1 */ , { 0x0f, 0, 0xff } /* 2 */ , { 0x1f, 0, 0xff } /* 3 */ , 
      { -1, 0, 0xff } /* 4 */  , { 0x80, 0, 0xff } /* 5 */ , { 0x85, 0, 0xff } /* 6 */ , 
      { -1, 0, 0xff } /* 7 */  , { 0x03, 0, 0xff } /* 8 */ , { 0xc0, 0, 0xff } /* 9 */ , 
      { 0x03, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ , { 0x03, 0, 0xff } /* c */ , 
      { 0x40, 0, 0xff } /* d */  }
    },
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f1320", "18f1320", "pic18f1320", "f1320"},
    0,
    0x100,	/* 256 */
    0x80,
    0,
    { 0xf80, 0xfff },	/* PIC18F1320 range of SFR's */
    {
    /* PIC18F1320 configuration words */
      0x300001,
      0x30000d,
      { { 0xcf, 0, 0xff } /* 1 */ , { 0x0f, 0, 0xff } /* 2 */ , { 0x1f, 0, 0xff } /* 3 */ , 
      { -1, 0, 0xff } /* 4 */  , { 0x80, 0, 0xff } /* 5 */ , { 0x85, 0, 0xff } /* 6 */ , 
      { -1, 0, 0xff } /* 7 */  , { 0x03, 0, 0xff } /* 8 */ , { 0xc0, 0, 0xff } /* 9 */ , 
      { 0x03, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ , { 0x03, 0, 0xff } /* c */ , 
      { 0x40, 0, 0xff } /* d */  }
    },
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f2220", "18f2220", "pic18f2220", "f2220"},
    0,
    0x200,	/* 512 */
    0x80,
    0,
    { 0xf80, 0xfff },	/* PIC18F2220 range of SFR's */
    {
    /* PIC18F2220 configuration words */
      0x300001,
      0x30000d,
      { { 0xcf, 0, 0xff } /* 1 */ , { 0x0f, 0, 0xff } /* 2 */ , { 0x1f, 0, 0xff } /* 3 */ , 
      { -1, 0, 0xff } /* 4 */  , { 0x83, 0, 0xff } /* 5 */ , { 0x85, 0, 0xff } /* 6 */ , 
      { -1, 0, 0xff } /* 7 */  , { 0x0f, 0, 0xff } /* 8 */ , { 0xc0, 0, 0xff } /* 9 */ , 
      { 0x0f, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ , { 0x0f, 0, 0xff } /* c */ , 
      { 0x40, 0, 0xff } /* d */  }
    },
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f2221", "18f2221", "pic18f2221", "f2221"}, // also: 2321, 4221, 4321
    0,			/* always 0 */
    0x200,		/* RAM in bytes */
    0x80,		/* access bank split */
    0,			/* always 0 */
    { 0xf80, 0xfff },	/* range of SFR's */
    {
    /* configuration words */
      0x300001,		/* first address */
      0x30000d,		/* last address */
      { { 0xcf, 0, 0x37 } /* 1 */ , { 0x1f, 0, 0xff } /* 2 */ , { 0x1f, 0, 0xff } /* 3 */ , 
        {  -1 , 0, 0xff } /* 4 */ , { 0x87, 0, 0xfb } /* 5 */ , { 0xf5, 0, 0x8f } /* 6 */ ,
	{  -1 , 0, 0xff } /* 7 */ , { 0x03, 0, 0xff } /* 8 */ , { 0xc0, 0, 0xff } /* 9 */ ,
	{ 0x03, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ ,  { 0x03, 0, 0xff } /* c */ ,
	{ 0x40, 0, 0xff } /* d */ }
    },
    /* IDLOCs --- always 0 */
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f2320", "18f2320", "pic18f2320", "f2320"},
    0,
    0x200,	/* 512 */
    0x80,
    0,
    { 0xf80, 0xfff },	/* PIC18F2320 range of SFR's */
    {
    /* PIC18F2320 configuration words */
      0x300001,
      0x30000d,
      { { 0xcf, 0, 0xff } /* 1 */ , { 0x0f, 0, 0xff } /* 2 */ , { 0x1f, 0, 0xff } /* 3 */ , 
      { -1, 0, 0xff } /* 4 */  , { 0x83, 0, 0xff } /* 5 */ , { 0x85, 0, 0xff } /* 6 */ , 
      { -1, 0, 0xff } /* 7 */  , { 0x0f, 0, 0xff } /* 8 */ , { 0xc0, 0, 0xff } /* 9 */ , 
      { 0x0f, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ , { 0x0f, 0, 0xff } /* c */ , 
      { 0x40, 0, 0xff } /* d */  }
    },
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f2321", "18f2321", "pic18f2321", "f2321"}, // also: 2221, 4221, 4321
    0,			/* always 0 */
    0x200,		/* RAM in bytes */
    0x80,		/* access bank split */
    0,			/* always 0 */
    { 0xf80, 0xfff },	/* range of SFR's */
    {
    /* configuration words */
      0x300001,		/* first address */
      0x30000d,		/* last address */
      { { 0xcf, 0, 0x37 } /* 1 */ , { 0x1f, 0, 0xff } /* 2 */ , { 0x1f, 0, 0xff } /* 3 */ , 
        {  -1 , 0, 0xff } /* 4 */ , { 0x87, 0, 0xfb } /* 5 */ , { 0xf5, 0, 0x8f } /* 6 */ ,
	{  -1 , 0, 0xff } /* 7 */ , { 0x03, 0, 0xff } /* 8 */ , { 0xc0, 0, 0xff } /* 9 */ ,
	{ 0x03, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ ,  { 0x03, 0, 0xff } /* c */ ,
	{ 0x40, 0, 0xff } /* d */ }
    },
    /* IDLOCs --- always 0 */
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f2331", "18f2331", "pic18f2331", "f2331"}, // also: 18f[24][34]31
    0,			/* always 0 */
    0x300,		/* RAM in bytes */
    0x60,		/* access bank split */
    0,			/* always 0 */
    { 0xf60, 0xfff },	/* range of SFR's */
    {
    /* configuration words */
      0x300001,		/* first address */
      0x30000d,		/* last address */
      { { 0xcf, 0, 0xff } /* 1 */ , { 0x0f, 0, 0xff } /* 2 */ , { 0x1f, 0, 0xff } /* 3 */ , 
        { 0x3c, 0, 0xff } /* 4 */ , { 0x9b, 0, 0xff } /* 5 */ , { 0x85, 0, 0xff } /* 6 */ ,
	{  -1 , 0, 0xff } /* 7 */ , { 0x0f, 0, 0xff } /* 8 */ , { 0xc0, 0, 0xff } /* 9 */ ,
	{ 0x0f, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ ,  { 0x0f, 0, 0xff } /* c */ ,
	{ 0x40, 0, 0xff } /* d */ }
    },
    /* IDLOCs --- always 0 */
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f2431", "18f2431", "pic18f2431", "f2431"}, // also: 18f[24][34]31
    0,			/* always 0 */
    0x300,		/* RAM in bytes */
    0x60,		/* access bank split */
    0,			/* always 0 */
    { 0xf60, 0xfff },	/* range of SFR's */
    {
    /* configuration words */
      0x300001,		/* first address */
      0x30000d,		/* last address */
      { { 0xcf, 0, 0xff } /* 1 */ , { 0x0f, 0, 0xff } /* 2 */ , { 0x1f, 0, 0xff } /* 3 */ , 
        { 0x3c, 0, 0xff } /* 4 */ , { 0x9b, 0, 0xff } /* 5 */ , { 0x85, 0, 0xff } /* 6 */ ,
	{  -1 , 0, 0xff } /* 7 */ , { 0x0f, 0, 0xff } /* 8 */ , { 0xc0, 0, 0xff } /* 9 */ ,
	{ 0x0f, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ ,  { 0x0f, 0, 0xff } /* c */ ,
	{ 0x40, 0, 0xff } /* d */ }
    },
    /* IDLOCs --- always 0 */
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f2455", "18f2455", "pic18f2455", "f2455"},
    0,
    0x800,	/* 2048 */
    0x60,
    0,
    { 0xf62, 0xfff },	/* PIC18F2455 range of SFR's */
    {
    /* PIC18F2455 configuration words */
      0x300000,
      0x30000d,
      { { 0x3f, 0, 0xff } /* 0 */ , { 0xcf, 0, 0xff } /* 1 */ , { 0x3f, 0, 0xff } /* 2 */ , 
      { 0x1f, 0, 0xff } /* 3 */ , { -1, 0, 0xff } /* 4 */  , { 0x87, 0, 0xff } /* 5 */ , 
      { 0xe5, 0, 0xff } /* 6 */ , { -1, 0, 0xff } /* 7 */  , { 0x0f, 0, 0xff } /* 8 */ , 
      { 0xc0, 0, 0xff } /* 9 */ , { 0x0f, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ , 
      { 0x0f, 0, 0xff } /* c */ , { 0x40, 0, 0xff } /* d */  }
    },
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f2525", "18f2525", "pic18f2525", "f2525"},
    0,
    0x1000,  /* 4096 */
    0x80,
    0,
    { 0xf80, 0xfff },   /* PIC18F4525,2525 range of SFR's */
    {
    /* PIC18F4525,2525 configuration words */
      0x300001,
      0x30000d,
      { { 0xcf, 0, 0xff } /* 1 */ , { 0x1f, 0, 0xff } /* 2 */ , { 0x1f, 0, 0xff } /* 3 */ , 
      { -1, 0, 0xff } /* 4 */ , { 0x87, 0, 0xff } /* 5 */ , { 0xc5, 0, 0xff } /* 6 */ , 
      { -1, 0, 0xff } /* 7 */  , { 0x07, 0, 0xff } /* 8 */ , { 0xc0, 0, 0xff } /* 9 */ , 
      { 0x07, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ , { 0x07, 0, 0xff } /* c */ , 
      { 0x40, 0, 0xff } /* d */  }
    },
    { 0x200000, 0x200007,
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f2550", "18f2550", "pic18f2550", "f2550"},
    0,
    0x800,	/* 2048 */
    0x60,
    0,
    { 0xf62, 0xfff },	/* PIC18F2550 range of SFR's */
    {
    /* PIC18F2550 configuration words */
      0x300000,
      0x30000d,
      { { 0x3f, 0, 0xff } /* 0 */ , { 0xcf, 0, 0xff } /* 1 */ , { 0x3f, 0, 0xff } /* 2 */ , 
      { 0x1f, 0, 0xff } /* 3 */ , { -1, 0, 0xff } /* 4 */  , { 0x87, 0, 0xff } /* 5 */ , 
      { 0xe5, 0, 0xff } /* 6 */ , { -1, 0, 0xff } /* 7 */  , { 0x0f, 0, 0xff } /* 8 */ , 
      { 0xc0, 0, 0xff } /* 9 */ , { 0x0f, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ , 
      { 0x0f, 0, 0xff } /* c */ , { 0x40, 0, 0xff } /* d */  }
    },
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f2620", "18f2620", "pic18f2620", "f2620"},
    0,
    0x1000,  /* 4096 */
    0x80,
    0,
    { 0xf80, 0xfff },   /* PIC18F4620,2620 range of SFR's */
    {
    /* PIC18F4620,2620 configuration words */
      0x300001,
      0x30000d,
      { { 0xcf, 0, 0xff } /* 1 */ , { 0x1f, 0, 0xff } /* 2 */ , { 0x1f, 0, 0xff } /* 3 */ , 
      { -1, 0, 0xff } /* 4 */ , { 0x87, 0, 0xff } /* 5 */ , { 0xc5, 0, 0xff } /* 6 */ , 
      { -1, 0, 0xff } /* 7 */  , { 0x0f, 0, 0xff } /* 8 */ , { 0xc0, 0, 0xff } /* 9 */ , 
      { 0x0f, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ , { 0x0f, 0, 0xff } /* c */ , 
      { 0x40, 0, 0xff } /* d */  }
    },
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f4220", "18f4220", "pic18f4220", "f4220"},
    0,
    0x200,	/* 512 */
    0x80,
    0,
    { 0xf80, 0xfff },	/* PIC18F4220 range of SFR's */
    {
    /* PIC18F4220 configuration words */
      0x300001,
      0x30000d,
      { { 0xcf, 0, 0xff } /* 1 */ , { 0x0f, 0, 0xff } /* 2 */ , { 0x1f, 0, 0xff } /* 3 */ , 
      { -1, 0, 0xff } /* 4 */  , { 0x83, 0, 0xff } /* 5 */ , { 0x85, 0, 0xff } /* 6 */ , 
      { -1, 0, 0xff } /* 7 */  , { 0x0f, 0, 0xff } /* 8 */ , { 0xc0, 0, 0xff } /* 9 */ , 
      { 0x0f, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ , { 0x0f, 0, 0xff } /* c */ , 
      { 0x40, 0, 0xff } /* d */  }
    },
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f4221", "18f4221", "pic18f4221", "f4221"}, // also: 2221, 2321, 4321
    0,			/* always 0 */
    0x200,		/* RAM in bytes */
    0x80,		/* access bank split */
    0,			/* always 0 */
    { 0xf80, 0xfff },	/* range of SFR's */
    {
    /* configuration words */
      0x300001,		/* first address */
      0x30000d,		/* last address */
      { { 0xcf, 0, 0x37 } /* 1 */ , { 0x1f, 0, 0xff } /* 2 */ , { 0x1f, 0, 0xff } /* 3 */ , 
        {  -1 , 0, 0xff } /* 4 */ , { 0x87, 0, 0xfb } /* 5 */ , { 0xf5, 0, 0x8f } /* 6 */ ,
	{  -1 , 0, 0xff } /* 7 */ , { 0x03, 0, 0xff } /* 8 */ , { 0xc0, 0, 0xff } /* 9 */ ,
	{ 0x03, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ ,  { 0x03, 0, 0xff } /* c */ ,
	{ 0x40, 0, 0xff } /* d */ }
    },
    /* IDLOCs --- always 0 */
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f4320", "18f4320", "pic18f4320", "f4320"},
    0,
    0x200,	/* 512 */
    0x80,
    0,
    { 0xf80, 0xfff },	/* PIC18F4320 range of SFR's */
    {
    /* PIC18F4320 configuration words */
      0x300001,
      0x30000d,
      { { 0xcf, 0, 0xff } /* 1 */ , { 0x0f, 0, 0xff } /* 2 */ , { 0x1f, 0, 0xff } /* 3 */ , 
      { -1, 0, 0xff } /* 4 */  , { 0x83, 0, 0xff } /* 5 */ , { 0x85, 0, 0xff } /* 6 */ , 
      { -1, 0, 0xff } /* 7 */  , { 0x0f, 0, 0xff } /* 8 */ , { 0xc0, 0, 0xff } /* 9 */ , 
      { 0x0f, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ , { 0x0f, 0, 0xff } /* c */ , 
      { 0x40, 0, 0xff } /* d */  }
    },
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f4321", "18f4321", "pic18f4321", "f4321"}, // also: 2221, 2321, 4221
    0,			/* always 0 */
    0x200,		/* RAM in bytes */
    0x80,		/* access bank split */
    0,			/* always 0 */
    { 0xf80, 0xfff },	/* range of SFR's */
    {
    /* configuration words */
      0x300001,		/* first address */
      0x30000d,		/* last address */
      { { 0xcf, 0, 0x37 } /* 1 */ , { 0x1f, 0, 0xff } /* 2 */ , { 0x1f, 0, 0xff } /* 3 */ , 
        {  -1 , 0, 0xff } /* 4 */ , { 0x87, 0, 0xfb } /* 5 */ , { 0xf5, 0, 0x8f } /* 6 */ ,
	{  -1 , 0, 0xff } /* 7 */ , { 0x03, 0, 0xff } /* 8 */ , { 0xc0, 0, 0xff } /* 9 */ ,
	{ 0x03, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ ,  { 0x03, 0, 0xff } /* c */ ,
	{ 0x40, 0, 0xff } /* d */ }
    },
    /* IDLOCs --- always 0 */
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f4331", "18f4331", "pic18f4331", "f4331"}, // also: 18f[24][34]31
    0,			/* always 0 */
    0x300,		/* RAM in bytes */
    0x60,		/* access bank split */
    0,			/* always 0 */
    { 0xf60, 0xfff },	/* range of SFR's */
    {
    /* configuration words */
      0x300001,		/* first address */
      0x30000d,		/* last address */
      { { 0xcf, 0, 0xff } /* 1 */ , { 0x0f, 0, 0xff } /* 2 */ , { 0x1f, 0, 0xff } /* 3 */ , 
        { 0x3c, 0, 0xff } /* 4 */ , { 0x9b, 0, 0xff } /* 5 */ , { 0x85, 0, 0xff } /* 6 */ ,
	{  -1 , 0, 0xff } /* 7 */ , { 0x0f, 0, 0xff } /* 8 */ , { 0xc0, 0, 0xff } /* 9 */ ,
	{ 0x0f, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ ,  { 0x0f, 0, 0xff } /* c */ ,
	{ 0x40, 0, 0xff } /* d */ }
    },
    /* IDLOCs --- always 0 */
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f4431", "18f4431", "pic18f4431", "f4431"}, // also: 18f[24][34]31
    0,			/* always 0 */
    0x300,		/* RAM in bytes */
    0x60,		/* access bank split */
    0,			/* always 0 */
    { 0xf60, 0xfff },	/* range of SFR's */
    {
    /* configuration words */
      0x300001,		/* first address */
      0x30000d,		/* last address */
      { { 0xcf, 0, 0xff } /* 1 */ , { 0x0f, 0, 0xff } /* 2 */ , { 0x1f, 0, 0xff } /* 3 */ , 
        { 0x3c, 0, 0xff } /* 4 */ , { 0x9b, 0, 0xff } /* 5 */ , { 0x85, 0, 0xff } /* 6 */ ,
	{  -1 , 0, 0xff } /* 7 */ , { 0x0f, 0, 0xff } /* 8 */ , { 0xc0, 0, 0xff } /* 9 */ ,
	{ 0x0f, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ ,  { 0x0f, 0, 0xff } /* c */ ,
	{ 0x40, 0, 0xff } /* d */ }
    },
    /* IDLOCs --- always 0 */
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f4455", "18f4455", "pic18f4455", "f4455"},
    0,
    0x800,	/* 2048 */
    0x60,
    0,
    { 0xf62, 0xfff },	/* PIC18F4455 range of SFR's */
    {
    /* PIC18F4455 configuration words */
      0x300000,
      0x30000d,
      { { 0x3f, 0, 0xff } /* 0 */ , { 0xcf, 0, 0xff } /* 1 */ , { 0x3f, 0, 0xff } /* 2 */ , 
      { 0x1f, 0, 0xff } /* 3 */ , { -1, 0, 0xff } /* 4 */  , { 0x87, 0, 0xff } /* 5 */ , 
      { 0xe5, 0, 0xff } /* 6 */ , { -1, 0, 0xff } /* 7 */  , { 0x0f, 0, 0xff } /* 8 */ , 
      { 0xc0, 0, 0xff } /* 9 */ , { 0x0f, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ , 
      { 0x0f, 0, 0xff } /* c */ , { 0x40, 0, 0xff } /* d */  }
    },
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f4520", "18f4520", "pic18f4520", "f4520"},
    0,
    0x1000,	/* 4096 */
    0x80,
    0,
    { 0xf80, 0xfff },	/* PIC18F4520 range of SFR's */
    {
    /* PIC18F4520 configuration words */
      0x300000,
      0x30000d,
      { { 0x3f, 0, 0xff } /* 0 */ , { 0xcf, 0, 0xff } /* 1 */ , { 0x1f, 0, 0xff } /* 2 */ , 
      { 0x1f, 0, 0xff } /* 3 */ , { -1, 0, 0xff } /* 4 */  , { 0x87, 0, 0xff } /* 5 */ , 
      { 0xc5, 0, 0xff } /* 6 */ , { -1, 0, 0xff } /* 7 */  , { 0x0f, 0, 0xff } /* 8 */ , 
      { 0xc0, 0, 0xff } /* 9 */ , { 0x0f, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ , 
      { 0x0f, 0, 0xff } /* c */ , { 0x40, 0, 0xff } /* d */  }
    },
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f4525", "18f4525", "pic18f4525", "f4525"},
    0,
    0x1000,  /* 4096 */
    0x80,
    0,
    { 0xf80, 0xfff },   /* PIC18F4525,2525 range of SFR's */
    {
    /* PIC18F4525,2525 configuration words */
      0x300001,
      0x30000d,
      { { 0xcf, 0, 0xff } /* 1 */ , { 0x1f, 0, 0xff } /* 2 */ , { 0x1f, 0, 0xff } /* 3 */ , 
      { -1, 0, 0xff } /* 4 */ , { 0x87, 0, 0xff } /* 5 */ , { 0xc5, 0, 0xff } /* 6 */ , 
      { -1, 0, 0xff } /* 7 */  , { 0x07, 0, 0xff } /* 8 */ , { 0xc0, 0, 0xff } /* 9 */ , 
      { 0x07, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ , { 0x07, 0, 0xff } /* c */ , 
      { 0x40, 0, 0xff } /* d */  }
    },
    { 0x200000, 0x200007,
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f4550", "18f4550", "pic18f4550", "f4550"},
    0,
    0x800,	/* 2048 */
    0x60,
    0,
    { 0xf62, 0xfff },	/* PIC18F4550 range of SFR's */
    {
    /* PIC18F4550 configuration words */
      0x300000,
      0x30000d,
      { { 0x3f, 0, 0xff } /* 0 */ , { 0xcf, 0, 0xff } /* 1 */ , { 0x3f, 0, 0xff } /* 2 */ , 
      { 0x1f, 0, 0xff } /* 3 */ , { -1, 0, 0xff } /* 4 */  , { 0x87, 0, 0xff } /* 5 */ , 
      { 0xe5, 0, 0xff } /* 6 */ , { -1, 0, 0xff } /* 7 */  , { 0x0f, 0, 0xff } /* 8 */ , 
      { 0xc0, 0, 0xff } /* 9 */ , { 0x0f, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ , 
      { 0x0f, 0, 0xff } /* c */ , { 0x40, 0, 0xff } /* d */  }
    },
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f4620", "18f4620", "pic18f4620", "f4620"},
    0,
    0x1000,  /* 4096 */
    0x80,
    0,
    { 0xf80, 0xfff },   /* PIC18F4620,2620 range of SFR's */
    {
    /* PIC18F4620,2620 configuration words */
      0x300001,
      0x30000d,
      { { 0xcf, 0, 0xff } /* 1 */ , { 0x1f, 0, 0xff } /* 2 */ , { 0x1f, 0, 0xff } /* 3 */ , 
      { -1, 0, 0xff } /* 4 */ , { 0x87, 0, 0xff } /* 5 */ , { 0xc5, 0, 0xff } /* 6 */ , 
      { -1, 0, 0xff } /* 7 */  , { 0x0f, 0, 0xff } /* 8 */ , { 0xc0, 0, 0xff } /* 9 */ , 
      { 0x0f, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ , { 0x0f, 0, 0xff } /* c */ , 
      { 0x40, 0, 0xff } /* d */  }
    },
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f6520", "18f6520", "pic18f6520", "f6520"},
    0,
    0x800,	/* 2048 */
    0x60,
    0,
    { 0xf6b, 0xfff },	/* PIC18F6520 range of SFR's */
    {
    /* PIC18F6520 configuration words */
      0x300001,
      0x30000d,
      { { 0x27, 0, 0xff } /* 1 */ , { 0x0f, 0, 0xff } /* 2 */ , { 0x0f, 0, 0xff } /* 3 */ , 
      { 0x83, 0, 0xff } /* 4 */ , { 0x03, 0, 0xff } /* 5 */ , { 0x85, 0, 0xff } /* 6 */ , 
      { -1, 0, 0xff } /* 7 */  , { 0xff, 0, 0xff } /* 8 */ , { 0xc0, 0, 0xff } /* 9 */ , 
      { 0xff, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ , { 0xff, 0, 0xff } /* c */ , 
      { 0x40, 0, 0xff } /* d */  }
    },
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f6620", "18f6620", "pic18f6620", "f6620"},
    0,
    0xf00,	/* 3840 */
    0x60,
    0,
    { 0xf6b, 0xfff },	/* PIC18F6620 range of SFR's */
    {
    /* PIC18F6620 configuration words */
      0x300001,
      0x30000d,
      { { 0x27, 0, 0xff } /* 1 */ , { 0x0f, 0, 0xff } /* 2 */ , { 0x0f, 0, 0xff } /* 3 */ , 
      { 0x83, 0, 0xff } /* 4 */ , { 0x03, 0, 0xff } /* 5 */ , { 0x85, 0, 0xff } /* 6 */ , 
      { -1, 0, 0xff } /* 7 */  , { 0xff, 0, 0xff } /* 8 */ , { 0xc0, 0, 0xff } /* 9 */ , 
      { 0xff, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ , { 0xff, 0, 0xff } /* c */ , 
      { 0x40, 0, 0xff } /* d */  }
    },
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f6680", "18f6680", "pic18f6680", "f6680"},
    0,
    0xf00,	/* 3840 */
    0x60,
    0,
    { 0xd60, 0xfff },	/* PIC18F6680 range of SFR's */
    {
    /* PIC18F6680 configuration words */
      0x300001,
      0x30000d,
      { { 0x2f, 0, 0xff } /* 1 */ , { 0x0f, 0, 0xff } /* 2 */ , { 0x1f, 0, 0xff } /* 3 */ , 
      { 0x83, 0, 0xff } /* 4 */ , { 0x81, 0, 0xff } /* 5 */ , { 0x85, 0, 0xff } /* 6 */ , 
      { -1, 0, 0xff } /* 7 */  , { 0x0f, 0, 0xff } /* 8 */ , { 0xc0, 0, 0xff } /* 9 */ , 
      { 0x0f, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ , { 0x0f, 0, 0xff } /* c */ , 
      { 0x40, 0, 0xff } /* d */  }
    },
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f6720", "18f6720", "pic18f6720", "f6720"},
    0,
    0xf00,	/* 3840 */
    0x60,
    0,
    { 0xf6b, 0xfff },	/* PIC18F6720 range of SFR's */
    {
    /* PIC18F6720 configuration words */
      0x300001,
      0x30000d,
      { { 0x27, 0, 0xff } /* 1 */ , { 0x0f, 0, 0xff } /* 2 */ , { 0x0f, 0, 0xff } /* 3 */ , 
      { 0x83, 0, 0xff } /* 4 */ , { 0x03, 0, 0xff } /* 5 */ , { 0x85, 0, 0xff } /* 6 */ , 
      { -1, 0, 0xff } /* 7 */  , { 0xff, 0, 0xff } /* 8 */ , { 0xc0, 0, 0xff } /* 9 */ , 
      { 0xff, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ , { 0xff, 0, 0xff } /* c */ , 
      { 0x40, 0, 0xff } /* d */  }
    },
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f8520", "18f8520", "pic18f8520", "f8520"},
    0,
    0x800,	/* 2048 */
    0x60,
    1,
    { 0xf6b, 0xfff },	/* PIC18F8520 range of SFR's */
    {
    /* PIC18F8520 configuration words */
      0x300001,
      0x30000d,
      { { 0x27, 0, 0xff } /* 1 */ , { 0x0f, 0, 0xff } /* 2 */ , { 0x0f, 0, 0xff } /* 3 */ , 
      { 0x83, 0, 0xff } /* 4 */ , { 0x03, 0, 0xff } /* 5 */ , { 0x85, 0, 0xff } /* 6 */ , 
      { -1, 0, 0xff } /* 7 */  , { 0xff, 0, 0xff } /* 8 */ , { 0xc0, 0, 0xff } /* 9 */ , 
      { 0xff, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ , { 0xff, 0, 0xff } /* c */ , 
      { 0x40, 0, 0xff } /* d */  }
    },
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f8620", "18f8620", "pic18f8620", "f8620"},
    0,
    0xf00,	/* 3840 */
    0x60,
    1,
    { 0xf6b, 0xfff },	/* PIC18F8620 range of SFR's */
    {
    /* PIC18F8620 configuration words */
      0x300001,
      0x30000d,
      { { 0x27, 0, 0xff } /* 1 */ , { 0x0f, 0, 0xff } /* 2 */ , { 0x0f, 0, 0xff } /* 3 */ , 
      { 0x83, 0, 0xff } /* 4 */ , { 0x03, 0, 0xff } /* 5 */ , { 0x85, 0, 0xff } /* 6 */ , 
      { -1, 0, 0xff } /* 7 */  , { 0xff, 0, 0xff } /* 8 */ , { 0xc0, 0, 0xff } /* 9 */ , 
      { 0xff, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ , { 0xff, 0, 0xff } /* c */ , 
      { 0x40, 0, 0xff } /* d */  }
    },
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f8680", "18f8680", "pic18f8680", "f8680"},
    0,
    0xf00,	/* 3840 */
    0x60,
    1,
    { 0xd60, 0xfff },	/* PIC18F8680 range of SFR's */
    {
    /* PIC18F8680 configuration words */
      0x300001,
      0x30000d,
      { { 0x2f, 0, 0xff } /* 1 */ , { 0x0f, 0, 0xff } /* 2 */ , { 0x1f, 0, 0xff } /* 3 */ , 
      { 0x83, 0, 0xff } /* 4 */ , { 0x81, 0, 0xff } /* 5 */ , { 0x85, 0, 0xff } /* 6 */ , 
      { -1, 0, 0xff } /* 7 */  , { 0x0f, 0, 0xff } /* 8 */ , { 0xc0, 0, 0xff } /* 9 */ , 
      { 0x0f, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ , { 0x0f, 0, 0xff } /* c */ , 
      { 0x40, 0, 0xff } /* d */  }
    },
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  },
  {
    {"p18f8720", "18f8720", "pic18f8720", "f8720"},
    0,
    0xf00,	/* 3840 */
    0x60,
    1,
    { 0xf6b, 0xfff },	/* PIC18F8720 range of SFR's */
    {
    /* PIC18F8720 configuration words */
      0x300001,
      0x30000d,
      { { 0x27, 0, 0xff } /* 1 */ , { 0x0f, 0, 0xff } /* 2 */ , { 0x0f, 0, 0xff } /* 3 */ , 
      { 0x83, 0, 0xff } /* 4 */ , { 0x03, 0, 0xff } /* 5 */ , { 0x85, 0, 0xff } /* 6 */ , 
      { -1, 0, 0xff } /* 7 */  , { 0xff, 0, 0xff } /* 8 */ , { 0xc0, 0, 0xff } /* 9 */ , 
      { 0xff, 0, 0xff } /* a */ , { 0xe0, 0, 0xff } /* b */ , { 0xff, 0, 0xff } /* c */ , 
      { 0x40, 0, 0xff } /* d */  }
    },
    { 0x200000, 0x200007, 
      { { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 }, 
        { 0, 0 }, { 0, 0 }, { 0, 0 } }
    }
  }
