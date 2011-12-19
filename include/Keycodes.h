/*

  LTE Game Engine SDK:

   Copyright (C) 2006, SiberianSTAR <haxormail@gmail.com>

  Based on Irrlicht 1.0:
 
   Copyright (C) 2002-2006 Nikolaus Gebhardt

  For conditions of distribution and use, see copyright notice in
  engine.h
 
  http://www.ltestudios.com

*/

#ifndef __engine_KEY_CODES_H_INCLUDED__
#define __engine_KEY_CODES_H_INCLUDED__

namespace engine
{

	enum EKEY_CODE
	{
		KEY_LBUTTON          = 0x01,  // Left mouse button  
		KEY_RBUTTON          = 0x02,  // Right mouse button  
		KEY_UP               = 0x03,
    KEY_DOWN             = 0x04,
    KEY_LEFT             = 0x05,
    KEY_RIGHT            = 0x06,
    KEY_TRIANGLE         = 0x07,
    KEY_CIRCLE           = 0x08,
    KEY_CROSS            = 0x09,
    KEY_SQUARE           = 0x0A, 
    KEY_START            = 0x0B, 
    KEY_SELECT           = 0x0C,
    KEY_NOTE             = 0x0D, 
    KEY_LIGHT            = 0x0E, 
    KEY_VOLUME_UP        = 0x0F,
    KEY_VOLUME_DOWN      = 0x10,
    KEY_HOME             = 0x11,
    KEY_SPACE            = 0x12,
    KEY_RETURN           = 0x13,
    KEY_BACK             = 0x14,
    KEY_DELETE           = 0x15,
    KEY_END              = 0x16,
    KEY_KEY_C            = 0x17,
    KEY_KEY_X            = 0x18,
    KEY_KEY_V            = 0x19,
    DUMMY_KEY26          =  0x1A,
    DUMMY_KEY27          =  0x1B,
    DUMMY_KEY28          =  0x1C,
    DUMMY_KEY29          =  0x1D,
    DUMMY_KEY30          =  0x1E,
    DUMMY_KEY31          =  0x1F,
    DUMMY_KEY32          =  0x20,
    DUMMY_KEY33          =  0x21,
    DUMMY_KEY34          =  0x22,
    DUMMY_KEY35          =  0x23,
    DUMMY_KEY36          =  0x24,
    DUMMY_KEY37          =  0x25,
    DUMMY_KEY38          =  0x26,
    DUMMY_KEY39          =  0x27,
    DUMMY_KEY40          =  0x28,
    DUMMY_KEY41          =  0x29,
    DUMMY_KEY42          =  0x2A,
    DUMMY_KEY43          =  0x2B,
    DUMMY_KEY44          =  0x2C,
    DUMMY_KEY45          =  0x2D,
    DUMMY_KEY46          =  0x2E,
    DUMMY_KEY47          =  0x2F,
    DUMMY_KEY48          =  0x30,
    DUMMY_KEY49          =  0x31,
    DUMMY_KEY50          =  0x32,
    DUMMY_KEY51          =  0x33,
    DUMMY_KEY52          =  0x34,
    DUMMY_KEY53          =  0x35,
    DUMMY_KEY54          =  0x36,
    DUMMY_KEY55          =  0x37,
    DUMMY_KEY56          =  0x38,
    DUMMY_KEY57          =  0x39,
    DUMMY_KEY58          =  0x3A,
    DUMMY_KEY59          =  0x3B,
    DUMMY_KEY60          =  0x3C,
    DUMMY_KEY61          =  0x3D,
    DUMMY_KEY62          =  0x3E,
    DUMMY_KEY63          =  0x3F,
    DUMMY_KEY64          =  0x40,
    DUMMY_KEY65          =  0x41,
    DUMMY_KEY66          =  0x42,
    DUMMY_KEY67          =  0x43,
    DUMMY_KEY68          =  0x44,
    DUMMY_KEY69          =  0x45,
    DUMMY_KEY70          =  0x46,
    DUMMY_KEY71          =  0x47,
    DUMMY_KEY72          =  0x48,
    DUMMY_KEY73          =  0x49,
    DUMMY_KEY74          =  0x4A,
    DUMMY_KEY75          =  0x4B,
    DUMMY_KEY76          =  0x4C,
    DUMMY_KEY77          =  0x4D,
    DUMMY_KEY78          =  0x4E,
    DUMMY_KEY79          =  0x4F,
    DUMMY_KEY80          =  0x50,
    DUMMY_KEY81          =  0x51,
    DUMMY_KEY82          =  0x52,
    DUMMY_KEY83          =  0x53,
    DUMMY_KEY84          =  0x54,
    DUMMY_KEY85          =  0x55,
    DUMMY_KEY86          =  0x56,
    DUMMY_KEY87          =  0x57,
    DUMMY_KEY88          =  0x58,
    DUMMY_KEY89          =  0x59,
    DUMMY_KEY90          =  0x5A,
    DUMMY_KEY91          =  0x5B,
    DUMMY_KEY92          =  0x5C,
    DUMMY_KEY93          =  0x5D,
    DUMMY_KEY94          =  0x5E,
    DUMMY_KEY95          =  0x5F,
    DUMMY_KEY96          =  0x60,
    DUMMY_KEY97          =  0x61,
    DUMMY_KEY98          =  0x62,
    DUMMY_KEY99          =  0x63,
    DUMMY_KEY100          =  0x64,
    DUMMY_KEY101          =  0x65,
    DUMMY_KEY102          =  0x66,
    DUMMY_KEY103          =  0x67,
    DUMMY_KEY104          =  0x68,
    DUMMY_KEY105          =  0x69,
    DUMMY_KEY106          =  0x6A,
    DUMMY_KEY107          =  0x6B,
    DUMMY_KEY108          =  0x6C,
    DUMMY_KEY109          =  0x6D,
    DUMMY_KEY110          =  0x6E,
    DUMMY_KEY111          =  0x6F,
    DUMMY_KEY112          =  0x70,
    DUMMY_KEY113          =  0x71,
    DUMMY_KEY114          =  0x72,
    DUMMY_KEY115          =  0x73,
    DUMMY_KEY116          =  0x74,
    DUMMY_KEY117          =  0x75,
    DUMMY_KEY118          =  0x76,
    DUMMY_KEY119          =  0x77,
    DUMMY_KEY120          =  0x78,
    DUMMY_KEY121          =  0x79,
    DUMMY_KEY122          =  0x7A,
    DUMMY_KEY123          =  0x7B,
    DUMMY_KEY124          =  0x7C,
    DUMMY_KEY125          =  0x7D,
    DUMMY_KEY126          =  0x7E,
    DUMMY_KEY127          =  0x7F,
    DUMMY_KEY128          =  0x80,
    DUMMY_KEY129          =  0x81,
    DUMMY_KEY130          =  0x82,
    DUMMY_KEY131          =  0x83,
    DUMMY_KEY132          =  0x84,
    DUMMY_KEY133          =  0x85,
    DUMMY_KEY134          =  0x86,
    DUMMY_KEY135          =  0x87,
    DUMMY_KEY136          =  0x88,
    DUMMY_KEY137          =  0x89,
    DUMMY_KEY138          =  0x8A,
    DUMMY_KEY139          =  0x8B,
    DUMMY_KEY140          =  0x8C,
    DUMMY_KEY141          =  0x8D,
    DUMMY_KEY142          =  0x8E,
    DUMMY_KEY143          =  0x8F,
    DUMMY_KEY144          =  0x90,
    DUMMY_KEY145          =  0x91,
    DUMMY_KEY146          =  0x92,
    DUMMY_KEY147          =  0x93,
    DUMMY_KEY148          =  0x94,
    DUMMY_KEY149          =  0x95,
    DUMMY_KEY150          =  0x96,
    DUMMY_KEY151          =  0x97,
    DUMMY_KEY152          =  0x98,
    DUMMY_KEY153          =  0x99,
    DUMMY_KEY154          =  0x9A,
    DUMMY_KEY155          =  0x9B,
    DUMMY_KEY156          =  0x9C,
    DUMMY_KEY157          =  0x9D,
    DUMMY_KEY158          =  0x9E,
    DUMMY_KEY159          =  0x9F,
    DUMMY_KEY160          =  0xA0,
    DUMMY_KEY161          =  0xA1,
    DUMMY_KEY162          =  0xA2,
    DUMMY_KEY163          =  0xA3,
    DUMMY_KEY164          =  0xA4,
    DUMMY_KEY165          =  0xA5,
    DUMMY_KEY166          =  0xA6,
    DUMMY_KEY167          =  0xA7,
    DUMMY_KEY168          =  0xA8,
    DUMMY_KEY169          =  0xA9,
    DUMMY_KEY170          =  0xAA,
    DUMMY_KEY171          =  0xAB,
    DUMMY_KEY172          =  0xAC,
    DUMMY_KEY173          =  0xAD,
    DUMMY_KEY174          =  0xAE,
    DUMMY_KEY175          =  0xAF,
    DUMMY_KEY176          =  0xB0,
    DUMMY_KEY177          =  0xB1,
    DUMMY_KEY178          =  0xB2,
    DUMMY_KEY179          =  0xB3,
    DUMMY_KEY180          =  0xB4,
    DUMMY_KEY181          =  0xB5,
    DUMMY_KEY182          =  0xB6,
    DUMMY_KEY183          =  0xB7,
    DUMMY_KEY184          =  0xB8,
    DUMMY_KEY185          =  0xB9,
    DUMMY_KEY186          =  0xBA,
    DUMMY_KEY187          =  0xBB,
    DUMMY_KEY188          =  0xBC,
    DUMMY_KEY189          =  0xBD,
    DUMMY_KEY190          =  0xBE,
    DUMMY_KEY191          =  0xBF,
    DUMMY_KEY192          =  0xC0,
    DUMMY_KEY193          =  0xC1,
    DUMMY_KEY194          =  0xC2,
    DUMMY_KEY195          =  0xC3,
    DUMMY_KEY196          =  0xC4,
    DUMMY_KEY197          =  0xC5,
    DUMMY_KEY198          =  0xC6,
    DUMMY_KEY199          =  0xC7,
    DUMMY_KEY200          =  0xC8,
    DUMMY_KEY201          =  0xC9,
    DUMMY_KEY202          =  0xCA,
    DUMMY_KEY203          =  0xCB,
    DUMMY_KEY204          =  0xCC,
    DUMMY_KEY205          =  0xCD,
    DUMMY_KEY206          =  0xCE,
    DUMMY_KEY207          =  0xCF,
    DUMMY_KEY208          =  0xD0,
    DUMMY_KEY209          =  0xD1,
    DUMMY_KEY210          =  0xD2,
    DUMMY_KEY211          =  0xD3,
    DUMMY_KEY212          =  0xD4,
    DUMMY_KEY213          =  0xD5,
    DUMMY_KEY214          =  0xD6,
    DUMMY_KEY215          =  0xD7,
    DUMMY_KEY216          =  0xD8,
    DUMMY_KEY217          =  0xD9,
    DUMMY_KEY218          =  0xDA,
    DUMMY_KEY219          =  0xDB,
    DUMMY_KEY220          =  0xDC,
    DUMMY_KEY221          =  0xDD,
    DUMMY_KEY222          =  0xDE,
    DUMMY_KEY223          =  0xDF,
    DUMMY_KEY224          =  0xE0,
    DUMMY_KEY225          =  0xE1,
    DUMMY_KEY226          =  0xE2,
    DUMMY_KEY227          =  0xE3,
    DUMMY_KEY228          =  0xE4,
    DUMMY_KEY229          =  0xE5,
    DUMMY_KEY230          =  0xE6,
    DUMMY_KEY231          =  0xE7,
    DUMMY_KEY232          =  0xE8,
    DUMMY_KEY233          =  0xE9,
    DUMMY_KEY234          =  0xEA,
    DUMMY_KEY235          =  0xEB,
    DUMMY_KEY236          =  0xEC,
    DUMMY_KEY237          =  0xED,
    DUMMY_KEY238          =  0xEE,
    DUMMY_KEY239          =  0xEF,
    DUMMY_KEY240          =  0xF0,
    DUMMY_KEY241          =  0xF1,
    DUMMY_KEY242          =  0xF2,
    DUMMY_KEY243          =  0xF3,
    DUMMY_KEY244          =  0xF4,
    DUMMY_KEY245          =  0xF5,
    DUMMY_KEY246          =  0xF6,
    DUMMY_KEY247          =  0xF7,
    DUMMY_KEY248          =  0xF8,
    DUMMY_KEY249          =  0xF9,
    DUMMY_KEY250          =  0xFA,
    DUMMY_KEY251          =  0xFB,
    DUMMY_KEY252          =  0xFC,
    DUMMY_KEY253          =  0xFD,
    DUMMY_KEY254          =  0xFE,

		KEY_KEY_CODES_COUNT  = 0xFF // this is not a key, but the amount of keycodes there are.
	};

} // end namespace engine

#endif

