/* ex: set ro ft=c: -*- buffer-read-only: t -*-
 *
 *    opnames.h
 *
 *    Copyright (C) 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007,
 *    2008 by Larry Wall and others
 *
 *    You may distribute under the terms of either the GNU General Public
 *    License or the Artistic License, as specified in the README file.
 *
 * !!!!!!!   DO NOT EDIT THIS FILE   !!!!!!!
 * This file is built by regen/opcode.pl from its data.
 * Any changes made here will be lost!
 */

typedef enum opcode {
	OP_NULL		 = 0,
	OP_STUB		 = 1,
	OP_SCALAR	 = 2,
	OP_PUSHMARK	 = 3,
	OP_WANTARRAY	 = 4,
	OP_CONST	 = 5,
	OP_GVSV		 = 6,
	OP_GV		 = 7,
	OP_GELEM	 = 8,
	OP_PADSV	 = 9,
	OP_PADAV	 = 10,
	OP_PADHV	 = 11,
	OP_PADANY	 = 12,
	OP_PUSHRE	 = 13,
	OP_RV2GV	 = 14,
	OP_RV2SV	 = 15,
	OP_AV2ARYLEN	 = 16,
	OP_RV2CV	 = 17,
	OP_ANONCODE	 = 18,
	OP_PROTOTYPE	 = 19,
	OP_REFGEN	 = 20,
	OP_SREFGEN	 = 21,
	OP_REF		 = 22,
	OP_BLESS	 = 23,
	OP_BACKTICK	 = 24,
	OP_GLOB		 = 25,
	OP_READLINE	 = 26,
	OP_RCATLINE	 = 27,
	OP_REGCMAYBE	 = 28,
	OP_REGCRESET	 = 29,
	OP_REGCOMP	 = 30,
	OP_MATCH	 = 31,
	OP_QR		 = 32,
	OP_SUBST	 = 33,
	OP_SUBSTCONT	 = 34,
	OP_TRANS	 = 35,
	OP_TRANSR	 = 36,
	OP_SASSIGN	 = 37,
	OP_AASSIGN	 = 38,
	OP_CHOP		 = 39,
	OP_SCHOP	 = 40,
	OP_CHOMP	 = 41,
	OP_SCHOMP	 = 42,
	OP_DEFINED	 = 43,
	OP_UNDEF	 = 44,
	OP_STUDY	 = 45,
	OP_POS		 = 46,
	OP_PREINC	 = 47,
	OP_I_PREINC	 = 48,
	OP_PREDEC	 = 49,
	OP_I_PREDEC	 = 50,
	OP_POSTINC	 = 51,
	OP_I_POSTINC	 = 52,
	OP_POSTDEC	 = 53,
	OP_I_POSTDEC	 = 54,
	OP_POW		 = 55,
	OP_MULTIPLY	 = 56,
	OP_I_MULTIPLY	 = 57,
	OP_DIVIDE	 = 58,
	OP_I_DIVIDE	 = 59,
	OP_MODULO	 = 60,
	OP_I_MODULO	 = 61,
	OP_REPEAT	 = 62,
	OP_ADD		 = 63,
	OP_I_ADD	 = 64,
	OP_SUBTRACT	 = 65,
	OP_I_SUBTRACT	 = 66,
	OP_CONCAT	 = 67,
	OP_STRINGIFY	 = 68,
	OP_LEFT_SHIFT	 = 69,
	OP_RIGHT_SHIFT	 = 70,
	OP_LT		 = 71,
	OP_I_LT		 = 72,
	OP_GT		 = 73,
	OP_I_GT		 = 74,
	OP_LE		 = 75,
	OP_I_LE		 = 76,
	OP_GE		 = 77,
	OP_I_GE		 = 78,
	OP_EQ		 = 79,
	OP_I_EQ		 = 80,
	OP_NE		 = 81,
	OP_I_NE		 = 82,
	OP_CMP		 = 83,
	OP_I_CMP	 = 84,
	OP_S_LT		 = 85,
	OP_S_GT		 = 86,
	OP_S_LE		 = 87,
	OP_S_GE		 = 88,
	OP_S_EQ		 = 89,
	OP_S_NE		 = 90,
	OP_S_CMP	 = 91,
	OP_BIT_AND	 = 92,
	OP_BIT_XOR	 = 93,
	OP_BIT_OR	 = 94,
	OP_I_BIT_AND	 = 95,
	OP_I_BIT_XOR	 = 96,
	OP_I_BIT_OR	 = 97,
	OP_S_BIT_AND	 = 98,
	OP_S_BIT_XOR	 = 99,
	OP_S_BIT_OR	 = 100,
	OP_NEGATE	 = 101,
	OP_I_NEGATE	 = 102,
	OP_NOT		 = 103,
	OP_COMPLEMENT	 = 104,
	OP_N_COMPLEMENT	 = 105,
	OP_S_COMPLEMENT	 = 106,
	OP_SMARTMATCH	 = 107,
	OP_ATAN2	 = 108,
	OP_SIN		 = 109,
	OP_COS		 = 110,
	OP_RAND		 = 111,
	OP_SRAND	 = 112,
	OP_EXP		 = 113,
	OP_LOG		 = 114,
	OP_SQRT		 = 115,
	OP_INT		 = 116,
	OP_HEX		 = 117,
	OP_OCT		 = 118,
	OP_ABS		 = 119,
	OP_BOX_INT	 = 120,
	OP_BOX_UINT	 = 121,
	OP_BOX_STR	 = 122,
	OP_BOX_NUM	 = 123,
	OP_UNBOX_INT	 = 124,
	OP_UNBOX_UINT	 = 125,
	OP_UNBOX_STR	 = 126,
	OP_UNBOX_NUM	 = 127,
	OP_UINT_LEFT_SHIFT = 128,
	OP_UINT_RIGHT_SHIFT = 129,
	OP_UINT_POW	 = 130,
	OP_UINT_COMPLEMENT = 131,
	OP_INT_PREINC	 = 132,
	OP_INT_PREDEC	 = 133,
	OP_INT_POSTINC	 = 134,
	OP_INT_POSTDEC	 = 135,
	OP_INT_ADD	 = 136,
	OP_INT_SUBTRACT	 = 137,
	OP_INT_MULTIPLY	 = 138,
	OP_INT_DIVIDE	 = 139,
	OP_INT_MODULO	 = 140,
	OP_INT_NEGATE	 = 141,
	OP_INT_NOT	 = 142,
	OP_INT_ABS	 = 143,
	OP_INT_LT	 = 144,
	OP_INT_GT	 = 145,
	OP_INT_LE	 = 146,
	OP_INT_GE	 = 147,
	OP_INT_EQ	 = 148,
	OP_INT_NE	 = 149,
	OP_NUM_ADD	 = 150,
	OP_NUM_SUBTRACT	 = 151,
	OP_NUM_MULTIPLY	 = 152,
	OP_NUM_DIVIDE	 = 153,
	OP_NUM_ATAN2	 = 154,
	OP_NUM_POW	 = 155,
	OP_NUM_SIN	 = 156,
	OP_NUM_COS	 = 157,
	OP_NUM_EXP	 = 158,
	OP_NUM_LOG	 = 159,
	OP_NUM_SQRT	 = 160,
	OP_LENGTH	 = 161,
	OP_SUBSTR	 = 162,
	OP_VEC		 = 163,
	OP_INDEX	 = 164,
	OP_RINDEX	 = 165,
	OP_SPRINTF	 = 166,
	OP_FORMLINE	 = 167,
	OP_ORD		 = 168,
	OP_CHR		 = 169,
	OP_CRYPT	 = 170,
	OP_UCFIRST	 = 171,
	OP_LCFIRST	 = 172,
	OP_UC		 = 173,
	OP_LC		 = 174,
	OP_QUOTEMETA	 = 175,
	OP_RV2AV	 = 176,
	OP_AELEMFAST	 = 177,
	OP_AELEMFAST_LEX = 178,
	OP_AELEM	 = 179,
	OP_I_AELEM	 = 180,
	OP_N_AELEM	 = 181,
	OP_S_AELEM	 = 182,
	OP_INT_AELEM	 = 183,
	OP_NUM_AELEM	 = 184,
	OP_STR_AELEM	 = 185,
	OP_ASLICE	 = 186,
	OP_KVASLICE	 = 187,
	OP_AEACH	 = 188,
	OP_AKEYS	 = 189,
	OP_AVALUES	 = 190,
	OP_EACH		 = 191,
	OP_VALUES	 = 192,
	OP_KEYS		 = 193,
	OP_DELETE	 = 194,
	OP_EXISTS	 = 195,
	OP_RV2HV	 = 196,
	OP_HELEM	 = 197,
	OP_HSLICE	 = 198,
	OP_KVHSLICE	 = 199,
	OP_MULTIDEREF	 = 200,
	OP_UNPACK	 = 201,
	OP_PACK		 = 202,
	OP_SPLIT	 = 203,
	OP_JOIN		 = 204,
	OP_LIST		 = 205,
	OP_LSLICE	 = 206,
	OP_ANONLIST	 = 207,
	OP_ANONHASH	 = 208,
	OP_SPLICE	 = 209,
	OP_PUSH		 = 210,
	OP_POP		 = 211,
	OP_SHIFT	 = 212,
	OP_UNSHIFT	 = 213,
	OP_SORT		 = 214,
	OP_REVERSE	 = 215,
	OP_GREPSTART	 = 216,
	OP_GREPWHILE	 = 217,
	OP_MAPSTART	 = 218,
	OP_MAPWHILE	 = 219,
	OP_RANGE	 = 220,
	OP_FLIP		 = 221,
	OP_FLOP		 = 222,
	OP_AND		 = 223,
	OP_OR		 = 224,
	OP_XOR		 = 225,
	OP_DOR		 = 226,
	OP_COND_EXPR	 = 227,
	OP_ANDASSIGN	 = 228,
	OP_ORASSIGN	 = 229,
	OP_DORASSIGN	 = 230,
	OP_METHOD	 = 231,
	OP_ENTERSUB	 = 232,
	OP_ENTERXSSUB	 = 233,
	OP_LEAVESUB	 = 234,
	OP_LEAVESUBLV	 = 235,
	OP_CALLER	 = 236,
	OP_WARN		 = 237,
	OP_DIE		 = 238,
	OP_RESET	 = 239,
	OP_LINESEQ	 = 240,
	OP_NEXTSTATE	 = 241,
	OP_DBSTATE	 = 242,
	OP_UNSTACK	 = 243,
	OP_ENTER	 = 244,
	OP_LEAVE	 = 245,
	OP_SCOPE	 = 246,
	OP_ENTERITER	 = 247,
	OP_ITER		 = 248,
	OP_ENTERLOOP	 = 249,
	OP_LEAVELOOP	 = 250,
	OP_RETURN	 = 251,
	OP_LAST		 = 252,
	OP_NEXT		 = 253,
	OP_REDO		 = 254,
	OP_DUMP		 = 255,
	OP_GOTO		 = 256,
	OP_EXIT		 = 257,
	OP_METHOD_NAMED	 = 258,
	OP_METHOD_SUPER	 = 259,
	OP_METHOD_REDIR	 = 260,
	OP_METHOD_REDIR_SUPER = 261,
	OP_ENTERGIVEN	 = 262,
	OP_LEAVEGIVEN	 = 263,
	OP_ENTERWHEN	 = 264,
	OP_LEAVEWHEN	 = 265,
	OP_BREAK	 = 266,
	OP_CONTINUE	 = 267,
	OP_OPEN		 = 268,
	OP_CLOSE	 = 269,
	OP_PIPE_OP	 = 270,
	OP_FILENO	 = 271,
	OP_UMASK	 = 272,
	OP_BINMODE	 = 273,
	OP_TIE		 = 274,
	OP_UNTIE	 = 275,
	OP_TIED		 = 276,
	OP_DBMOPEN	 = 277,
	OP_DBMCLOSE	 = 278,
	OP_SSELECT	 = 279,
	OP_SELECT	 = 280,
	OP_GETC		 = 281,
	OP_READ		 = 282,
	OP_ENTERWRITE	 = 283,
	OP_LEAVEWRITE	 = 284,
	OP_PRTF		 = 285,
	OP_PRINT	 = 286,
	OP_SAY		 = 287,
	OP_SYSOPEN	 = 288,
	OP_SYSSEEK	 = 289,
	OP_SYSREAD	 = 290,
	OP_SYSWRITE	 = 291,
	OP_EOF		 = 292,
	OP_TELL		 = 293,
	OP_SEEK		 = 294,
	OP_TRUNCATE	 = 295,
	OP_FCNTL	 = 296,
	OP_IOCTL	 = 297,
	OP_FLOCK	 = 298,
	OP_SEND		 = 299,
	OP_RECV		 = 300,
	OP_SOCKET	 = 301,
	OP_SOCKPAIR	 = 302,
	OP_BIND		 = 303,
	OP_CONNECT	 = 304,
	OP_LISTEN	 = 305,
	OP_ACCEPT	 = 306,
	OP_SHUTDOWN	 = 307,
	OP_GSOCKOPT	 = 308,
	OP_SSOCKOPT	 = 309,
	OP_GETSOCKNAME	 = 310,
	OP_GETPEERNAME	 = 311,
	OP_LSTAT	 = 312,
	OP_STAT		 = 313,
	OP_FTRREAD	 = 314,
	OP_FTRWRITE	 = 315,
	OP_FTREXEC	 = 316,
	OP_FTEREAD	 = 317,
	OP_FTEWRITE	 = 318,
	OP_FTEEXEC	 = 319,
	OP_FTIS		 = 320,
	OP_FTSIZE	 = 321,
	OP_FTMTIME	 = 322,
	OP_FTATIME	 = 323,
	OP_FTCTIME	 = 324,
	OP_FTROWNED	 = 325,
	OP_FTEOWNED	 = 326,
	OP_FTZERO	 = 327,
	OP_FTSOCK	 = 328,
	OP_FTCHR	 = 329,
	OP_FTBLK	 = 330,
	OP_FTFILE	 = 331,
	OP_FTDIR	 = 332,
	OP_FTPIPE	 = 333,
	OP_FTSUID	 = 334,
	OP_FTSGID	 = 335,
	OP_FTSVTX	 = 336,
	OP_FTLINK	 = 337,
	OP_FTTTY	 = 338,
	OP_FTTEXT	 = 339,
	OP_FTBINARY	 = 340,
	OP_CHDIR	 = 341,
	OP_CHOWN	 = 342,
	OP_CHROOT	 = 343,
	OP_UNLINK	 = 344,
	OP_CHMOD	 = 345,
	OP_UTIME	 = 346,
	OP_RENAME	 = 347,
	OP_LINK		 = 348,
	OP_SYMLINK	 = 349,
	OP_READLINK	 = 350,
	OP_MKDIR	 = 351,
	OP_RMDIR	 = 352,
	OP_OPEN_DIR	 = 353,
	OP_READDIR	 = 354,
	OP_TELLDIR	 = 355,
	OP_SEEKDIR	 = 356,
	OP_REWINDDIR	 = 357,
	OP_CLOSEDIR	 = 358,
	OP_FORK		 = 359,
	OP_WAIT		 = 360,
	OP_WAITPID	 = 361,
	OP_SYSTEM	 = 362,
	OP_EXEC		 = 363,
	OP_KILL		 = 364,
	OP_GETPPID	 = 365,
	OP_GETPGRP	 = 366,
	OP_SETPGRP	 = 367,
	OP_GETPRIORITY	 = 368,
	OP_SETPRIORITY	 = 369,
	OP_TIME		 = 370,
	OP_TMS		 = 371,
	OP_LOCALTIME	 = 372,
	OP_GMTIME	 = 373,
	OP_ALARM	 = 374,
	OP_SLEEP	 = 375,
	OP_SHMGET	 = 376,
	OP_SHMCTL	 = 377,
	OP_SHMREAD	 = 378,
	OP_SHMWRITE	 = 379,
	OP_MSGGET	 = 380,
	OP_MSGCTL	 = 381,
	OP_MSGSND	 = 382,
	OP_MSGRCV	 = 383,
	OP_SEMOP	 = 384,
	OP_SEMGET	 = 385,
	OP_SEMCTL	 = 386,
	OP_REQUIRE	 = 387,
	OP_DOFILE	 = 388,
	OP_HINTSEVAL	 = 389,
	OP_ENTEREVAL	 = 390,
	OP_LEAVEEVAL	 = 391,
	OP_ENTERTRY	 = 392,
	OP_LEAVETRY	 = 393,
	OP_GHBYNAME	 = 394,
	OP_GHBYADDR	 = 395,
	OP_GHOSTENT	 = 396,
	OP_GNBYNAME	 = 397,
	OP_GNBYADDR	 = 398,
	OP_GNETENT	 = 399,
	OP_GPBYNAME	 = 400,
	OP_GPBYNUMBER	 = 401,
	OP_GPROTOENT	 = 402,
	OP_GSBYNAME	 = 403,
	OP_GSBYPORT	 = 404,
	OP_GSERVENT	 = 405,
	OP_SHOSTENT	 = 406,
	OP_SNETENT	 = 407,
	OP_SPROTOENT	 = 408,
	OP_SSERVENT	 = 409,
	OP_EHOSTENT	 = 410,
	OP_ENETENT	 = 411,
	OP_EPROTOENT	 = 412,
	OP_ESERVENT	 = 413,
	OP_GPWNAM	 = 414,
	OP_GPWUID	 = 415,
	OP_GPWENT	 = 416,
	OP_SPWENT	 = 417,
	OP_EPWENT	 = 418,
	OP_GGRNAM	 = 419,
	OP_GGRGID	 = 420,
	OP_GGRENT	 = 421,
	OP_SGRENT	 = 422,
	OP_EGRENT	 = 423,
	OP_GETLOGIN	 = 424,
	OP_SYSCALL	 = 425,
	OP_LOCK		 = 426,
	OP_ONCE		 = 427,
	OP_CUSTOM	 = 428,
	OP_REACH	 = 429,
	OP_RKEYS	 = 430,
	OP_RVALUES	 = 431,
	OP_COREARGS	 = 432,
	OP_RUNCV	 = 433,
	OP_FC		 = 434,
	OP_PADCV	 = 435,
	OP_INTROCV	 = 436,
	OP_CLONECV	 = 437,
	OP_PADRANGE	 = 438,
	OP_REFASSIGN	 = 439,
	OP_LVREF	 = 440,
	OP_LVREFSLICE	 = 441,
	OP_LVAVREF	 = 442,
	OP_ANONCONST	 = 443,
	OP_max		
} opcode;

#define MAXO 444
#define OP_FREED MAXO


/* This encodes the offsets as signed char of the typed variants for each op.
   The first byte is the number of following bytes, max 8.
   variants: i_ n_ s_ int_ uint_ num_ str_ */
#ifndef DOINIT
EXTCONST const char PL_op_type_variants[][8];
#else
EXTCONST const char PL_op_type_variants[][8] = {
	/*   0 null             */ {0},	/*  */
	/*   1 stub             */ {0},	/*  */
	/*   2 scalar           */ {0},	/*  */
	/*   3 pushmark         */ {0},	/*  */
	/*   4 wantarray        */ {0},	/*  */
	/*   5 const            */ {0},	/*  */
	/*   6 gvsv             */ {0},	/*  */
	/*   7 gv               */ {0},	/*  */
	/*   8 gelem            */ {0},	/*  */
	/*   9 padsv            */ {0},	/*  */
	/*  10 padav            */ {0},	/*  */
	/*  11 padhv            */ {0},	/*  */
	/*  12 padany           */ {0},	/*  */
	/*  13 pushre           */ {0},	/*  */
	/*  14 rv2gv            */ {0},	/*  */
	/*  15 rv2sv            */ {0},	/*  */
	/*  16 av2arylen        */ {0},	/*  */
	/*  17 rv2cv            */ {0},	/*  */
	/*  18 anoncode         */ {0},	/*  */
	/*  19 prototype        */ {0},	/*  */
	/*  20 refgen           */ {0},	/*  */
	/*  21 srefgen          */ {0},	/*  */
	/*  22 ref              */ {0},	/*  */
	/*  23 bless            */ {0},	/*  */
	/*  24 backtick         */ {0},	/*  */
	/*  25 glob             */ {0},	/*  */
	/*  26 readline         */ {0},	/*  */
	/*  27 rcatline         */ {0},	/*  */
	/*  28 regcmaybe        */ {0},	/*  */
	/*  29 regcreset        */ {0},	/*  */
	/*  30 regcomp          */ {0},	/*  */
	/*  31 match            */ {0},	/*  */
	/*  32 qr               */ {0},	/*  */
	/*  33 subst            */ {0},	/*  */
	/*  34 substcont        */ {0},	/*  */
	/*  35 trans            */ {0},	/*  */
	/*  36 transr           */ {0},	/*  */
	/*  37 sassign          */ {0},	/*  */
	/*  38 aassign          */ {0},	/*  */
	/*  39 chop             */ {0},	/*  */
	/*  40 schop            */ {0},	/*  */
	/*  41 chomp            */ {0},	/*  */
	/*  42 schomp           */ {0},	/*  */
	/*  43 defined          */ {0},	/*  */
	/*  44 undef            */ {0},	/*  */
	/*  45 study            */ {0},	/*  */
	/*  46 pos              */ {0},	/*  */
	/*  47 preinc           */ {2,1,85},	/* i_preinc:48 int_preinc:132 */
	/*  48 i_preinc         */ {1,84},	/* int_preinc:132 */
	/*  49 predec           */ {2,1,84},	/* i_predec:50 int_predec:133 */
	/*  50 i_predec         */ {1,83},	/* int_predec:133 */
	/*  51 postinc          */ {2,1,83},	/* i_postinc:52 int_postinc:134 */
	/*  52 i_postinc        */ {1,82},	/* int_postinc:134 */
	/*  53 postdec          */ {2,1,82},	/* i_postdec:54 int_postdec:135 */
	/*  54 i_postdec        */ {1,81},	/* int_postdec:135 */
	/*  55 pow              */ {2,75,100},	/* uint_pow:130 num_pow:155 */
	/*  56 multiply         */ {3,1,82,96},	/* i_multiply:57 int_multiply:138 num_multiply:152 */
	/*  57 i_multiply       */ {1,81},	/* int_multiply:138 */
	/*  58 divide           */ {3,1,81,95},	/* i_divide:59 int_divide:139 num_divide:153 */
	/*  59 i_divide         */ {1,80},	/* int_divide:139 */
	/*  60 modulo           */ {2,1,80},	/* i_modulo:61 int_modulo:140 */
	/*  61 i_modulo         */ {1,79},	/* int_modulo:140 */
	/*  62 repeat           */ {0},	/*  */
	/*  63 add              */ {3,1,73,87},	/* i_add:64 int_add:136 num_add:150 */
	/*  64 i_add            */ {1,72},	/* int_add:136 */
	/*  65 subtract         */ {3,1,72,86},	/* i_subtract:66 int_subtract:137 num_subtract:151 */
	/*  66 i_subtract       */ {1,71},	/* int_subtract:137 */
	/*  67 concat           */ {0},	/*  */
	/*  68 stringify        */ {0},	/*  */
	/*  69 left_shift       */ {1,59},	/* uint_left_shift:128 */
	/*  70 right_shift      */ {1,59},	/* uint_right_shift:129 */
	/*  71 lt               */ {3,1,14,73},	/* i_lt:72 s_lt:85 int_lt:144 */
	/*  72 i_lt             */ {1,72},	/* int_lt:144 */
	/*  73 gt               */ {3,1,13,72},	/* i_gt:74 s_gt:86 int_gt:145 */
	/*  74 i_gt             */ {1,71},	/* int_gt:145 */
	/*  75 le               */ {3,1,12,71},	/* i_le:76 s_le:87 int_le:146 */
	/*  76 i_le             */ {1,70},	/* int_le:146 */
	/*  77 ge               */ {3,1,11,70},	/* i_ge:78 s_ge:88 int_ge:147 */
	/*  78 i_ge             */ {1,69},	/* int_ge:147 */
	/*  79 eq               */ {3,1,10,69},	/* i_eq:80 s_eq:89 int_eq:148 */
	/*  80 i_eq             */ {1,68},	/* int_eq:148 */
	/*  81 ne               */ {3,1,9,68},	/* i_ne:82 s_ne:90 int_ne:149 */
	/*  82 i_ne             */ {1,67},	/* int_ne:149 */
	/*  83 cmp              */ {2,1,8},	/* i_cmp:84 s_cmp:91 */
	/*  84 i_cmp            */ {0},	/*  */
	/*  85 s_lt             */ {0},	/*  */
	/*  86 s_gt             */ {0},	/*  */
	/*  87 s_le             */ {0},	/*  */
	/*  88 s_ge             */ {0},	/*  */
	/*  89 s_eq             */ {0},	/*  */
	/*  90 s_ne             */ {0},	/*  */
	/*  91 s_cmp            */ {0},	/*  */
	/*  92 bit_and          */ {2,3,6},	/* i_bit_and:95 s_bit_and:98 */
	/*  93 bit_xor          */ {2,3,6},	/* i_bit_xor:96 s_bit_xor:99 */
	/*  94 bit_or           */ {2,3,6},	/* i_bit_or:97 s_bit_or:100 */
	/*  95 i_bit_and        */ {0},	/*  */
	/*  96 i_bit_xor        */ {0},	/*  */
	/*  97 i_bit_or         */ {0},	/*  */
	/*  98 s_bit_and        */ {0},	/*  */
	/*  99 s_bit_xor        */ {0},	/*  */
	/* 100 s_bit_or         */ {0},	/*  */
	/* 101 negate           */ {2,1,40},	/* i_negate:102 int_negate:141 */
	/* 102 i_negate         */ {1,39},	/* int_negate:141 */
	/* 103 not              */ {1,39},	/* int_not:142 */
	/* 104 complement       */ {3,1,2,27},	/* n_complement:105 s_complement:106 uint_complement:131 */
	/* 105 n_complement     */ {0},	/*  */
	/* 106 s_complement     */ {0},	/*  */
	/* 107 smartmatch       */ {0},	/*  */
	/* 108 atan2            */ {1,46},	/* num_atan2:154 */
	/* 109 sin              */ {1,47},	/* num_sin:156 */
	/* 110 cos              */ {1,47},	/* num_cos:157 */
	/* 111 rand             */ {0},	/*  */
	/* 112 srand            */ {0},	/*  */
	/* 113 exp              */ {1,45},	/* num_exp:158 */
	/* 114 log              */ {1,45},	/* num_log:159 */
	/* 115 sqrt             */ {1,45},	/* num_sqrt:160 */
	/* 116 int              */ {0},	/*  */
	/* 117 hex              */ {0},	/*  */
	/* 118 oct              */ {0},	/*  */
	/* 119 abs              */ {1,24},	/* int_abs:143 */
	/* 120 box_int          */ {0},	/*  */
	/* 121 box_uint         */ {0},	/*  */
	/* 122 box_str          */ {0},	/*  */
	/* 123 box_num          */ {0},	/*  */
	/* 124 unbox_int        */ {0},	/*  */
	/* 125 unbox_uint       */ {0},	/*  */
	/* 126 unbox_str        */ {0},	/*  */
	/* 127 unbox_num        */ {0},	/*  */
	/* 128 uint_left_shift  */ {0},	/*  */
	/* 129 uint_right_shift */ {0},	/*  */
	/* 130 uint_pow         */ {0},	/*  */
	/* 131 uint_complement  */ {0},	/*  */
	/* 132 int_preinc       */ {0},	/*  */
	/* 133 int_predec       */ {0},	/*  */
	/* 134 int_postinc      */ {0},	/*  */
	/* 135 int_postdec      */ {0},	/*  */
	/* 136 int_add          */ {0},	/*  */
	/* 137 int_subtract     */ {0},	/*  */
	/* 138 int_multiply     */ {0},	/*  */
	/* 139 int_divide       */ {0},	/*  */
	/* 140 int_modulo       */ {0},	/*  */
	/* 141 int_negate       */ {0},	/*  */
	/* 142 int_not          */ {0},	/*  */
	/* 143 int_abs          */ {0},	/*  */
	/* 144 int_lt           */ {0},	/*  */
	/* 145 int_gt           */ {0},	/*  */
	/* 146 int_le           */ {0},	/*  */
	/* 147 int_ge           */ {0},	/*  */
	/* 148 int_eq           */ {0},	/*  */
	/* 149 int_ne           */ {0},	/*  */
	/* 150 num_add          */ {0},	/*  */
	/* 151 num_subtract     */ {0},	/*  */
	/* 152 num_multiply     */ {0},	/*  */
	/* 153 num_divide       */ {0},	/*  */
	/* 154 num_atan2        */ {0},	/*  */
	/* 155 num_pow          */ {0},	/*  */
	/* 156 num_sin          */ {0},	/*  */
	/* 157 num_cos          */ {0},	/*  */
	/* 158 num_exp          */ {0},	/*  */
	/* 159 num_log          */ {0},	/*  */
	/* 160 num_sqrt         */ {0},	/*  */
	/* 161 length           */ {0},	/*  */
	/* 162 substr           */ {0},	/*  */
	/* 163 vec              */ {0},	/*  */
	/* 164 index            */ {0},	/*  */
	/* 165 rindex           */ {0},	/*  */
	/* 166 sprintf          */ {0},	/*  */
	/* 167 formline         */ {0},	/*  */
	/* 168 ord              */ {0},	/*  */
	/* 169 chr              */ {0},	/*  */
	/* 170 crypt            */ {0},	/*  */
	/* 171 ucfirst          */ {0},	/*  */
	/* 172 lcfirst          */ {0},	/*  */
	/* 173 uc               */ {0},	/*  */
	/* 174 lc               */ {0},	/*  */
	/* 175 quotemeta        */ {0},	/*  */
	/* 176 rv2av            */ {0},	/*  */
	/* 177 aelemfast        */ {0},	/*  */
	/* 178 aelemfast_lex    */ {0},	/*  */
	/* 179 aelem            */ {6,1,2,3,4,5,6},	/* i_aelem:180 n_aelem:181 s_aelem:182 int_aelem:183 num_aelem:184 str_aelem:185 */
	/* 180 i_aelem          */ {1,3},	/* int_aelem:183 */
	/* 181 n_aelem          */ {1,3},	/* num_aelem:184 */
	/* 182 s_aelem          */ {1,3},	/* str_aelem:185 */
	/* 183 int_aelem        */ {0},	/*  */
	/* 184 num_aelem        */ {0},	/*  */
	/* 185 str_aelem        */ {0},	/*  */
	/* 186 aslice           */ {0},	/*  */
	/* 187 kvaslice         */ {0},	/*  */
	/* 188 aeach            */ {0},	/*  */
	/* 189 akeys            */ {0},	/*  */
	/* 190 avalues          */ {0},	/*  */
	/* 191 each             */ {0},	/*  */
	/* 192 values           */ {0},	/*  */
	/* 193 keys             */ {0},	/*  */
	/* 194 delete           */ {0},	/*  */
	/* 195 exists           */ {0},	/*  */
	/* 196 rv2hv            */ {0},	/*  */
	/* 197 helem            */ {0},	/*  */
	/* 198 hslice           */ {0},	/*  */
	/* 199 kvhslice         */ {0},	/*  */
	/* 200 multideref       */ {0},	/*  */
	/* 201 unpack           */ {0},	/*  */
	/* 202 pack             */ {0},	/*  */
	/* 203 split            */ {0},	/*  */
	/* 204 join             */ {0},	/*  */
	/* 205 list             */ {0},	/*  */
	/* 206 lslice           */ {0},	/*  */
	/* 207 anonlist         */ {0},	/*  */
	/* 208 anonhash         */ {0},	/*  */
	/* 209 splice           */ {0},	/*  */
	/* 210 push             */ {0},	/*  */
	/* 211 pop              */ {0},	/*  */
	/* 212 shift            */ {0},	/*  */
	/* 213 unshift          */ {0},	/*  */
	/* 214 sort             */ {0},	/*  */
	/* 215 reverse          */ {0},	/*  */
	/* 216 grepstart        */ {0},	/*  */
	/* 217 grepwhile        */ {0},	/*  */
	/* 218 mapstart         */ {0},	/*  */
	/* 219 mapwhile         */ {0},	/*  */
	/* 220 range            */ {0},	/*  */
	/* 221 flip             */ {0},	/*  */
	/* 222 flop             */ {0},	/*  */
	/* 223 and              */ {0},	/*  */
	/* 224 or               */ {0},	/*  */
	/* 225 xor              */ {0},	/*  */
	/* 226 dor              */ {0},	/*  */
	/* 227 cond_expr        */ {0},	/*  */
	/* 228 andassign        */ {0},	/*  */
	/* 229 orassign         */ {0},	/*  */
	/* 230 dorassign        */ {0},	/*  */
	/* 231 method           */ {0},	/*  */
	/* 232 entersub         */ {0},	/*  */
	/* 233 enterxssub       */ {0},	/*  */
	/* 234 leavesub         */ {0},	/*  */
	/* 235 leavesublv       */ {0},	/*  */
	/* 236 caller           */ {0},	/*  */
	/* 237 warn             */ {0},	/*  */
	/* 238 die              */ {0},	/*  */
	/* 239 reset            */ {0},	/*  */
	/* 240 lineseq          */ {0},	/*  */
	/* 241 nextstate        */ {0},	/*  */
	/* 242 dbstate          */ {0},	/*  */
	/* 243 unstack          */ {0},	/*  */
	/* 244 enter            */ {0},	/*  */
	/* 245 leave            */ {0},	/*  */
	/* 246 scope            */ {0},	/*  */
	/* 247 enteriter        */ {0},	/*  */
	/* 248 iter             */ {0},	/*  */
	/* 249 enterloop        */ {0},	/*  */
	/* 250 leaveloop        */ {0},	/*  */
	/* 251 return           */ {0},	/*  */
	/* 252 last             */ {0},	/*  */
	/* 253 next             */ {0},	/*  */
	/* 254 redo             */ {0},	/*  */
	/* 255 dump             */ {0},	/*  */
	/* 256 goto             */ {0},	/*  */
	/* 257 exit             */ {0},	/*  */
	/* 258 method_named     */ {0},	/*  */
	/* 259 method_super     */ {0},	/*  */
	/* 260 method_redir     */ {0},	/*  */
	/* 261 method_redir_super */ {0},	/*  */
	/* 262 entergiven       */ {0},	/*  */
	/* 263 leavegiven       */ {0},	/*  */
	/* 264 enterwhen        */ {0},	/*  */
	/* 265 leavewhen        */ {0},	/*  */
	/* 266 break            */ {0},	/*  */
	/* 267 continue         */ {0},	/*  */
	/* 268 open             */ {0},	/*  */
	/* 269 close            */ {0},	/*  */
	/* 270 pipe_op          */ {0},	/*  */
	/* 271 fileno           */ {0},	/*  */
	/* 272 umask            */ {0},	/*  */
	/* 273 binmode          */ {0},	/*  */
	/* 274 tie              */ {0},	/*  */
	/* 275 untie            */ {0},	/*  */
	/* 276 tied             */ {0},	/*  */
	/* 277 dbmopen          */ {0},	/*  */
	/* 278 dbmclose         */ {0},	/*  */
	/* 279 sselect          */ {0},	/*  */
	/* 280 select           */ {0},	/*  */
	/* 281 getc             */ {0},	/*  */
	/* 282 read             */ {0},	/*  */
	/* 283 enterwrite       */ {0},	/*  */
	/* 284 leavewrite       */ {0},	/*  */
	/* 285 prtf             */ {0},	/*  */
	/* 286 print            */ {0},	/*  */
	/* 287 say              */ {0},	/*  */
	/* 288 sysopen          */ {0},	/*  */
	/* 289 sysseek          */ {0},	/*  */
	/* 290 sysread          */ {0},	/*  */
	/* 291 syswrite         */ {0},	/*  */
	/* 292 eof              */ {0},	/*  */
	/* 293 tell             */ {0},	/*  */
	/* 294 seek             */ {0},	/*  */
	/* 295 truncate         */ {0},	/*  */
	/* 296 fcntl            */ {0},	/*  */
	/* 297 ioctl            */ {0},	/*  */
	/* 298 flock            */ {0},	/*  */
	/* 299 send             */ {0},	/*  */
	/* 300 recv             */ {0},	/*  */
	/* 301 socket           */ {0},	/*  */
	/* 302 sockpair         */ {0},	/*  */
	/* 303 bind             */ {0},	/*  */
	/* 304 connect          */ {0},	/*  */
	/* 305 listen           */ {0},	/*  */
	/* 306 accept           */ {0},	/*  */
	/* 307 shutdown         */ {0},	/*  */
	/* 308 gsockopt         */ {0},	/*  */
	/* 309 ssockopt         */ {0},	/*  */
	/* 310 getsockname      */ {0},	/*  */
	/* 311 getpeername      */ {0},	/*  */
	/* 312 lstat            */ {0},	/*  */
	/* 313 stat             */ {0},	/*  */
	/* 314 ftrread          */ {0},	/*  */
	/* 315 ftrwrite         */ {0},	/*  */
	/* 316 ftrexec          */ {0},	/*  */
	/* 317 fteread          */ {0},	/*  */
	/* 318 ftewrite         */ {0},	/*  */
	/* 319 fteexec          */ {0},	/*  */
	/* 320 ftis             */ {0},	/*  */
	/* 321 ftsize           */ {0},	/*  */
	/* 322 ftmtime          */ {0},	/*  */
	/* 323 ftatime          */ {0},	/*  */
	/* 324 ftctime          */ {0},	/*  */
	/* 325 ftrowned         */ {0},	/*  */
	/* 326 fteowned         */ {0},	/*  */
	/* 327 ftzero           */ {0},	/*  */
	/* 328 ftsock           */ {0},	/*  */
	/* 329 ftchr            */ {0},	/*  */
	/* 330 ftblk            */ {0},	/*  */
	/* 331 ftfile           */ {0},	/*  */
	/* 332 ftdir            */ {0},	/*  */
	/* 333 ftpipe           */ {0},	/*  */
	/* 334 ftsuid           */ {0},	/*  */
	/* 335 ftsgid           */ {0},	/*  */
	/* 336 ftsvtx           */ {0},	/*  */
	/* 337 ftlink           */ {0},	/*  */
	/* 338 fttty            */ {0},	/*  */
	/* 339 fttext           */ {0},	/*  */
	/* 340 ftbinary         */ {0},	/*  */
	/* 341 chdir            */ {0},	/*  */
	/* 342 chown            */ {0},	/*  */
	/* 343 chroot           */ {0},	/*  */
	/* 344 unlink           */ {0},	/*  */
	/* 345 chmod            */ {0},	/*  */
	/* 346 utime            */ {0},	/*  */
	/* 347 rename           */ {0},	/*  */
	/* 348 link             */ {0},	/*  */
	/* 349 symlink          */ {0},	/*  */
	/* 350 readlink         */ {0},	/*  */
	/* 351 mkdir            */ {0},	/*  */
	/* 352 rmdir            */ {0},	/*  */
	/* 353 open_dir         */ {0},	/*  */
	/* 354 readdir          */ {0},	/*  */
	/* 355 telldir          */ {0},	/*  */
	/* 356 seekdir          */ {0},	/*  */
	/* 357 rewinddir        */ {0},	/*  */
	/* 358 closedir         */ {0},	/*  */
	/* 359 fork             */ {0},	/*  */
	/* 360 wait             */ {0},	/*  */
	/* 361 waitpid          */ {0},	/*  */
	/* 362 system           */ {0},	/*  */
	/* 363 exec             */ {0},	/*  */
	/* 364 kill             */ {0},	/*  */
	/* 365 getppid          */ {0},	/*  */
	/* 366 getpgrp          */ {0},	/*  */
	/* 367 setpgrp          */ {0},	/*  */
	/* 368 getpriority      */ {0},	/*  */
	/* 369 setpriority      */ {0},	/*  */
	/* 370 time             */ {0},	/*  */
	/* 371 tms              */ {0},	/*  */
	/* 372 localtime        */ {0},	/*  */
	/* 373 gmtime           */ {0},	/*  */
	/* 374 alarm            */ {0},	/*  */
	/* 375 sleep            */ {0},	/*  */
	/* 376 shmget           */ {0},	/*  */
	/* 377 shmctl           */ {0},	/*  */
	/* 378 shmread          */ {0},	/*  */
	/* 379 shmwrite         */ {0},	/*  */
	/* 380 msgget           */ {0},	/*  */
	/* 381 msgctl           */ {0},	/*  */
	/* 382 msgsnd           */ {0},	/*  */
	/* 383 msgrcv           */ {0},	/*  */
	/* 384 semop            */ {0},	/*  */
	/* 385 semget           */ {0},	/*  */
	/* 386 semctl           */ {0},	/*  */
	/* 387 require          */ {0},	/*  */
	/* 388 dofile           */ {0},	/*  */
	/* 389 hintseval        */ {0},	/*  */
	/* 390 entereval        */ {0},	/*  */
	/* 391 leaveeval        */ {0},	/*  */
	/* 392 entertry         */ {0},	/*  */
	/* 393 leavetry         */ {0},	/*  */
	/* 394 ghbyname         */ {0},	/*  */
	/* 395 ghbyaddr         */ {0},	/*  */
	/* 396 ghostent         */ {0},	/*  */
	/* 397 gnbyname         */ {0},	/*  */
	/* 398 gnbyaddr         */ {0},	/*  */
	/* 399 gnetent          */ {0},	/*  */
	/* 400 gpbyname         */ {0},	/*  */
	/* 401 gpbynumber       */ {0},	/*  */
	/* 402 gprotoent        */ {0},	/*  */
	/* 403 gsbyname         */ {0},	/*  */
	/* 404 gsbyport         */ {0},	/*  */
	/* 405 gservent         */ {0},	/*  */
	/* 406 shostent         */ {0},	/*  */
	/* 407 snetent          */ {0},	/*  */
	/* 408 sprotoent        */ {0},	/*  */
	/* 409 sservent         */ {0},	/*  */
	/* 410 ehostent         */ {0},	/*  */
	/* 411 enetent          */ {0},	/*  */
	/* 412 eprotoent        */ {0},	/*  */
	/* 413 eservent         */ {0},	/*  */
	/* 414 gpwnam           */ {0},	/*  */
	/* 415 gpwuid           */ {0},	/*  */
	/* 416 gpwent           */ {0},	/*  */
	/* 417 spwent           */ {0},	/*  */
	/* 418 epwent           */ {0},	/*  */
	/* 419 ggrnam           */ {0},	/*  */
	/* 420 ggrgid           */ {0},	/*  */
	/* 421 ggrent           */ {0},	/*  */
	/* 422 sgrent           */ {0},	/*  */
	/* 423 egrent           */ {0},	/*  */
	/* 424 getlogin         */ {0},	/*  */
	/* 425 syscall          */ {0},	/*  */
	/* 426 lock             */ {0},	/*  */
	/* 427 once             */ {0},	/*  */
	/* 428 custom           */ {0},	/*  */
	/* 429 reach            */ {0},	/*  */
	/* 430 rkeys            */ {0},	/*  */
	/* 431 rvalues          */ {0},	/*  */
	/* 432 coreargs         */ {0},	/*  */
	/* 433 runcv            */ {0},	/*  */
	/* 434 fc               */ {0},	/*  */
	/* 435 padcv            */ {0},	/*  */
	/* 436 introcv          */ {0},	/*  */
	/* 437 clonecv          */ {0},	/*  */
	/* 438 padrange         */ {0},	/*  */
	/* 439 refassign        */ {0},	/*  */
	/* 440 lvref            */ {0},	/*  */
	/* 441 lvrefslice       */ {0},	/*  */
	/* 442 lvavref          */ {0},	/*  */
	/* 443 anonconst        */ {0},	/*  */
	/* 444: freed */	{ NULL }
};
#endif

#define NUM_OP_TYPE_VARIANTS(op) PL_op_type_variants[op][0]

/* for 1 to num */
#define OP_TYPE_VARIANT(op, _j) \
  (PL_op_type_variants[(op)][(_j)] \
    ? (op) + PL_op_type_variants[(op)][(_j)] \
    : 0)


/* the OP_IS_* macros are optimized to a simple range check because
    all the member OPs are contiguous in regen/opcodes table.
    opcode.pl verifies the range contiguity, or generates an OR-equals
    expression */

#define OP_IS_SOCKET(op)	\
	((op) >= OP_SEND && (op) <= OP_GETPEERNAME)

#define OP_IS_FILETEST(op)	\
	((op) >= OP_FTRREAD && (op) <= OP_FTBINARY)

#define OP_IS_FILETEST_ACCESS(op)	\
	((op) >= OP_FTRREAD && (op) <= OP_FTEEXEC)

#define OP_IS_NUMCOMPARE(op)	\
	((op) >= OP_LT && (op) <= OP_I_CMP)

#define OP_IS_DIRHOP(op)	\
	((op) >= OP_READDIR && (op) <= OP_CLOSEDIR)

#define OP_IS_INFIX_BIT(op)	\
	((op) >= OP_BIT_AND && (op) <= OP_S_BIT_OR)

/* backcompat old Perl 5 names: */
#if 1
#define OP_NCMP		 OP_CMP
#define OP_I_NCMP	 OP_I_CMP
#define OP_SLT		 OP_S_LT
#define OP_SGT		 OP_S_GT
#define OP_SLE		 OP_S_LE
#define OP_SGE		 OP_S_GE
#define OP_SEQ		 OP_S_EQ
#define OP_SNE		 OP_S_NE
#define OP_SCMP		 OP_S_CMP
#define OP_NBIT_AND	 OP_I_BIT_AND
#define OP_NBIT_XOR	 OP_I_BIT_XOR
#define OP_NBIT_OR	 OP_I_BIT_OR
#define OP_SBIT_AND	 OP_S_BIT_AND
#define OP_SBIT_XOR	 OP_S_BIT_XOR
#define OP_SBIT_OR	 OP_S_BIT_OR
#define OP_NCOMPLEMENT	 OP_N_COMPLEMENT
#define OP_SCOMPLEMENT	 OP_S_COMPLEMENT

#define Perl_pp_ncmp	 Perl_pp_cmp
#define Perl_pp_i_ncmp	 Perl_pp_i_cmp
#define Perl_pp_slt	 Perl_pp_s_lt
#define Perl_pp_sgt	 Perl_pp_s_gt
#define Perl_pp_sle	 Perl_pp_s_le
#define Perl_pp_sge	 Perl_pp_s_ge
#define Perl_pp_seq	 Perl_pp_s_eq
#define Perl_pp_sne	 Perl_pp_s_ne
#define Perl_pp_scmp	 Perl_pp_s_cmp
#define Perl_pp_nbit_and Perl_pp_i_bit_and
#define Perl_pp_nbit_xor Perl_pp_i_bit_xor
#define Perl_pp_nbit_or	 Perl_pp_i_bit_or
#define Perl_pp_sbit_and Perl_pp_s_bit_and
#define Perl_pp_sbit_xor Perl_pp_s_bit_xor
#define Perl_pp_sbit_or	 Perl_pp_s_bit_or
#define Perl_pp_ncomplement Perl_pp_n_complement
#define Perl_pp_scomplement Perl_pp_s_complement
#endif

/* ex: set ro: */
