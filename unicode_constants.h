/* ex: set ro ft=c: -*- mode: c; buffer-read-only: t -*-
 * !!!!!!!   DO NOT EDIT THIS FILE   !!!!!!!
 * This file is built by regen/unicode_constants.pl from Unicode data.
 * Any changes made here will be lost!
 */


#ifndef PERL_UNICODE_CONSTANTS_H_   /* Guard against nested #includes */
#define PERL_UNICODE_CONSTANTS_H_   1

/* This file contains #defines for the version of Unicode being used and
 * various Unicode code points.  The values the code point macros expand to
 * are the native Unicode code point, or all or portions of the UTF-8 encoding
 * for the code point.  In the former case, the macro name has the suffix
 * "_NATIVE"; otherwise, the suffix "_UTF8".
 *
 * The macros that have the suffix "_UTF8" may have further suffixes, as
 * follows:
 *  "_FIRST_BYTE" if the value is just the first byte of the UTF-8
 *                representation; the value will be a numeric constant.
 *  "_TAIL"       if instead it represents all but the first byte.  This, and
 *                with no additional suffix are both string constants */

/*
=head1 Unicode Support

=for apidoc AmU|placeholder|BOM_UTF8

This is a macro that evaluates to a string constant of the  UTF-8 bytes that
define the Unicode BYTE ORDER MARK (U+FEFF) for the platform that perl
is compiled on.  This allows code to use a mnemonic for this character that
works on both ASCII and EBCDIC platforms.
S<C<sizeof(BOM_UTF8) - 1>> can be used to get its length in
bytes.

=for apidoc AmU|placeholder|REPLACEMENT_CHARACTER_UTF8

This is a macro that evaluates to a string constant of the  UTF-8 bytes that
define the Unicode REPLACEMENT CHARACTER (U+FFFD) for the platform that perl
is compiled on.  This allows code to use a mnemonic for this character that
works on both ASCII and EBCDIC platforms.
S<C<sizeof(REPLACEMENT_CHARACTER_UTF8) - 1>> can be used to get its length in
bytes.

=cut
*/

#define UNICODE_MAJOR_VERSION   9
#define UNICODE_DOT_VERSION     0
#define UNICODE_DOT_DOT_VERSION 0


#if 'A' == 65 /* ASCII/Latin1 */
#   define LATIN_SMALL_LETTER_LONG_S_UTF8  "\xC5\xBF"    /* U+017F */

#   define COMBINING_GRAVE_ACCENT_UTF8  "\xCC\x80"    /* U+0300 */

#   define GREEK_CAPITAL_LETTER_IOTA_UTF8  "\xCE\x99"    /* U+0399 */
#   define GREEK_SMALL_LETTER_MU_UTF8  "\xCE\xBC"    /* U+03BC */

#   define LATIN_CAPITAL_LETTER_SHARP_S_UTF8  "\xE1\xBA\x9E"    /* U+1E9E */

#   define LATIN_SMALL_LIGATURE_LONG_S_T_UTF8  "\xEF\xAC\x85"    /* U+FB05 */
#   define LATIN_SMALL_LIGATURE_ST_UTF8  "\xEF\xAC\x86"    /* U+FB06 */
#   define LATIN_CAPITAL_LETTER_I_WITH_DOT_ABOVE_UTF8  "\xC4\xB0"    /* U+0130 */
#   define LATIN_SMALL_LETTER_DOTLESS_I_UTF8  "\xC4\xB1"    /* U+0131 */

#   define HYPHEN_UTF8  "\xE2\x80\x90"    /* U+2010 */
#   define BOM_UTF8_FIRST_BYTE  0xEF    /* U+FEFF */
#   define BOM_UTF8_TAIL  "\xBB\xBF"    /* U+FEFF */

#   define BOM_UTF8  "\xEF\xBB\xBF"    /* U+FEFF */

#   define REPLACEMENT_CHARACTER_UTF8  "\xEF\xBF\xBD"    /* U+FFFD */

#   define NBSP_NATIVE  0xA0    /* U+00A0 */
#   define NBSP_UTF8  "\xC2\xA0"    /* U+00A0 */

#   define DEL_NATIVE  0x7F    /* U+007F */
#   define CR_NATIVE  0x0D    /* U+000D */
#   define LF_NATIVE  0x0A    /* U+000A */
#   define VT_NATIVE  0x0B    /* U+000B */
#   define ESC_NATIVE  0x1B    /* U+001B */
#   define LATIN_SMALL_LETTER_SHARP_S_NATIVE  0xDF    /* U+00DF */
#   define LATIN_SMALL_LETTER_A_WITH_RING_ABOVE_NATIVE  0xE5    /* U+00E5 */
#   define LATIN_CAPITAL_LETTER_A_WITH_RING_ABOVE_NATIVE  0xC5    /* U+00C5 */
#   define LATIN_SMALL_LETTER_Y_WITH_DIAERESIS_NATIVE  0xFF    /* U+00FF */
#   define MICRO_SIGN_NATIVE  0xB5    /* U+00B5 */
#   define MAX_PRINT_A_FOR_USE_ONLY_BY_REGCOMP_DOT_C   0x7E   /* The max code point that isPRINT_A */

#endif	/* ASCII/Latin1 */

#if 'A' == 193 /* EBCDIC 1047 */ \
     && '\\' == 224 && '[' == 173 && ']' == 189 && '{' == 192 && '}' == 208 \
     && '^' == 95 && '~' == 161 && '!' == 90 && '#' == 123 && '|' == 79 \
     && '$' == 91 && '@' == 124 && '`' == 121
#   define LATIN_SMALL_LETTER_LONG_S_UTF8  "\x8F\x73"    /* U+017F */

#   define COMBINING_GRAVE_ACCENT_UTF8  "\xAF\x41"    /* U+0300 */

#   define GREEK_CAPITAL_LETTER_IOTA_UTF8  "\xB3\x68"    /* U+0399 */
#   define GREEK_SMALL_LETTER_MU_UTF8  "\xB4\x70"    /* U+03BC */

#   define LATIN_CAPITAL_LETTER_SHARP_S_UTF8  "\xBF\x63\x72"    /* U+1E9E */

#   define LATIN_SMALL_LIGATURE_LONG_S_T_UTF8  "\xDD\x72\x67\x46"    /* U+FB05 */
#   define LATIN_SMALL_LIGATURE_ST_UTF8  "\xDD\x72\x67\x47"    /* U+FB06 */
#   define LATIN_CAPITAL_LETTER_I_WITH_DOT_ABOVE_UTF8  "\x8D\x57"    /* U+0130 */
#   define LATIN_SMALL_LETTER_DOTLESS_I_UTF8  "\x8D\x58"    /* U+0131 */

#   define HYPHEN_UTF8  "\xCA\x41\x57"    /* U+2010 */
#   define BOM_UTF8_FIRST_BYTE  0xDD    /* U+FEFF */
#   define BOM_UTF8_TAIL  "\x73\x66\x73"    /* U+FEFF */

#   define BOM_UTF8  "\xDD\x73\x66\x73"    /* U+FEFF */

#   define REPLACEMENT_CHARACTER_UTF8  "\xDD\x73\x73\x71"    /* U+FFFD */

#   define NBSP_NATIVE  0x41    /* U+00A0 */
#   define NBSP_UTF8  "\x80\x41"    /* U+00A0 */

#   define DEL_NATIVE  0x07    /* U+007F */
#   define CR_NATIVE  0x0D    /* U+000D */
#   define LF_NATIVE  0x15    /* U+000A */
#   define VT_NATIVE  0x0B    /* U+000B */
#   define ESC_NATIVE  0x27    /* U+001B */
#   define LATIN_SMALL_LETTER_SHARP_S_NATIVE  0x59    /* U+00DF */
#   define LATIN_SMALL_LETTER_A_WITH_RING_ABOVE_NATIVE  0x47    /* U+00E5 */
#   define LATIN_CAPITAL_LETTER_A_WITH_RING_ABOVE_NATIVE  0x67    /* U+00C5 */
#   define LATIN_SMALL_LETTER_Y_WITH_DIAERESIS_NATIVE  0xDF    /* U+00FF */
#   define MICRO_SIGN_NATIVE  0xA0    /* U+00B5 */
#   define MAX_PRINT_A_FOR_USE_ONLY_BY_REGCOMP_DOT_C   0xF9   /* The max code point that isPRINT_A */

#endif	/* EBCDIC 1047 */

#if 'A' == 193 /* EBCDIC 037 */ \
     && '\\' == 224 && '[' == 186 && ']' == 187 && '{' == 192 && '}' == 208 \
     && '^' == 176 && '~' == 161 && '!' == 90 && '#' == 123 && '|' == 79 \
     && '$' == 91 && '@' == 124 && '`' == 121
#   define LATIN_SMALL_LETTER_LONG_S_UTF8  "\x8E\x72"    /* U+017F */

#   define COMBINING_GRAVE_ACCENT_UTF8  "\xAD\x41"    /* U+0300 */

#   define GREEK_CAPITAL_LETTER_IOTA_UTF8  "\xB2\x67"    /* U+0399 */
#   define GREEK_SMALL_LETTER_MU_UTF8  "\xB3\x6A"    /* U+03BC */

#   define LATIN_CAPITAL_LETTER_SHARP_S_UTF8  "\xBF\x62\x71"    /* U+1E9E */

#   define LATIN_SMALL_LIGATURE_LONG_S_T_UTF8  "\xDD\x71\x66\x46"    /* U+FB05 */
#   define LATIN_SMALL_LIGATURE_ST_UTF8  "\xDD\x71\x66\x47"    /* U+FB06 */
#   define LATIN_CAPITAL_LETTER_I_WITH_DOT_ABOVE_UTF8  "\x8C\x57"    /* U+0130 */
#   define LATIN_SMALL_LETTER_DOTLESS_I_UTF8  "\x8C\x58"    /* U+0131 */

#   define HYPHEN_UTF8  "\xCA\x41\x57"    /* U+2010 */
#   define BOM_UTF8_FIRST_BYTE  0xDD    /* U+FEFF */
#   define BOM_UTF8_TAIL  "\x72\x65\x72"    /* U+FEFF */

#   define BOM_UTF8  "\xDD\x72\x65\x72"    /* U+FEFF */

#   define REPLACEMENT_CHARACTER_UTF8  "\xDD\x72\x72\x70"    /* U+FFFD */

#   define NBSP_NATIVE  0x41    /* U+00A0 */
#   define NBSP_UTF8  "\x78\x41"    /* U+00A0 */

#   define DEL_NATIVE  0x07    /* U+007F */
#   define CR_NATIVE  0x0D    /* U+000D */
#   define LF_NATIVE  0x25    /* U+000A */
#   define VT_NATIVE  0x0B    /* U+000B */
#   define ESC_NATIVE  0x27    /* U+001B */
#   define LATIN_SMALL_LETTER_SHARP_S_NATIVE  0x59    /* U+00DF */
#   define LATIN_SMALL_LETTER_A_WITH_RING_ABOVE_NATIVE  0x47    /* U+00E5 */
#   define LATIN_CAPITAL_LETTER_A_WITH_RING_ABOVE_NATIVE  0x67    /* U+00C5 */
#   define LATIN_SMALL_LETTER_Y_WITH_DIAERESIS_NATIVE  0xDF    /* U+00FF */
#   define MICRO_SIGN_NATIVE  0xA0    /* U+00B5 */
#   define MAX_PRINT_A_FOR_USE_ONLY_BY_REGCOMP_DOT_C   0xF9   /* The max code point that isPRINT_A */

#endif	/* EBCDIC 037 */

/* The number of code points not matching \pC */
#define NON_OTHER_COUNT_FOR_USE_ONLY_BY_REGCOMP_DOT_C  128021

/* The highest code point that has any type of case change */
#define HIGHEST_CASE_CHANGING_CP_FOR_USE_ONLY_BY_UTF8_DOT_C  0x1E943

#endif /* PERL_UNICODE_CONSTANTS_H_ */

/* ex: set ro: */
