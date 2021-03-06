/*
 * ThoughtTreasure
 * Copyright 1996, 1997, 1998, 1999, 2015 Erik Thomas Mueller.
 * All Rights Reserved.
 *
 * MS-DOS <-> Mac <-> ISO_8859_1 character set conversions.
 */

#include <stdio.h>

short CharsetPCToMacTable[] = {
	0x82,	/* 0x80 */
	0x9f,	/* 0x81 */
	0x8e,	/* 0x82 */
	0x89,	/* 0x83 */
	0x8a,	/* 0x84 */
	0x88,	/* 0x85 */
	0x8c,	/* 0x86 */
	0x8d,	/* 0x87 */
	0x90,	/* 0x88 */
	0x91,	/* 0x89 */
	0x8f,	/* 0x8a */
	0x95,	/* 0x8b */
	0x94,	/* 0x8c */
	0x93,	/* 0x8d */
	0x80,	/* 0x8e */
	0x81,	/* 0x8f */
	0x83,	/* 0x90 */
	0xbe,	/* 0x91 */
	0xae,	/* 0x92 */
	0x99,	/* 0x93 */
	0x9a,	/* 0x94 */
	0x98,	/* 0x95 */
	0x9e,	/* 0x96 */
	0x9d,	/* 0x97 */
	0xd8,	/* 0x98 */
	0x85,	/* 0x99 */
	0x86,	/* 0x9a */
	0xa2,	/* 0x9b */
	0xa3,	/* 0x9c */
	0xb4,	/* 0x9d */
	0x35,	/* 0x9e */
	0xc4,	/* 0x9f */
	0x87,	/* 0xa0 */
	0x92,	/* 0xa1 */
	0x97,	/* 0xa2 */
	0x9c,	/* 0xa3 */
	0x96,	/* 0xa4 */
	0x84,	/* 0xa5 */
	0xbb,	/* 0xa6 */
	0xbc,	/* 0xa7 */
	0xc0,	/* 0xa8 */
	0x35,	/* 0xa9 */
	0xc2,	/* 0xaa */
	0x35,	/* 0xab */
	0x35,	/* 0xac */
	0xc1,	/* 0xad */
	0xc7,	/* 0xae */
	0xc8	/* 0xaf */
};

int CharsetPCToMac(int c)
{
  if (c > 0xc8) return(0x35);
  else if (c > 0x7f) return(CharsetPCToMacTable[c-0x80]);
  else return(c);
}

short CharsetISO_8859_1ToMacTable[] = {
	0xe0,	/* (224) <= 0x80 (128) */
	0xe1,	/* (225) <= 0x81 (129) */
	0xe2,	/* (226) <= 0x82 (130) */
	0xe3,	/* (227) <= 0x83 (131) */
	0xe4,	/* (228) <= 0x84 (132) */
	0xe5,	/* (229) <= 0x85 (133) */
	0xe6,	/* (230) <= 0x86 (134) */
	0xe7,	/* (231) <= 0x87 (135) */
	0xe8,	/* (232) <= 0x88 (136) */
	0xe9,	/* (233) <= 0x89 (137) */
	0xea,	/* (234) <= 0x8a (138) */
	0xeb,	/* (235) <= 0x8b (139) */
	0xec,	/* (236) <= 0x8c (140) */
	0xed,	/* (237) <= 0x8d (141) */
	0xee,	/* (238) <= 0x8e (142) */
	0xef,	/* (239) <= 0x8f (143) */
	0xf0,	/* (240) <= 0x90 (144) */
	0xf1,	/* (241) <= 0x91 (145) */
	0xf2,	/* (242) <= 0x92 (146) */
	0xf3,	/* (243) <= 0x93 (147) */
	0xf4,	/* (244) <= 0x94 (148) */
	0xf5,	/* (245) <= 0x95 (149) */
	0xf6,	/* (246) <= 0x96 (150) */
	0xf7,	/* (247) <= 0x97 (151) */
	0xf8,	/* (248) <= 0x98 (152) */
	0xf9,	/* (249) <= 0x99 (153) */
	0xfa,	/* (250) <= 0x9a (154) */
	0xfb,	/* (251) <= 0x9b (155) */
	0xfc,	/* (252) <= 0x9c (156) */
	0xfd,	/* (253) <= 0x9d (157) */
	0xfe,	/* (254) <= 0x9e (158) */
	0xff,	/* (255) <= 0x9f (159) */
	0xca,	/* (202) <= 0xa0 (160) */
	0xc1,	/* (193) <= 0xa1 (161) */
	0xa2,	/* (162) <= 0xa2 (162) */
	0xa3,	/* (163) <= 0xa3 (163) */
	0xad,	/* (173) <= 0xa4 (164) */
	0xb4,	/* (180) <= 0xa5 (165) */
	0xd1,	/* (209) <= 0xa6 (166) */
	0xa4,	/* (164) <= 0xa7 (167) */
	0xac,	/* (172) <= 0xa8 (168) */
	0xa9,	/* (169) <= 0xa9 (169) */
	0xbb,	/* (187) <= 0xaa (170) */
	0xc7,	/* (199) <= 0xab (171) */
	0xc2,	/* (194) <= 0xac (172) */
	0xd0,	/* (208) <= 0xad (173) */
	0xa8,	/* (168) <= 0xae (174) */
	0xc9,	/* (201) <= 0xaf (175) */
	0xa1,	/* (161) <= 0xb0 (176) */
	0xb1,	/* (177) <= 0xb1 (177) */
	0xaa,	/* (170) <= 0xb2 (178) */
	0xb0,	/* (176) <= 0xb3 (179) */
	0xab,	/* (171) <= 0xb4 (180) */
	0xb5,	/* (181) <= 0xb5 (181) */
	0xa6,	/* (166) <= 0xb6 (182) */
	0xa5,	/* (165) <= 0xb7 (183) */
	0xc5,	/* (197) <= 0xb8 (184) */
	0xc4,	/* (196) <= 0xb9 (185) */
	0xbc,	/* (188) <= 0xba (186) */
	0xc8,	/* (200) <= 0xbb (187) */
	0xb2,	/* (178) <= 0xbc (188) */
	0xd7,	/* (215) <= 0xbd (189) */
	0xb3,	/* (179) <= 0xbe (190) */
	0xc0,	/* (192) <= 0xbf (191) */
	0xcb,	/* (203) <= 0xc0 (192) */
	0xd5,	/* (213) <= 0xc1 (193) */
	0xdd,	/* (221) <= 0xc2 (194) */
	0xcc,	/* (204) <= 0xc3 (195) */
	0x80,	/* (128) <= 0xc4 (196) */
	0x81,	/* (129) <= 0xc5 (197) */
	0xae,	/* (174) <= 0xc6 (198) */
	0x82,	/* (130) <= 0xc7 (199) */
	0xd4,	/* (212) <= 0xc8 (200) */
	0x83,	/* (131) <= 0xc9 (201) */
	0xdc,	/* (220) <= 0xca (202) */
	0xb7,	/* (183) <= 0xcb (203) */
	0xd2,	/* (210) <= 0xcc (204) */
	0xd3,	/* (211) <= 0xcd (205) */
	0xa0,	/* (160) <= 0xce (206) */
	0xba,	/* (186) <= 0xcf (207) */
	0xc6,	/* (198) <= 0xd0 (208) */
	0x84,	/* (132) <= 0xd1 (209) */
	0xce,	/* (206) <= 0xd2 (210) */
	0xcf,	/* (207) <= 0xd3 (211) */
	0xbd,	/* (189) <= 0xd4 (212) */
	0xcd,	/* (205) <= 0xd5 (213) */
	0x85,	/* (133) <= 0xd6 (214) */
	0xc3,	/* (195) <= 0xd7 (215) */
	0xaf,	/* (175) <= 0xd8 (216) */
	0xda,	/* (218) <= 0xd9 (217) */
	0xb8,	/* (184) <= 0xda (218) */
	0xdb,	/* (219) <= 0xdb (219) */
	0x86,	/* (134) <= 0xdc (220) */
	0xd9,	/* (217) <= 0xdd (221) */
	0xde,	/* (222) <= 0xde (222) */
	0xa7,	/* (167) <= 0xdf (223) */
	0x88,	/* (136) <= 0xe0 (224) */
	0x87,	/* (135) <= 0xe1 (225) */
	0x89,	/* (137) <= 0xe2 (226) */
	0x8b,	/* (139) <= 0xe3 (227) */
	0x8a,	/* (138) <= 0xe4 (228) */
	0x8c,	/* (140) <= 0xe5 (229) */
	0xbe,	/* (190) <= 0xe6 (230) */
	0x8d,	/* (141) <= 0xe7 (231) */
	0x8f,	/* (143) <= 0xe8 (232) */
	0x8e,	/* (142) <= 0xe9 (233) */
	0x90,	/* (144) <= 0xea (234) */
	0x91,	/* (145) <= 0xeb (235) */
	0x93,	/* (147) <= 0xec (236) */
	0x92,	/* (146) <= 0xed (237) */
	0x94,	/* (148) <= 0xee (238) */
	0x95,	/* (149) <= 0xef (239) */
	0xb6,	/* (182) <= 0xf0 (240) */
	0x96,	/* (150) <= 0xf1 (241) */
	0x98,	/* (152) <= 0xf2 (242) */
	0x97,	/* (151) <= 0xf3 (243) */
	0x99,	/* (153) <= 0xf4 (244) */
	0x9b,	/* (155) <= 0xf5 (245) */
	0x9a,	/* (154) <= 0xf6 (246) */
	0xd6,	/* (214) <= 0xf7 (247) */
	0xbf,	/* (191) <= 0xf8 (248) */
	0x9d,	/* (157) <= 0xf9 (249) */
	0x9c,	/* (156) <= 0xfa (250) */
	0x9e,	/* (158) <= 0xfb (251) */
	0x9f,	/* (159) <= 0xfc (252) */
	0xdf,	/* (223) <= 0xfd (253) */
	0xb9,	/* (185) <= 0xfe (254) */
	0xd8	/* (216) <= 0xff (255) */
};

int CharsetISO_8859_1ToMac(int c)
{
  if (c >= 0x80) return(CharsetISO_8859_1ToMacTable[c-0x80]);
  else return(c);
}

short CharsetMacToISO_8859_1Table[] = {
	0xc4,	/* (196) <= 0x80 (128) */
	0xc5,	/* (197) <= 0x81 (129) */
	0xc7,	/* (199) <= 0x82 (130) */
	0xc9,	/* (201) <= 0x83 (131) */
	0xd1,	/* (209) <= 0x84 (132) */
	0xd6,	/* (214) <= 0x85 (133) */
	0xdc,	/* (220) <= 0x86 (134) */
	0xe1,	/* (225) <= 0x87 (135) */
	0xe0,	/* (224) <= 0x88 (136) */
	0xe2,	/* (226) <= 0x89 (137) */
	0xe4,	/* (228) <= 0x8a (138) */
	0xe3,	/* (227) <= 0x8b (139) */
	0xe5,	/* (229) <= 0x8c (140) */
	0xe7,	/* (231) <= 0x8d (141) */
	0xe9,	/* (233) <= 0x8e (142) */
	0xe8,	/* (232) <= 0x8f (143) */
	0xea,	/* (234) <= 0x90 (144) */
	0xeb,	/* (235) <= 0x91 (145) */
	0xed,	/* (237) <= 0x92 (146) */
	0xec,	/* (236) <= 0x93 (147) */
	0xee,	/* (238) <= 0x94 (148) */
	0xef,	/* (239) <= 0x95 (149) */
	0xf1,	/* (241) <= 0x96 (150) */
	0xf3,	/* (243) <= 0x97 (151) */
	0xf2,	/* (242) <= 0x98 (152) */
	0xf4,	/* (244) <= 0x99 (153) */
	0xf6,	/* (246) <= 0x9a (154) */
	0xf5,	/* (245) <= 0x9b (155) */
	0xfa,	/* (250) <= 0x9c (156) */
	0xf9,	/* (249) <= 0x9d (157) */
	0xfb,	/* (251) <= 0x9e (158) */
	0xfc,	/* (252) <= 0x9f (159) */
	0xce,	/* (206) <= 0xa0 (160) */
	0xb0,	/* (176) <= 0xa1 (161) */
	0xa2,	/* (162) <= 0xa2 (162) */
	0xa3,	/* (163) <= 0xa3 (163) */
	0xa7,	/* (167) <= 0xa4 (164) */
	0xb7,	/* (183) <= 0xa5 (165) */
	0xb6,	/* (182) <= 0xa6 (166) */
	0xdf,	/* (223) <= 0xa7 (167) */
	0xae,	/* (174) <= 0xa8 (168) */
	0xa9,	/* (169) <= 0xa9 (169) */
	0xb2,	/* (221) <= 0xaa (170) */
	0xb4,	/* (180) <= 0xab (171) */
	0xa8,	/* (168) <= 0xac (172) */
	0xa4,	/* (254) <= 0xad (173) */
	0xc6,	/* (198) <= 0xae (174) */
	0xd8,	/* (216) <= 0xaf (175) */
	0xb3,	/* (179) <= 0xb0 (176) */
	0xb1,	/* (177) <= 0xb1 (177) */
	0xbc,	/* (188) <= 0xb2 (178) */
	0xbe,	/* (190) <= 0xb3 (179) */
	0xa5,	/* (165) <= 0xb4 (180) */
	0xb5,	/* (181) <= 0xb5 (181) */
	0xf0,	/* (240) <= 0xb6 (182) */
	0xcb,	/* (203) <= 0xb7 (183) */
	0xda,	/* (218) <= 0xb8 (184) */
	0xfe,	/* (217) <= 0xb9 (185) */
	0xcf,	/* (207) <= 0xba (186) */
	0xaa,	/* (170) <= 0xbb (187) */
	0xba,	/* (186) <= 0xbc (188) */
	0xd4,	/* (212) <= 0xbd (189) */
	0xe6,	/* (230) <= 0xbe (190) */
	0xf8,	/* (248) <= 0xbf (191) */
	0xbf,	/* (164) <= 0xc0 (192) */
	0xa1,	/* (161) <= 0xc1 (193) */
	0xac,	/* (172) <= 0xc2 (194) */
	0xd7,	/* (215) <= 0xc3 (195) */
	0xb9,	/* (185) <= 0xc4 (196) */
	0xb8,	/* (184) <= 0xc5 (197) */
	0xd0,	/* (208) <= 0xc6 (198) */
	0xab,	/* (171) <= 0xc7 (199) */
	0xbb,	/* (187) <= 0xc8 (200) */
	0xaf,	/* (175) <= 0xc9 (201) */
	0xa0,	/* (160) <= 0xca (202) */
	0xc0,	/* (192) <= 0xcb (203) */
	0xc3,	/* (195) <= 0xcc (204) */
	0xd5,	/* (213) <= 0xcd (205) */
	0xd2,	/* (210) <= 0xce (206) */
	0xd3,	/* (211) <= 0xcf (207) */
	0xad,	/* (173) <= 0xd0 (208) */
	0xa6,	/* (166) <= 0xd1 (209) */
	0xcc,	/* (204) <= 0xd2 (210) */
	0xcd,	/* (205) <= 0xd3 (211) */
	0xc8,	/* (200) <= 0xd4 (212) */
	0xc1,	/* (193) <= 0xd5 (213) */
	0xf7,	/* (247) <= 0xd6 (214) */
	0xbd,	/* (189) <= 0xd7 (215) */
	0xff,	/* (255) <= 0xd8 (216) */
	0xdd,	/* (178) <= 0xd9 (217) */
	0xd9,	/* (191) <= 0xda (218) */
	0xdb,	/* (219) <= 0xdb (219) */
	0xca,	/* (202) <= 0xdc (220) */
	0xc2,	/* (194) <= 0xdd (221) */
	0xde,	/* (222) <= 0xde (222) */
	0xfd,	/* (253) <= 0xdf (223) */
	0x80,	/* (128) <= 0xe0 (224) */
	0x81,	/* (129) <= 0xe1 (225) */
	0x82,	/* (130) <= 0xe2 (226) */
	0x83,	/* (131) <= 0xe3 (227) */
	0x84,	/* (132) <= 0xe4 (228) */
	0x85,	/* (133) <= 0xe5 (229) */
	0x86,	/* (134) <= 0xe6 (230) */
	0x87,	/* (135) <= 0xe7 (231) */
	0x88,	/* (136) <= 0xe8 (232) */
	0x89,	/* (137) <= 0xe9 (233) */
	0x8a,	/* (138) <= 0xea (234) */
	0x8b,	/* (139) <= 0xeb (235) */
	0x8c,	/* (140) <= 0xec (236) */
	0x8d,	/* (141) <= 0xed (237) */
	0x8e,	/* (142) <= 0xee (238) */
	0x8f,	/* (143) <= 0xef (239) */
	0x90,	/* (144) <= 0xf0 (240) */
	0x91,	/* (145) <= 0xf1 (241) */
	0x92,	/* (146) <= 0xf2 (242) */
	0x93,	/* (147) <= 0xf3 (243) */
	0x94,	/* (148) <= 0xf4 (244) */
	0x95,	/* (149) <= 0xf5 (245) */
	0x96,	/* (150) <= 0xf6 (246) */
	0x97,	/* (151) <= 0xf7 (247) */
	0x98,	/* (152) <= 0xf8 (248) */
	0x99,	/* (153) <= 0xf9 (249) */
	0x9a,	/* (154) <= 0xfa (250) */
	0x9b,	/* (155) <= 0xfb (251) */
	0x9c,	/* (156) <= 0xfc (252) */
	0x9d,	/* (157) <= 0xfd (253) */
	0x9e,	/* (158) <= 0xfe (254) */
	0x9f	/* (159) <= 0xff (255) */
};

int CharsetMacToISO_8859_1(int c)
{
  if (c >= 0x80) return(CharsetMacToISO_8859_1Table[c-0x80]);
  else return(c);
}

void CharsetCheck()
{
  int	i;
  for (i = 0x00; i <= 0xff; i++) {
    if (i != CharsetISO_8859_1ToMac(CharsetMacToISO_8859_1(i))) {
      fprintf(stderr, "MacToISO_8859_1 0x%x not unique\n", i);
    }
  }
  for (i = 0x00; i <= 0xff; i++) {
    if (i != CharsetMacToISO_8859_1(CharsetISO_8859_1ToMac(i))) {
      fprintf(stderr, "ISO_8859_1ToMac 0x%x not unique\n", i);
    }
  }
}

/* End of file. */
