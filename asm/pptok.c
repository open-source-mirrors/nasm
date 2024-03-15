/* Automatically generated from ./asm/pptok.dat by ./asm/pptok.pl */
/* Do not edit */

#include "compiler.h"
#include "nctype.h"
#include "nasmlib.h"
#include "hashtbl.h"
#include "preproc.h"

const char * const pp_directives[118] = {
    "%if",
    "%ifctx",
    "%ifdef",
    "%ifdefalias",
    "%ifempty",
    "%ifenv",
    "%ifid",
    "%ifidn",
    "%ifidni",
    "%ifmacro",
    "%ifnum",
    "%ifstr",
    "%iftoken",
    "%ifusable",
    "%ifusing",
    NULL,
    "%ifn",
    "%ifnctx",
    "%ifndef",
    "%ifndefalias",
    "%ifnempty",
    "%ifnenv",
    "%ifnid",
    "%ifnidn",
    "%ifnidni",
    "%ifnmacro",
    "%ifnnum",
    "%ifnstr",
    "%ifntoken",
    "%ifnusable",
    "%ifnusing",
    NULL,
    "%elif",
    "%elifctx",
    "%elifdef",
    "%elifdefalias",
    "%elifempty",
    "%elifenv",
    "%elifid",
    "%elifidn",
    "%elifidni",
    "%elifmacro",
    "%elifnum",
    "%elifstr",
    "%eliftoken",
    "%elifusable",
    "%elifusing",
    NULL,
    "%elifn",
    "%elifnctx",
    "%elifndef",
    "%elifndefalias",
    "%elifnempty",
    "%elifnenv",
    "%elifnid",
    "%elifnidn",
    "%elifnidni",
    "%elifnmacro",
    "%elifnnum",
    "%elifnstr",
    "%elifntoken",
    "%elifnusable",
    "%elifnusing",
    NULL,
    "%aliases",
    "%arg",
    "%clear",
    "%depend",
    "%else",
    "%endif",
    "%endm",
    "%endmacro",
    "%endrep",
    "%error",
    "%exitmacro",
    "%exitrep",
    "%fatal",
    "%include",
    "%line",
    "%local",
    "%null",
    "%pop",
    "%pragma",
    "%push",
    "%rep",
    "%repl",
    "%rotate",
    "%stacksize",
    "%undef",
    "%undefalias",
    "%use",
    "%warning",
    "%assign",
    "%iassign",
    "%defalias",
    "%idefalias",
    "%define",
    "%idefine",
    "%defstr",
    "%idefstr",
    "%deftok",
    "%ideftok",
    "%macro",
    "%imacro",
    "%pathsearch",
    "%ipathsearch",
    "%rmacro",
    "%irmacro",
    "%strcat",
    "%istrcat",
    "%strlen",
    "%istrlen",
    "%substr",
    "%isubstr",
    "%xdefine",
    "%ixdefine",
    "%unmacro",
    "%unimacro",
};
const uint8_t pp_directives_len[118] = {
    3,
    6,
    6,
    11,
    8,
    6,
    5,
    6,
    7,
    8,
    6,
    6,
    8,
    9,
    8,
    11,
    4,
    7,
    7,
    12,
    9,
    7,
    6,
    7,
    8,
    9,
    7,
    7,
    9,
    10,
    9,
    12,
    5,
    8,
    8,
    13,
    10,
    8,
    7,
    8,
    9,
    10,
    8,
    8,
    10,
    11,
    10,
    13,
    6,
    9,
    9,
    14,
    11,
    9,
    8,
    9,
    10,
    11,
    9,
    9,
    11,
    12,
    11,
    14,
    8,
    4,
    6,
    7,
    5,
    6,
    5,
    9,
    7,
    6,
    10,
    8,
    6,
    8,
    5,
    6,
    5,
    4,
    7,
    5,
    4,
    5,
    7,
    10,
    6,
    11,
    4,
    8,
    7,
    8,
    9,
    10,
    7,
    8,
    7,
    8,
    7,
    8,
    6,
    7,
    11,
    12,
    7,
    8,
    7,
    8,
    7,
    8,
    7,
    8,
    8,
    9,
    8,
    9,
};
enum preproc_token pp_token_hash(const char *token)
{

#define UNUSED_HASH_ENTRY (65535/3)
    static const int16_t hash1[256] = {
        0,
        0,
        0,
        UNUSED_HASH_ENTRY,
        0,
        UNUSED_HASH_ENTRY,
        0,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        0,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        0,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        76,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        0,
        96,
        UNUSED_HASH_ENTRY,
        0,
        0,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        0,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        0,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        0,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        0,
        0,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        67,
        0,
        0,
        0,
        UNUSED_HASH_ENTRY,
        0,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        5,
        0,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        7,
        UNUSED_HASH_ENTRY,
        68,
        0,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        0,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        0,
        98,
        -1,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        0,
        0,
        UNUSED_HASH_ENTRY,
        34,
        UNUSED_HASH_ENTRY,
        -10,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        37,
        32,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        59,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        0,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        102,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        0,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        0,
        138,
        UNUSED_HASH_ENTRY,
        53,
        0,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        50,
        43,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        45,
        53,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        20,
        UNUSED_HASH_ENTRY,
        0,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        80,
        UNUSED_HASH_ENTRY,
        -20,
        UNUSED_HASH_ENTRY,
        0,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        0,
        UNUSED_HASH_ENTRY,
        101,
        UNUSED_HASH_ENTRY,
        26,
        -17,
        69,
        81,
        9,
        UNUSED_HASH_ENTRY,
        79,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        0,
        44,
        113,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        86,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        -35,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        -27,
        UNUSED_HASH_ENTRY,
        42,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        116,
        UNUSED_HASH_ENTRY,
        35,
        UNUSED_HASH_ENTRY,
        66,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        62,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        12,
        -34,
        75,
        UNUSED_HASH_ENTRY,
        -19,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        0,
        27,
        UNUSED_HASH_ENTRY,
        60,
        48,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        -9,
        84,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        -61,
        UNUSED_HASH_ENTRY,
        71,
        87,
        UNUSED_HASH_ENTRY,
        117,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        108,
        UNUSED_HASH_ENTRY,
        91,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        109,
        UNUSED_HASH_ENTRY,
    };
    static const int16_t hash2[256] = {
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        0,
        UNUSED_HASH_ENTRY,
        0,
        UNUSED_HASH_ENTRY,
        71,
        0,
        52,
        0,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        0,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        0,
        UNUSED_HASH_ENTRY,
        0,
        0,
        105,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        0,
        0,
        UNUSED_HASH_ENTRY,
        20,
        UNUSED_HASH_ENTRY,
        68,
        UNUSED_HASH_ENTRY,
        0,
        93,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        0,
        UNUSED_HASH_ENTRY,
        0,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        0,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        0,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        113,
        18,
        UNUSED_HASH_ENTRY,
        0,
        UNUSED_HASH_ENTRY,
        0,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        65,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        0,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        0,
        64,
        UNUSED_HASH_ENTRY,
        30,
        0,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        107,
        0,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        0,
        UNUSED_HASH_ENTRY,
        -83,
        0,
        UNUSED_HASH_ENTRY,
        0,
        UNUSED_HASH_ENTRY,
        58,
        UNUSED_HASH_ENTRY,
        0,
        UNUSED_HASH_ENTRY,
        0,
        UNUSED_HASH_ENTRY,
        0,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        0,
        6,
        56,
        UNUSED_HASH_ENTRY,
        61,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        78,
        0,
        0,
        UNUSED_HASH_ENTRY,
        -5,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        23,
        0,
        0,
        UNUSED_HASH_ENTRY,
        16,
        UNUSED_HASH_ENTRY,
        70,
        89,
        UNUSED_HASH_ENTRY,
        0,
        19,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        -65,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        0,
        4,
        57,
        UNUSED_HASH_ENTRY,
        49,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        90,
        97,
        UNUSED_HASH_ENTRY,
        21,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        83,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        -83,
        UNUSED_HASH_ENTRY,
        -7,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        36,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        0,
        UNUSED_HASH_ENTRY,
        17,
        24,
        0,
        UNUSED_HASH_ENTRY,
        100,
        0,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        70,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        38,
        72,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        115,
        117,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        -23,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        25,
        UNUSED_HASH_ENTRY,
        28,
        29,
        104,
        68,
        -19,
        UNUSED_HASH_ENTRY,
        110,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        0,
        UNUSED_HASH_ENTRY,
        4,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        2,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        10,
        -19,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        61,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        85,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
        UNUSED_HASH_ENTRY,
    };
    uint32_t k1, k2;
    uint64_t crc;
    uint16_t ix;

    crc = crc64i(UINT64_C(0x076259c3e291c26c), token);
    k1 = (uint32_t)crc;
    k2 = (uint32_t)(crc >> 32);

    ix = hash1[k1 & 0xff] + hash2[k2 & 0xff];
    if (ix >= 118)
        return PP_INVALID;

    if (!pp_directives[ix] || nasm_stricmp(pp_directives[ix], token))
        return PP_INVALID;

    return ix;
}
