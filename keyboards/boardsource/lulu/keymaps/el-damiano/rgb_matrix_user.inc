// Boardsource Lulu LED Layout
//
// LEGEND:
// [XX] - number of LED on the switch
//  XX  - number of LED on the backside
//
//        03        04        05               40        39        38
//  [11] [10] [09] [08] [07] [06]             [41] [42] [43] [44] [45] [46]
//  [12] [13] [14] [15] [16] [17]             [52] [51] [50] [49] [48] [47]
//  [23] [22] [21] [20] [19] [18]             [53] [54] [55] [56] [57] [58]
//  [24] [25] [26] [27] [28] [29] [30]   [65] [64] [63] [62] [61] [60] [59]
//        02        01        00               35        36        37
//               [34] [33] [32] [31]       [66] [67] [68] [69]


RGB_MATRIX_EFFECT(test_effect)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

#define SOL_GREEN 0x85, 0x99, 0x00
#define SOL_YELLOW 0xb5, 0x89, 0x00
#define SOL_RED 0xdc, 0x32, 0x2f
#define SOL_BLUE 0x26, 0x8b, 0xd2

#define CAT_MAUVE 0x88, 0x39, 0xef
#define CAT_PINK 0xea, 0x76, 0xcb
#define CAT_GREEN 0x40, 0xa0, 0x2b
#define CAT_RED 0xd2, 0x0f, 0x39
#define CAT_YELLOW 0x88, 0x39, 0xef
#define CAT_BLUE 0x1e, 0x66, 0xf5

#define GRUV_GREEN 0xb8, 0xbb, 0x26
#define GRUV_RED 0xfb, 0x49, 0x34
#define GRUV_YELLOW 0xfa, 0xbd, 0x2f
#define GRUV_BLUE 0x83, 0xa5, 0x98

#define SOL_GREEN 0x85, 0x99, 0x00
#define SOL_YELLOW 0xb5, 0x89, 0x00
#define SOL_RED 0xdc, 0x32, 0x2f
#define SOL_BLUE 0x26, 0x8b, 0xd2

static bool test_effect(effect_params_t* params){

    uint8_t greens[] = {41,52,53,64};
    for(uint8_t i = 0; i < sizeof(greens); i++) {
        rgb_matrix_set_color(greens[i], SOL_GREEN);
    }

    uint8_t reds[] = {42,51,54,63};
    for(uint8_t i = 0; i < sizeof(reds); i++) {
        rgb_matrix_set_color(reds[i], SOL_BLUE);
    }

    uint8_t yellows[] = {43,50,55,62};
    for(uint8_t i = 0; i < sizeof(yellows); i++) {
        rgb_matrix_set_color(yellows[i], SOL_RED);
    }

    uint8_t blues[] = {44,49,56,61};
    for(uint8_t i = 0; i < sizeof(blues); i++) {
        rgb_matrix_set_color(blues[i], SOL_YELLOW);
    }

    return false;
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
