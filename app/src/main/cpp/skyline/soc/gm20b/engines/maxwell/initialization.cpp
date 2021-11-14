// SPDX-License-Identifier: MPL-2.0
// Copyright © 2021 Skyline Team and Contributors (https://github.com/skyline-emu/)
// Copyright © 2020 Ryujinx Team and Contributors

#include <soc/gm20b/engines/maxwell_3d.h>

namespace skyline::soc::gm20b::engine::maxwell3d {
    void Maxwell3D::InitializeRegisters() {
        registers = {};

        HandleMethod(0x202, 0x400);
        HandleMethod(0x212, 0x400);
        HandleMethod(0x222, 0x400);
        HandleMethod(0x232, 0x400);
        HandleMethod(0x242, 0x400);
        HandleMethod(0x252, 0x400);
        HandleMethod(0x262, 0x400);
        HandleMethod(0x272, 0x400);
        HandleMethod(0x203, 0x300);
        HandleMethod(0x213, 0x300);
        HandleMethod(0x223, 0x300);
        HandleMethod(0x233, 0x300);
        HandleMethod(0x243, 0x300);
        HandleMethod(0x253, 0x300);
        HandleMethod(0x263, 0x300);
        HandleMethod(0x273, 0x300);
        HandleMethod(0x204, 0xCF);
        HandleMethod(0x205, 0x40);
        HandleMethod(0x215, 0x40);
        HandleMethod(0x225, 0x40);
        HandleMethod(0x235, 0x40);
        HandleMethod(0x245, 0x40);
        HandleMethod(0x255, 0x40);
        HandleMethod(0x265, 0x40);
        HandleMethod(0x275, 0x40);
        HandleMethod(0x206, 0x1);
        HandleMethod(0x216, 0x1);
        HandleMethod(0x226, 0x1);
        HandleMethod(0x236, 0x1);
        HandleMethod(0x246, 0x1);
        HandleMethod(0x256, 0x1);
        HandleMethod(0x266, 0x1);
        HandleMethod(0x276, 0x1);
        HandleMethod(0x810, 0x11);
        HandleMethod(0x820, 0x20);
        HandleMethod(0x830, 0x30);
        HandleMethod(0x840, 0x40);
        HandleMethod(0x850, 0x51);
        HandleMethod(0x803, 0x1);
        HandleMethod(0x813, 0x1);
        HandleMethod(0x823, 0x1);
        HandleMethod(0x833, 0x1);
        HandleMethod(0x843, 0x1);
        HandleMethod(0x853, 0x1);
        HandleMethod(0x824, 0x1);
        HandleMethod(0x834, 0x2);
        HandleMethod(0x844, 0x3);
        HandleMethod(0x854, 0x4);
        HandleMethod(0x286, 0x6420);
        HandleMethod(0x28E, 0x6420);
        HandleMethod(0x296, 0x6420);
        HandleMethod(0x29E, 0x6420);
        HandleMethod(0x2A6, 0x6420);
        HandleMethod(0x2AE, 0x6420);
        HandleMethod(0x2B6, 0x6420);
        HandleMethod(0x2BE, 0x6420);
        HandleMethod(0x2C6, 0x6420);
        HandleMethod(0x2CE, 0x6420);
        HandleMethod(0x2D6, 0x6420);
        HandleMethod(0x2DE, 0x6420);
        HandleMethod(0x2E6, 0x6420);
        HandleMethod(0x2EE, 0x6420);
        HandleMethod(0x2F6, 0x6420);
        HandleMethod(0x2FE, 0x6420);
        HandleMethod(0x303, 0x3F800000);
        HandleMethod(0x307, 0x3F800000);
        HandleMethod(0x30B, 0x3F800000);
        HandleMethod(0x30F, 0x3F800000);
        HandleMethod(0x313, 0x3F800000);
        HandleMethod(0x317, 0x3F800000);
        HandleMethod(0x31B, 0x3F800000);
        HandleMethod(0x31F, 0x3F800000);
        HandleMethod(0x323, 0x3F800000);
        HandleMethod(0x327, 0x3F800000);
        HandleMethod(0x32B, 0x3F800000);
        HandleMethod(0x32F, 0x3F800000);
        HandleMethod(0x333, 0x3F800000);
        HandleMethod(0x337, 0x3F800000);
        HandleMethod(0x33B, 0x3F800000);
        HandleMethod(0x33F, 0x3F800000);
        HandleMethod(0x340, 0xFFFF0000);
        HandleMethod(0x342, 0xFFFF0000);
        HandleMethod(0x344, 0xFFFF0000);
        HandleMethod(0x346, 0xFFFF0000);
        HandleMethod(0x348, 0xFFFF0000);
        HandleMethod(0x34A, 0xFFFF0000);
        HandleMethod(0x34C, 0xFFFF0000);
        HandleMethod(0x34E, 0xFFFF0000);
        HandleMethod(0x341, 0xFFFF0000);
        HandleMethod(0x343, 0xFFFF0000);
        HandleMethod(0x345, 0xFFFF0000);
        HandleMethod(0x347, 0xFFFF0000);
        HandleMethod(0x349, 0xFFFF0000);
        HandleMethod(0x34B, 0xFFFF0000);
        HandleMethod(0x34D, 0xFFFF0000);
        HandleMethod(0x34F, 0xFFFF0000);
        HandleMethod(0x381, 0xFFFF0000);
        HandleMethod(0x385, 0xFFFF0000);
        HandleMethod(0x389, 0xFFFF0000);
        HandleMethod(0x38D, 0xFFFF0000);
        HandleMethod(0x391, 0xFFFF0000);
        HandleMethod(0x395, 0xFFFF0000);
        HandleMethod(0x399, 0xFFFF0000);
        HandleMethod(0x39D, 0xFFFF0000);
        HandleMethod(0x3A1, 0xFFFF0000);
        HandleMethod(0x3A5, 0xFFFF0000);
        HandleMethod(0x3A9, 0xFFFF0000);
        HandleMethod(0x3AD, 0xFFFF0000);
        HandleMethod(0x3B1, 0xFFFF0000);
        HandleMethod(0x3B5, 0xFFFF0000);
        HandleMethod(0x3B9, 0xFFFF0000);
        HandleMethod(0x3BD, 0xFFFF0000);
        HandleMethod(0x382, 0xFFFF0000);
        HandleMethod(0x386, 0xFFFF0000);
        HandleMethod(0x38A, 0xFFFF0000);
        HandleMethod(0x38E, 0xFFFF0000);
        HandleMethod(0x392, 0xFFFF0000);
        HandleMethod(0x396, 0xFFFF0000);
        HandleMethod(0x39A, 0xFFFF0000);
        HandleMethod(0x39E, 0xFFFF0000);
        HandleMethod(0x3A2, 0xFFFF0000);
        HandleMethod(0x3A6, 0xFFFF0000);
        HandleMethod(0x3AA, 0xFFFF0000);
        HandleMethod(0x3AE, 0xFFFF0000);
        HandleMethod(0x3B2, 0xFFFF0000);
        HandleMethod(0x3B6, 0xFFFF0000);
        HandleMethod(0x3BA, 0xFFFF0000);
        HandleMethod(0x3BE, 0xFFFF0000);
        HandleMethod(0x780, 0x1);
        HandleMethod(0x788, 0x1);
        HandleMethod(0x790, 0x1);
        HandleMethod(0x798, 0x1);
        HandleMethod(0x7A0, 0x1);
        HandleMethod(0x7A8, 0x1);
        HandleMethod(0x7B0, 0x1);
        HandleMethod(0x7B8, 0x1);
        HandleMethod(0x781, 0x1);
        HandleMethod(0x789, 0x1);
        HandleMethod(0x791, 0x1);
        HandleMethod(0x799, 0x1);
        HandleMethod(0x7A1, 0x1);
        HandleMethod(0x7A9, 0x1);
        HandleMethod(0x7B1, 0x1);
        HandleMethod(0x7B9, 0x1);
        HandleMethod(0x782, 0x2);
        HandleMethod(0x78A, 0x2);
        HandleMethod(0x792, 0x2);
        HandleMethod(0x79A, 0x2);
        HandleMethod(0x7A2, 0x2);
        HandleMethod(0x7AA, 0x2);
        HandleMethod(0x7B2, 0x2);
        HandleMethod(0x7BA, 0x2);
        HandleMethod(0x783, 0x1);
        HandleMethod(0x78B, 0x1);
        HandleMethod(0x793, 0x1);
        HandleMethod(0x79B, 0x1);
        HandleMethod(0x7A3, 0x1);
        HandleMethod(0x7AB, 0x1);
        HandleMethod(0x7B3, 0x1);
        HandleMethod(0x7BB, 0x1);
        HandleMethod(0x784, 0x1);
        HandleMethod(0x78C, 0x1);
        HandleMethod(0x794, 0x1);
        HandleMethod(0x79C, 0x1);
        HandleMethod(0x7A4, 0x1);
        HandleMethod(0x7AC, 0x1);
        HandleMethod(0x7B4, 0x1);
        HandleMethod(0x7BC, 0x1);
        HandleMethod(0x785, 0x2);
        HandleMethod(0x78D, 0x2);
        HandleMethod(0x795, 0x2);
        HandleMethod(0x79D, 0x2);
        HandleMethod(0x7A5, 0x2);
        HandleMethod(0x7AD, 0x2);
        HandleMethod(0x7B5, 0x2);
        HandleMethod(0x7BD, 0x2);
        HandleMethod(0x786, 0x1);
        HandleMethod(0x78E, 0x1);
        HandleMethod(0x796, 0x1);
        HandleMethod(0x79E, 0x1);
        HandleMethod(0x7A6, 0x1);
        HandleMethod(0x7AE, 0x1);
        HandleMethod(0x7B6, 0x1);
        HandleMethod(0x7BE, 0x1);
        HandleMethod(0xC3, 0x1);
        HandleMethod(0x35A, 0xFFFF);
        HandleMethod(0x487, 0xFAC6881);
        HandleMethod(0x3EB, 0x1);
        HandleMethod(0x54E, 0x1);
        HandleMethod(0x3FA, 0x14);
        HandleMethod(0x3FB, 0x40);
        HandleMethod(0x48A, 0x400);
        HandleMethod(0x48B, 0x300);
        HandleMethod(0x48C, 0x10001);
        HandleMethod(0x56D, 0x1);
        HandleMethod(0x1D5, 0x1);
        HandleMethod(0x478, 0x88888888);
        HandleMethod(0x479, 0x88888888);
        HandleMethod(0x47A, 0x88888888);
        HandleMethod(0x47B, 0x88888888);
        HandleMethod(0x5AD, 0x3);
        HandleMethod(0x3E9, 0x1);
        HandleMethod(0x3EF, 0xFFFF);
        HandleMethod(0x3F0, 0xFFFF);
        HandleMethod(0x3F1, 0xFFFF);
        HandleMethod(0x3F2, 0xFFFF);
        HandleMethod(0x3EA, 0xFFFF);
        HandleMethod(0x65C, 0x1);
        HandleMethod(0x587, 0x9F0);
        HandleMethod(0x373, 0x10);
        HandleMethod(0x458, 0x25E00040);
        HandleMethod(0x459, 0x25E00040);
        HandleMethod(0x45A, 0x25E00040);
        HandleMethod(0x45B, 0x25E00040);
        HandleMethod(0x45C, 0x25E00040);
        HandleMethod(0x45D, 0x25E00040);
        HandleMethod(0x45E, 0x25E00040);
        HandleMethod(0x45F, 0x25E00040);
        HandleMethod(0x460, 0x25E00040);
        HandleMethod(0x461, 0x25E00040);
        HandleMethod(0x462, 0x25E00040);
        HandleMethod(0x463, 0x25E00040);
        HandleMethod(0x464, 0x25E00040);
        HandleMethod(0x465, 0x25E00040);
        HandleMethod(0x466, 0x25E00040);
        HandleMethod(0x467, 0x25E00040);
        HandleMethod(0x468, 0x25E00040);
        HandleMethod(0x469, 0x25E00040);
        HandleMethod(0x46A, 0x25E00040);
        HandleMethod(0x46B, 0x25E00040);
        HandleMethod(0x46C, 0x25E00040);
        HandleMethod(0x46D, 0x25E00040);
        HandleMethod(0x46E, 0x25E00040);
        HandleMethod(0x46F, 0x25E00040);
        HandleMethod(0x470, 0x25E00040);
        HandleMethod(0x471, 0x25E00040);
        HandleMethod(0x472, 0x25E00040);
        HandleMethod(0x473, 0x25E00040);
        HandleMethod(0x474, 0x25E00040);
        HandleMethod(0x475, 0x25E00040);
        HandleMethod(0x476, 0x25E00040);
        HandleMethod(0x477, 0x25E00040);
        HandleMethod(0x5F4, 0xFF);
        HandleMethod(0x5F5, 0xFFFFFFFF);
        HandleMethod(0x5F6, 0x2);
        HandleMethod(0x4C6, 0x1);
        HandleMethod(0x422, 0x1);
        HandleMethod(0x423, 0x1);
        HandleMethod(0x425, 0x1);
        HandleMethod(0x427, 0x1);
        HandleMethod(0x644, 0x290);
        HandleMethod(0x597, 0x1);
        HandleMethod(0x4EC, 0x3F800000);
        HandleMethod(0x4ED, 0x3F800000);
        HandleMethod(0x59C, 0x30201000);
        HandleMethod(0x59D, 0x70605040);
        HandleMethod(0x59E, 0xB8A89888);
        HandleMethod(0x59F, 0xF8E8D8C8);
        HandleMethod(0x5A0, 0xFFFF00);
        HandleMethod(0x4B4, 0x3);
        HandleMethod(0x4B5, 0x2);
        HandleMethod(0x36B, 0x1B02);
        HandleMethod(0x36C, 0x1B02);
        HandleMethod(0x444, 0x1);
        HandleMethod(0x400, 0x10);
        HandleMethod(0x86, 0x10);
        HandleMethod(0x4B7, 0x10);
        HandleMethod(0x365, 0x1);
        HandleMethod(0x559, 0xFFF);
        HandleMethod(0x55F, 0xFFFFF);
        HandleMethod(0x584, 0x12);
        HandleMethod(0x58B, 0x3);
        HandleMethod(0xC9, 0x3F800000);
        HandleMethod(0xCA, 0x3F800000);
        HandleMethod(0xCB, 0x3F800000);
        HandleMethod(0xCC, 0x3F800000);
        HandleMethod(0xCD, 0x3F800000);
        HandleMethod(0xCE, 0x3F800000);
        HandleMethod(0x1D8, 0x39291909);
        HandleMethod(0x1D9, 0x79695949);
        HandleMethod(0x1DA, 0xB9A99989);
        HandleMethod(0x1DB, 0xF9E9D9C9);
        HandleMethod(0x1DC, 0x30201000);
        HandleMethod(0x1DD, 0x70605040);
        HandleMethod(0x1DE, 0x9080);
        HandleMethod(0x1E0, 0x39291909);
        HandleMethod(0x1E1, 0x79695949);
        HandleMethod(0x1E2, 0xB9A99989);
        HandleMethod(0x1E3, 0xF9E9D9C9);
        HandleMethod(0x1F4, 0x30201000);
        HandleMethod(0x1F5, 0x70605040);
        HandleMethod(0x1F6, 0x9080);
        HandleMethod(0xDF, 0x1);
        HandleMethod(0x3EE, 0x2);
        HandleMethod(0x44C, 0x2);
        HandleMethod(0x40C, 0x20181008);
        HandleMethod(0x40D, 0x40383028);
        HandleMethod(0x40E, 0x60585048);
        HandleMethod(0x40F, 0x80787068);
        HandleMethod(0x647, 0x900);
        HandleMethod(0x648, 0x405);
        HandleMethod(0x4C2, 0x1);
        HandleMethod(0x64B, 0x1);
        HandleMethod(0x64F, 0x2C1C);
        HandleMethod(0xB0, 0x1);
        HandleMethod(0x564, 0x3F);
        HandleMethod(0x65B, 0x11);
        HandleMethod(0xB9, 0xB001);
        HandleMethod(0xB6, 0x40);
        HandleMethod(0x660, 0x80);
        HandleMethod(0x541, 0x80);
        HandleMethod(0x3D9, 0x400040);
        HandleMethod(0x3DA, 0x2212);
        HandleMethod(0x3DB, 0x8080203);
        HandleMethod(0x442, 0x8);
        HandleMethod(0x3DC, 0x80001);
        HandleMethod(0x44E, 0x1);
        HandleMethod(0xC0, 0x1);
        HandleMethod(0x4C5, 0x1);
        HandleMethod(0x4E1, 0x1);
        HandleMethod(0x4E2, 0x1);
        HandleMethod(0x4E3, 0x1);
        HandleMethod(0x4E4, 0x1);
        HandleMethod(0x566, 0x1);
        HandleMethod(0x567, 0x1);
        HandleMethod(0x568, 0x1);
        HandleMethod(0x569, 0x1);
        HandleMethod(0x4C3, 0x1);
        HandleMethod(0x4CF, 0x1);
        HandleMethod(0x4D0, 0x1);
        HandleMethod(0x4D1, 0x2);
        HandleMethod(0x4D2, 0x1);
        HandleMethod(0x4D3, 0x1);
        HandleMethod(0x4D4, 0x2);
        HandleMethod(0x4D6, 0x1);
        HandleMethod(0x375, 0x1);
        HandleMethod(0x672, 0x1500);
        HandleMethod(0x678, 0x1);
        HandleMethod(0x679, 0x1);
        HandleMethod(0x67A, 0x1);
        HandleMethod(0x67B, 0x1);
        HandleMethod(0x67C, 0x1);
        HandleMethod(0x67D, 0x1);
        HandleMethod(0x67E, 0x1);
        HandleMethod(0x67F, 0x1);
        HandleMethod(0x673, 0x1);
        HandleMethod(0x447, 0x1);
        HandleMethod(0x680, 0x1111);
        HandleMethod(0x35B, 0xFFFF0000);
        HandleMethod(0x35C, 0xFFFF0000);
        HandleMethod(0x43E, 0x1010);
        HandleMethod(0x542, 0x80000000);
        HandleMethod(0x543, 0x40000000);
        HandleMethod(0xC6, 0x8);
        HandleMethod(0xC7, 0x8);
        HandleMethod(0x367, 0x1);
        HandleMethod(0xDE, 0xC);
        HandleMethod(0x1D3, 0x55);
        HandleMethod(0x508, 0x3);
        HandleMethod(0x402, 0x8);
        HandleMethod(0x403, 0x40);
        HandleMethod(0x404, 0x12C);
        HandleMethod(0x358, 0x40);
        HandleMethod(0x406, 0x20);
        HandleMethod(0x407, 0x1);
        HandleMethod(0x408, 0x20);
        HandleMethod(0x409, 0x1);
        HandleMethod(0xD8, 0x20164010);
        HandleMethod(0xD9, 0x20);
        HandleMethod(0x36A, 0x30);
        HandleMethod(0x81, 0x6);
        HandleMethod(0xB4, 0x3FFFFF);
        HandleMethod(0x488, 0x5);
        HandleMethod(0x3E6, 0x400008);
        HandleMethod(0x4A1, 0x8000080);
        HandleMethod(0x514, 0x400008);
        HandleMethod(0x515, 0x8000080);
    }
}