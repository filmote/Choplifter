#pragma once

#include "src/utils/Arduboy2Ext.h"

const uint8_t PROGMEM choplifter[] = {
0x5e, 0x0f, 0xb6, 0x51, 0x3a, 0x25, 0x9d, 0xb3, 0x4a, 0xd9, 0xe8, 0x6c, 0x74, 0x76, 0xfb, 0x36, 
0x3a, 0x26, 0x1b, 0xa3, 0x54, 0xd2, 0xa7, 0xb7, 0x4c, 0x36, 0xca, 0xed, 0x4c, 0xe9, 0x25, 0x95, 
0x8d, 0x0e, 0x53, 0xd9, 0xa5, 0x92, 0xd4, 0x72, 0x1b, 0xa1, 0x8d, 0x71, 0xbb, 0x5d, 0xaa, 0xcb, 
0xe5, 0xb2, 0x4b, 0x25, 0xa9, 0xe5, 0x36, 0x22, 0x1b, 0xe3, 0x76, 0xbb, 0xfd, 0x56, 0x97, 0x8b, 
0xcb, 0xc6, 0xb8, 0xdd, 0xce, 0xb4, 0x55, 0x0e, 0x43, 0x4a, 0x3a, 0x27, 0x9d, 0x93, 0xca, 0x39, 
0x25, 0x9d, 0xb2, 0x91, 0x49, 0xe5, 0x9c, 0x22, 0x95, 0xca, 0x39, 0x45, 0xa6, 0xa4, 0x73, 0x52, 
0x2a, 0xa9, 0x94, 0x54, 0xce, 0x29, 0x32, 0xa9, 0x9c, 0x53, 0x32, 0x9d, 0x8e, 0xde, 0x39, 0xa9, 
0xa4, 0x54, 0x52, 0x49, 0x25, 0xb7, 0x11, 0x65, 0x97, 0x4a, 0x49, 0x25, 0x95, 0x94, 0x4a, 0x6e, 
0x23, 0x93, 0xca, 0x39, 0x85, 0x44, 0xa9, 0x9c, 0x53, 0xe4, 0x4a, 0x3a, 0x27, 0xa5, 0x92, 0x4a, 
0x2a, 0xa9, 0xe4, 0x36, 0x32, 0xa9, 0x9c, 0x53, 0x64, 0xe9, 0xad, 0xb2, 0x4a, 0x3a, 0xe7, 0x9c, 
0x92, 0xdb, 0x2c
};

const uint8_t PROGMEM background[] = {
0x3f, 0x07, 0xd0, 0x14, 0x5d, 0x6c, 0x93, 0x29, 0xba, 0xd8, 0xa6, 0x0b, 0xbd, 0xd1, 0x45, 0x17, 
0xfa, 0x63, 0x9b, 0x6d, 0xba, 0xe8, 0xc2, 0x1b
};

const uint8_t PROGMEM the_end[] = {
0x24, 0x17, 0x4a, 0x67, 0xb7, 0x5b, 0x66, 0xbb, 0x4d, 0xc7, 0xab, 0xa3, 0x73, 0xdb, 0xed, 0x76, 
0xbb, 0xd2, 0xd1, 0x11, 0xea, 0x08, 0xff, 0xff, 0xff, 0xff, 0x4f, 0x7d, 0x2a, 0x1d, 0x97, 0x92, 
0xca, 0x39, 0xf7, 0xff, 0xa9, 0x4f, 0x6d, 0xb7, 0xdb, 0x74, 0x94, 0x2b, 0xe7, 0x9c, 0x72, 0x3a, 
0x1d, 0xef, 0xca, 0x39, 0xa7, 0x1c, 0x5f, 0xce, 0x39, 0xb9, 0xfd, 0xff, 0xff, 0xff, 0x57, 0xbd, 
0x72, 0x52, 0x49, 0xad, 0xa4, 0xb2, 0xff, 0xff, 0xff, 0xff, 0xa7, 0x3e, 0xb5, 0x4d, 0x47, 0x69, 
0x97, 0x4a, 0xaa, 0x74, 0x3a, 0xbd, 0xdd, 0xda, 0xa5, 0x92, 0x94, 0x52, 0x49, 0x65, 0xed, 0x76, 
0xbb, 0xdd, 0xa6, 0xa4, 0x72, 0xce, 0x39
};

const uint8_t PROGMEM base[] = {
0x7f, 0x1f, 0xc0, 0x23, 0x79, 0x5f, 0x55, 0xdd, 0x55, 0x55, 0x95, 0xac, 0xaa, 0xaa, 0xaa, 0xaa, 
0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x40, 0xa9, 0xd9, 0xb3, 0xdb, 0x4f, 0xbd, 0xea, 
0x53, 0x9f, 0xfa, 0xd4, 0xab, 0xbe, 0x95, 0xfd, 0xd4, 0xab, 0x3e, 0xf5, 0xa9, 0x4f, 0xbd, 0xea, 
0x53, 0xdb, 0xed, 0xab, 0x5e, 0xf5, 0xaa, 0x57, 0xbd, 0x6a, 0xbb, 0xfd, 0xd4, 0xab, 0x3e, 0xf5, 
0xa9, 0x4f, 0xbd, 0xea, 0x53, 0xdb, 0x4f, 0xbd, 0xea, 0x53, 0x9f, 0xfa, 0xd4, 0xab, 0x3e, 0xb5, 
0x4e, 0x5b, 0x68, 0x2e, 0x9d, 0x4d, 0x67, 0xd3, 0xd9, 0x74, 0x10, 0x6c, 0x36, 0x5b, 0xb9, 0x6a, 
0x55, 0xe5, 0x2a, 0x5b, 0xd5, 0xd5, 0xa9, 0xaa, 0xae, 0x4e, 0x55, 0x75, 0x75, 0xaa, 0xaa, 0x2b, 
0x5b, 0xd5, 0xd5, 0xa9, 0xaa, 0xae, 0x4e, 0x55, 0x75, 0x75, 0xaa, 0xaa, 0x2b, 0x5b, 0xb9, 0x4a, 
0x5d, 0xb5, 0xaa, 0x55, 0x55, 0xae, 0x56, 0x55, 0xae, 0xb2, 0x55, 0x5d, 0x9d, 0xaa, 0xea, 0xea, 
0x54, 0x55, 0x57, 0xa7, 0xaa, 0xba, 0xb2, 0x55, 0x5d, 0x9d, 0xaa, 0xea, 0xea, 0x54, 0x55, 0x57, 
0xa7, 0xaa, 0xba, 0xb2, 0x95, 0xab, 0x56, 0x55, 0xae, 0xb2, 0x95, 0xcd, 0x27, 0xd3, 0xf9, 0x74, 
0x3e, 0x9d, 0x4f, 0x87, 0xc2, 0xed, 0xb2, 0x92, 0x95, 0xeb, 0x5c, 0xa7, 0x52, 0xa9, 0x54, 0x3a, 
0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 
0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 
0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 
0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 
0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 
0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 
0x74, 0x2a, 0x95, 0x4a, 0xe5, 0x3a, 0xd7, 0xc9, 0x4a, 0x56, 0x76, 0xbb, 0x02
};

const uint8_t PROGMEM heli_blank[] = {
0x25, 0x17, 0xc0, 0xc7, 0x01
};

const uint8_t PROGMEM heli_01_00[] = {
0x25, 0x17, 0xd0, 0x9f, 0xdd, 0x6e, 0xb7, 0xdb, 0x75, 0x50, 0xd2, 0xb7, 0xba, 0xee, 0xff, 0x53, 
0xaa, 0x94, 0x2a, 0xa5, 0x4a, 0xa9, 0x52, 0xaa, 0x76, 0xe9, 0x68, 0xd3, 0xe9, 0x74, 0x3a, 0x1d, 
0x53, 0x3a, 0xe7, 0x9c, 0x73, 0xce, 0x39, 0xe7, 0x9c, 0x53, 0x52, 0x49, 0xe5, 0xdc, 0x52, 0x39, 
0x39, 0xb2, 0xd2, 0xdb, 0xed, 0x76, 0xbb, 0xdd, 0x6e, 0xb7, 0xdb, 0xed, 0x76, 0xbb, 0xdd, 0x6e, 
0xb7, 0xdb, 0xed, 0x76, 0xbb, 0xdd, 0x8e, 0x5d
};

const uint8_t PROGMEM heli_01_00_mask[] = {
0x25, 0x17, 0xd0, 0x9f, 0xdd, 0x6e, 0xb7, 0xdb, 0x75, 0x50, 0xd2, 0xb7, 0xba, 0xe4, 0x76, 0x9d, 
0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0xb4, 0xe9, 0x74, 0x3a, 0x9d, 0x8e, 0x29, 0x9d, 0x73, 0xce, 0x39, 
0xe7, 0x9c, 0x73, 0xce, 0x29, 0xa9, 0xa4, 0x72, 0x6e, 0xa9, 0x9c, 0x1c, 0x59, 0xe9, 0xed, 0x76, 
0xbb, 0xdd, 0x6e, 0xb7, 0xdb, 0xed, 0x76, 0xbb, 0xdd, 0x6e, 0xb7, 0xdb, 0xed, 0x76, 0xbb, 0xdd, 
0x6e, 0xc7, 0x2e
};

const uint8_t PROGMEM heli_01_01[] = {
0x25, 0x17, 0xa0, 0xc9, 0xc0, 0x33, 0x01
};

const uint8_t PROGMEM heli_01_02[] = {
0x25, 0x17, 0x48, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 
0xa7, 0xc3, 0x73, 0x3e, 0xa8, 0x34, 0x1f, 0x94, 0x09
};

const uint8_t PROGMEM heli_01_03[] = {
0x25, 0x17, 0xc8, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 
0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x8e, 0x38, 0xf0, 
0x4c
};

const uint8_t PROGMEM heli_01_04[] = {
0x25, 0x17, 0x20, 0xa5, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0x6f, 
0x2b, 0x19, 0x24, 0x9a, 0x0f, 0xca, 0x04
};

const uint8_t PROGMEM heli_02_00[] = {
0x25, 0x17, 0xb0, 0xbe, 0xdd, 0x6e, 0xb7, 0xeb, 0x74, 0x68, 0x4e, 0x87, 0xab, 0xa5, 0x72, 0xf7, 
0xff, 0x29, 0x55, 0x4a, 0x95, 0x52, 0xa5, 0x54, 0x29, 0x55, 0x4a, 0xd5, 0xd4, 0xe9, 0x74, 0x3a, 
0x1d, 0x63, 0xae, 0x73, 0x4e, 0x49, 0x25, 0x95, 0x73, 0x4e, 0x49, 0x25, 0x95, 0x54, 0xce, 0x29, 
0xe7, 0x94, 0x1c, 0x4b, 0xe9, 0xf5, 0x76, 0xbb, 0xdd, 0x6e, 0xb7, 0xdb, 0xed, 0x52, 0xc9, 0xed, 
0x76, 0xbb, 0xdd, 0x6e, 0xb7, 0xdb, 0xed, 0x76, 0xbb, 0x1d, 0xbb
};

const uint8_t PROGMEM heli_02_00_mask[] = {
0x25, 0x17, 0xb0, 0xbe, 0xdd, 0x6e, 0xb7, 0xeb, 0x74, 0x68, 0x4e, 0x87, 0xab, 0xa5, 0x72, 0x72, 
0xbb, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0xec, 0xe9, 0x74, 0x3a, 0x1d, 0x63, 0xae, 0x73, 0x4e, 0x49, 
0x25, 0x95, 0x73, 0x4e, 0x49, 0x25, 0x95, 0x54, 0xce, 0x29, 0xe7, 0x94, 0x1c, 0x4b, 0xe9, 0xf5, 
0x76, 0xbb, 0xdd, 0x6e, 0xb7, 0xdb, 0xed, 0x52, 0xc9, 0xed, 0x76, 0xbb, 0xdd, 0x6e, 0xb7, 0xdb, 
0xed, 0x76, 0xbb, 0x1d, 0xbb
};

const uint8_t PROGMEM heli_02_01[] = {
0x25, 0x17, 0x60, 0xc9, 0x40, 0x34, 0x01
};

const uint8_t PROGMEM heli_02_02[] = {
0x25, 0x17, 0x74, 0x3a, 0x9d, 0x4e, 0x67, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0x67, 0xd3, 0xe9, 
0xd0, 0x9f, 0x0f, 0x2a, 0xcd, 0x07, 0x67, 0x02
};

const uint8_t PROGMEM heli_02_03[] = {
0x25, 0x17, 0x74, 0x3a, 0x9d, 0x4e, 0x67, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0x67, 0xd3, 0xe9, 
0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x6c, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x6c, 0x3a, 
0x1d, 0x63, 0x20, 0x9a, 0x00
};

const uint8_t PROGMEM heli_02_04[] = {
0x25, 0x17, 0x20, 0xa1, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xd9, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 
0xd3, 0xcb, 0xce, 0xa5, 0x83, 0x3d, 0xf3, 0xc1, 0x99
};

const uint8_t PROGMEM heli_03_00[] = {
0x25, 0x17, 0xd0, 0x9d, 0xdd, 0x6e, 0xb7, 0xdb, 0xed, 0x76, 0x9d, 0x4e, 0x87, 0xcd, 0xed, 0x3a, 
0x24, 0x2d, 0x95, 0x92, 0xbf, 0x2a, 0xa5, 0x4a, 0xa9, 0x52, 0xaa, 0x94, 0x5c, 0x2a, 0xa9, 0x54, 
0x3a, 0x1d, 0x6d, 0x3a, 0x9d, 0xce, 0x5e, 0xee, 0xb2, 0xdb, 0x5d, 0xad, 0x6e, 0x75, 0xb9, 0xcb, 
0x39, 0x25, 0x95, 0x73, 0x4e, 0x49, 0x25, 0x43, 0xd7, 0x3a, 0xbd, 0xdd, 0x6e, 0xb7, 0xdb, 0xed, 
0x76, 0xbb, 0xcd, 0x6e, 0xb7, 0xdb, 0xed, 0x76, 0xbb, 0xdd, 0x6e, 0xd3, 0xe9, 0x74, 0x3a, 0x74, 
0x02
};

const uint8_t PROGMEM heli_03_00_mask[] = {
0x25, 0x17, 0xd0, 0x9d, 0xdd, 0x6e, 0xb7, 0xdb, 0xed, 0x76, 0x9d, 0x4e, 0x87, 0xcd, 0xed, 0x3a, 
0x24, 0x2d, 0x95, 0x92, 0xeb, 0x74, 0x3a, 0x1d, 0x7b, 0x3a, 0x1d, 0x6d, 0x3a, 0x9d, 0xce, 0x5e, 
0xee, 0xb2, 0xdb, 0x5d, 0xad, 0x6e, 0x75, 0xb9, 0xcb, 0x39, 0x25, 0x95, 0x73, 0x4e, 0x49, 0x25, 
0x43, 0xd7, 0x3a, 0xbd, 0xdd, 0x6e, 0xb7, 0xdb, 0xed, 0x76, 0xbb, 0xcd, 0x6e, 0xb7, 0xdb, 0xed, 
0x76, 0xbb, 0xdd, 0x6e, 0xd3, 0xe9, 0x74, 0x3a, 0x74, 0x02
};

const uint8_t PROGMEM heli_03_01[] = {
0x25, 0x17, 0x20, 0xc9, 0xc0, 0x34, 0x01
};

const uint8_t PROGMEM heli_03_02[] = {
0x25, 0x17, 0x6c, 0x3a, 0x9d, 0x4e, 0xa7, 0xb3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 
0x74, 0x3a, 0x1d, 0x96, 0xf3, 0x41, 0xa5, 0xf9, 0x20, 0x4d
};

const uint8_t PROGMEM heli_03_03[] = {
0x25, 0x17, 0x6c, 0x3a, 0x9d, 0x4e, 0xa7, 0xb3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 
0xec, 0x76, 0xbb, 0x4d, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9b, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 
0x9d, 0x8e, 0x28, 0x30, 0x4d
};

const uint8_t PROGMEM heli_03_04[] = {
0x25, 0x17, 0xe0, 0xa0, 0xed, 0x76, 0x9b, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x36, 0x9d, 0x4e, 0xa7, 
0xd3, 0xdb, 0x4a, 0xa6, 0xd3, 0xc1, 0x95, 0xf9, 0x7c, 0x90, 0x26
};

const uint8_t PROGMEM heli_04_00[] = {
0x25, 0x17, 0xb0, 0xbe, 0xdd, 0x6e, 0xb7, 0xdb, 0x75, 0x3a, 0x9d, 0x4e, 0x87, 0xc5, 0xed, 0x3a, 
0x6c, 0x2d, 0x95, 0xba, 0xff, 0x4f, 0x7d, 0xea, 0x53, 0xb7, 0xba, 0x94, 0x2a, 0x85, 0xb1, 0x74, 
0x3a, 0x9d, 0xbd, 0xdc, 0x65, 0xb7, 0xbb, 0xca, 0x5d, 0xee, 0x72, 0x97, 0x92, 0xca, 0x39, 0xa7, 
0xa4, 0x92, 0xe1, 0x6d, 0x9d, 0xac, 0x5d, 0xe7, 0x3a, 0x57, 0xbb, 0xda, 0x6e, 0xb7, 0x4b, 0x25, 
0x97, 0x4a, 0x2a, 0xa9, 0xa4, 0x92, 0xdb, 0xed, 0x76, 0xbb, 0x4d, 0xa7, 0xd3, 0xe9, 0xd0, 0x08
};

const uint8_t PROGMEM heli_04_00_mask[] = {
0x25, 0x17, 0xb0, 0xbe, 0xdd, 0x6e, 0xb7, 0xdb, 0x75, 0x3a, 0x9d, 0x4e, 0x87, 0xc5, 0xed, 0x3a, 
0x6c, 0x2d, 0x95, 0x92, 0xdb, 0xed, 0x76, 0x9b, 0x4e, 0x87, 0xb5, 0x74, 0x3a, 0x9d, 0xbd, 0xdc, 
0x65, 0xb7, 0xbb, 0xca, 0x5d, 0xee, 0x72, 0x97, 0x92, 0xca, 0x39, 0xa7, 0xa4, 0x92, 0xe1, 0x6d, 
0x9d, 0xac, 0x5d, 0xe7, 0x3a, 0x57, 0xbb, 0xda, 0x6e, 0xb7, 0x4b, 0x25, 0x97, 0x4a, 0x2a, 0xa9, 
0xa4, 0x92, 0xdb, 0xed, 0x76, 0xbb, 0x4d, 0xa7, 0xd3, 0xe9, 0xd0, 0x08
};

const uint8_t PROGMEM heli_04_01[] = {
0x25, 0x17, 0x20, 0xc9, 0xc0, 0x34, 0x01
};

const uint8_t PROGMEM heli_04_02[] = {
0x25, 0x17, 0xd0, 0x94, 0x4e, 0xa7, 0xb3, 0xe9, 0x74, 0x3a, 0xbb, 0x4d, 0xa7, 0xd3, 0x61, 0x3d, 
0x1f, 0xc6, 0xd2, 0xe9, 0xe0, 0xc1, 0x7c, 0x90, 0x26
};

const uint8_t PROGMEM heli_04_03[] = {
0x25, 0x17, 0xd0, 0x94, 0x4e, 0xa7, 0xb3, 0xe9, 0x74, 0x3a, 0xbb, 0x4d, 0xa7, 0xd3, 0xd9, 0xed, 
0x36, 0x9d, 0x4e, 0x67, 0xd3, 0xe9, 0x74, 0x36, 0x9d, 0x4e, 0x67, 0xd3, 0xe9, 0xa8, 0x63, 0x4c, 
0xa7, 0x03, 0x8d, 0x04
};

const uint8_t PROGMEM heli_04_04[] = {
0x25, 0x17, 0x90, 0x9f, 0xce, 0x6e, 0xb7, 0xe9, 0x74, 0x3a, 0x9b, 0x4e, 0xa7, 0xb3, 0xe9, 0x74, 
0x3a, 0xdb, 0xb9, 0x54, 0x2a, 0x68, 0x34, 0x1f, 0xa4, 0x09
};

const uint8_t PROGMEM heli_05_00[] = {
0x25, 0x17, 0xa0, 0xa1, 0x74, 0x3a, 0x1d, 0xba, 0xb3, 0xdb, 0xd1, 0x97, 0x5c, 0x6e, 0xd3, 0xe9, 
0x6c, 0x3a, 0x95, 0x4a, 0x35, 0x3e, 0x93, 0x4a, 0x2a, 0xa9, 0x9c, 0x72, 0xce, 0x39, 0x25, 0x95, 
0x73, 0xca, 0x39, 0xe7, 0x14, 0xd2, 0xb6, 0x9f, 0xeb, 0xdc, 0xa5, 0x54, 0xaf, 0x7a, 0xd5, 0xab, 
0xfe, 0xff, 0xd4, 0xb7, 0xba, 0x55, 0xaf, 0xa4, 0x72, 0xae, 0xb6, 0x4b, 0x25, 0x95, 0xdc, 0x2e, 
0x95, 0xdc, 0x6e, 0xb7, 0x63, 0x11
};

const uint8_t PROGMEM heli_05_00_mask[] = {
0x25, 0x17, 0xa0, 0xa1, 0x74, 0x3a, 0x1d, 0xba, 0xb3, 0xdb, 0xd1, 0x97, 0x54, 0xce, 0x39, 0xe7, 
0x9c, 0x73, 0x4a, 0x2a, 0xa9, 0xe4, 0xf8, 0x4c, 0x2a, 0xa9, 0xa4, 0x72, 0xca, 0x39, 0xe7, 0x94, 
0x54, 0xce, 0x29, 0xe7, 0x9c, 0x53, 0x48, 0xdb, 0x7e, 0xea, 0x53, 0xaa, 0x94, 0xea, 0x55, 0xaf, 
0x7a, 0xd5, 0xff, 0x9f, 0xfa, 0x56, 0xb7, 0xea, 0x95, 0x54, 0xce, 0xd5, 0x76, 0xa9, 0xa4, 0x92, 
0xdb, 0xa5, 0x92, 0xdb, 0xed, 0x76, 0x2c, 0x02
};

const uint8_t PROGMEM heli_05_01[] = {
0x25, 0x17, 0x20, 0xc9, 0x6c, 0xa0, 0x98, 0x00
};

const uint8_t PROGMEM heli_05_02[] = {
0x25, 0x17, 0xd0, 0x9c, 0x4e, 0xa7, 0xb3, 0xe9, 0xb0, 0x9d, 0x0f, 0x65, 0xe9, 0x74, 0x36, 0x9d, 
0x4e, 0x67, 0xd3, 0xe9, 0x74, 0xf0, 0x58, 0x3e, 0x48, 0x13
};

const uint8_t PROGMEM heli_05_03[] = {
0x25, 0x17, 0xd0, 0x9c, 0x4e, 0xa7, 0xb3, 0xe9, 0x74, 0x76, 0x9b, 0x4e, 0x67, 0xd3, 0xe9, 0x74, 
0x36, 0x9d, 0x4e, 0x67, 0xd3, 0xe9, 0x74, 0x8c, 0xd9, 0xc8, 0xd2, 0xe9, 0x6c, 0x3a, 0x9d, 0xce, 
0xa6, 0xd3, 0xe9, 0x40, 0x03, 0x01
};

const uint8_t PROGMEM heli_05_04[] = {
0x25, 0x17, 0x60, 0xa1, 0x74, 0x3a, 0xbb, 0x4d, 0xa7, 0xb3, 0xe9, 0x74, 0x3a, 0x9b, 0x4e, 0xa7, 
0xb3, 0xe9, 0x4a, 0x76, 0x2e, 0xc8, 0x33, 0x1f, 0xac, 0x09
};

const uint8_t PROGMEM heli_06_00[] = {
0x25, 0x17, 0xa0, 0xa1, 0x74, 0x3a, 0x1d, 0xb6, 0xb7, 0xdb, 0xb1, 0xb8, 0x4c, 0x67, 0xd3, 0xe9, 
0x6c, 0x3a, 0x75, 0x2e, 0x5c, 0xe6, 0x9c, 0x73, 0x4e, 0x39, 0xe7, 0x9c, 0x53, 0xce, 0x39, 0xe5, 
0x94, 0x54, 0xce, 0x29, 0xb4, 0x25, 0x9d, 0xbd, 0xdc, 0xa5, 0x54, 0x29, 0xd5, 0xab, 0xce, 0x75, 
0xea, 0x53, 0xa9, 0x54, 0xff, 0x7f, 0xea, 0x53, 0x4b, 0x25, 0x55, 0x29, 0xb9, 0x54, 0x52, 0x39, 
0x25, 0x95, 0x54, 0x72, 0xbb, 0xdd, 0x86, 0x3e
};

const uint8_t PROGMEM heli_06_00_mask[] = {
0x25, 0x17, 0xa0, 0xa1, 0x74, 0x3a, 0x1d, 0xb6, 0xb7, 0xdb, 0xb1, 0xb8, 0x54, 0x52, 0x39, 0xe7, 
0x9c, 0x73, 0x4a, 0x2a, 0x1b, 0x42, 0x73, 0xce, 0x39, 0xa7, 0x9c, 0x73, 0xce, 0x29, 0xe7, 0x9c, 
0x72, 0x4a, 0x2a, 0xe7, 0x14, 0xda, 0x92, 0xce, 0xb9, 0xda, 0xd5, 0xae, 0x76, 0x9d, 0xeb, 0x5c, 
0xa7, 0x3e, 0x95, 0x4a, 0xf5, 0xff, 0xa7, 0x3e, 0xb5, 0x54, 0x52, 0x95, 0x92, 0x4b, 0x25, 0x95, 
0x53, 0x52, 0x49, 0x25, 0xb7, 0xdb, 0x6d, 0xe8, 0x03
};

const uint8_t PROGMEM heli_06_01[] = {
0x25, 0x17, 0x20, 0xc9, 0x6c, 0xa0, 0x98, 0x00
};

const uint8_t PROGMEM heli_06_02[] = {
0x25, 0x17, 0xd0, 0x9d, 0x4e, 0x87, 0xfb, 0x7c, 0x68, 0x4b, 0x67, 0xd3, 0xd9, 0x74, 0x36, 0x9d, 
0x4d, 0x67, 0xd3, 0x41, 0x5f, 0xf9, 0x60, 0x4d
};

const uint8_t PROGMEM heli_06_03[] = {
0x25, 0x17, 0xd0, 0x9d, 0x4e, 0x67, 0xd3, 0xe9, 0x6c, 0x3a, 0x9b, 0xce, 0xa6, 0xb3, 0xe9, 0x6c, 
0x3a, 0x9b, 0x4e, 0x87, 0xab, 0x6c, 0x7c, 0xe9, 0x6c, 0x3a, 0x9b, 0xce, 0xa6, 0xb3, 0xe9, 0x6c, 
0x3a, 0xe8, 0x1f
};

const uint8_t PROGMEM heli_06_04[] = {
0x25, 0x17, 0x60, 0xa1, 0x74, 0x3a, 0x9b, 0xce, 0xa6, 0xb3, 0xe9, 0x6c, 0x3a, 0x9b, 0xce, 0xa6, 
0xd3, 0xa9, 0x7c, 0x30, 0x69, 0x3e, 0x58, 0x13
};

const uint8_t PROGMEM heli_07_00[] = {
0x25, 0x17, 0xa0, 0xa1, 0xec, 0x76, 0xbb, 0xdd, 0xae, 0x83, 0xba, 0xbe, 0x5d, 0x75, 0xff, 0x52, 
0x49, 0xa5, 0x4a, 0x49, 0x65, 0x57, 0xe9, 0x74, 0x3a, 0x1d, 0x63, 0xce, 0x39, 0xe7, 0x9c, 0x72, 
0x4e, 0x39, 0xe5, 0x9c, 0x82, 0x84, 0xd2, 0xdb, 0xed, 0x76, 0xbb, 0xdd, 0x6e, 0xb7, 0xdb, 0xed, 
0x76, 0xbb, 0xdd, 0x8e, 0x6d
};

const uint8_t PROGMEM heli_07_00_mask[] = {
0x25, 0x17, 0xa0, 0xa1, 0xec, 0x76, 0xbb, 0xdd, 0xae, 0x83, 0xba, 0xbe, 0x5d, 0x25, 0x47, 0x57, 
0x3a, 0x9d, 0x4e, 0xc7, 0x98, 0x73, 0xce, 0x39, 0xa7, 0x9c, 0x53, 0x4e, 0x39, 0xa7, 0x20, 0xa1, 
0xf4, 0x76, 0xbb, 0xdd, 0x6e, 0xb7, 0xdb, 0xed, 0x76, 0xbb, 0xdd, 0x6e, 0xb7, 0x63, 0x1b
};
const uint8_t PROGMEM heli_07_01[] = {
0x25, 0x17, 0xa0, 0xbf, 0x6c, 0x20, 0xa2, 0x00
};

const uint8_t PROGMEM heli_07_02[] = {
0x25, 0x17, 0x90, 0x95, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 
0xf8, 0xcb, 0x07, 0x83, 0xe6, 0x83, 0x5b, 0x01
};

const uint8_t PROGMEM heli_07_03[] = {
0x25, 0x17, 0x90, 0x95, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 
0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0x57, 0x72, 0x1b, 0x18, 0x28
};

const uint8_t PROGMEM heli_07_04[] = {
0x25, 0x17, 0x20, 0xa7, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x6d, 0x25, 0xd3, 0xe9, 0x74, 
0x3a, 0xb8, 0x31, 0x1f, 0xdc, 0x0a
};

const uint8_t PROGMEM heli_08_00[] = {
0x25, 0x17, 0xd0, 0x9f, 0xdd, 0x6e, 0xb7, 0xeb, 0xa0, 0xb6, 0x6f, 0x57, 0x9d, 0xea, 0xa5, 0x92, 
0x4a, 0x95, 0x52, 0xa5, 0x54, 0xaf, 0xa2, 0x55, 0xd2, 0x39, 0xe5, 0x94, 0x5c, 0x2a, 0x05, 0x49, 
0xa5, 0xb7, 0xdb, 0xed, 0x76, 0xbb, 0xdd, 0x6e, 0xb7, 0xdb, 0xed, 0x76, 0xac, 0x03
};

const uint8_t PROGMEM heli_08_00_mask[] = {
0x25, 0x17, 0xd0, 0x9f, 0xdd, 0x6e, 0xb7, 0xeb, 0xa0, 0xb6, 0x6f, 0x57, 0xb1, 0xa7, 0xd3, 0xe9, 
0x68, 0x95, 0x74, 0x4e, 0x39, 0x25, 0x97, 0x4a, 0x41, 0x52, 0xe9, 0xed, 0x76, 0xbb, 0xdd, 0x6e, 
0xb7, 0xdb, 0xed, 0x76, 0xbb, 0x1d, 0xeb
};

const uint8_t PROGMEM heli_08_01[] = {
0x25, 0x17, 0xa0, 0xb9, 0xc0, 0x53, 0x01
};

const uint8_t PROGMEM heli_08_02[] = {
0x25, 0x17, 0xc8, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x0e, 
0x81, 0xc1, 0xa0, 0x41, 0xbe
};

const uint8_t PROGMEM heli_08_03[] = {
0x25, 0x17, 0xc8, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 
0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0x95, 0x4c, 0xa7, 0xd3, 0xe9, 0xc0, 0x40, 
0x01
};

const uint8_t PROGMEM heli_08_04[] = {
0x25, 0x17, 0x20, 0xa5, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0x95, 0x4c, 0xa7, 0xd3, 0xe9, 0x74, 
0x3a, 0x1d, 0x14, 0x18, 0xec, 0x0b
};

const uint8_t PROGMEM heli_09_00[] = {
0x25, 0x17, 0x60, 0xa5, 0xed, 0x76, 0x3b, 0x94, 0xb7, 0xbb, 0x53, 0xdf, 0x4a, 0x2a, 0xa9, 0x54, 
0x29, 0x55, 0x8a, 0x2b, 0x99, 0x54, 0x0a, 0x56, 0xdb, 0x6e, 0xb7, 0x63, 0x69, 0xbb, 0xdd, 0x8e, 
0x65
};

const uint8_t PROGMEM heli_09_00_mask[] = {
0x25, 0x17, 0x60, 0xa5, 0xed, 0x76, 0x3b, 0x94, 0xb7, 0x93, 0xe9, 0x78, 0xd3, 0xf1, 0x25, 0x93, 
0x4a, 0xc1, 0x6a, 0xdb, 0xed, 0x76, 0x2c, 0x6d, 0xb7, 0xdb, 0xb1, 0x0c
};

const uint8_t PROGMEM heli_09_02[] = {
0x25, 0x17, 0x90, 0x95, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 
0x60, 0xbc, 0x00
};

const uint8_t PROGMEM heli_09_03[] = {
0x25, 0x17, 0x90, 0x96, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 
0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0x03, 0x03, 0x05
};

const uint8_t PROGMEM heli_09_04[] = {
0x25, 0x17, 0x20, 0xa9, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0x07, 
0x06, 0x0a
};

const uint8_t PROGMEM heli_10_00[] = {
0x25, 0x17, 0x60, 0xa3, 0xed, 0x76, 0x3b, 0x94, 0xb7, 0x93, 0xa9, 0x6f, 0x25, 0x95, 0x2a, 0xa5, 
0x4a, 0xa9, 0x52, 0xaa, 0x94, 0xfd, 0x4a, 0x96, 0x1a, 0x4a, 0xdb, 0x6e, 0xc7, 0xda, 0x76, 0x3b, 
0xb6, 0x01
};

const uint8_t PROGMEM heli_10_00_mask[] = {
0x25, 0x17, 0x60, 0xa3, 0xed, 0x76, 0x3b, 0x94, 0xb7, 0x93, 0xe9, 0xf8, 0xd2, 0xe9, 0x74, 0x6c, 
0x95, 0x2c, 0x35, 0x94, 0xb6, 0xdd, 0x8e, 0xb5, 0xed, 0x76, 0x6c, 0x03
};

const uint8_t PROGMEM heli_10_02[] = {
0x25, 0x17, 0xc8, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 
0x07, 0xe6, 0x0b
};

const uint8_t PROGMEM heli_10_03[] = {
0x25, 0x17, 0x90, 0x95, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 
0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0x03, 0x13, 0x05
};

const uint8_t PROGMEM heli_10_04[] = {
0x25, 0x17, 0x20, 0xa7, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0x07, 
0x26, 0x0a
};

const uint8_t PROGMEM heli_11_00[] = {
0x25, 0x17, 0xa0, 0xa3, 0x74, 0x3a, 0x1d, 0x9c, 0xb7, 0x93, 0xff, 0xa7, 0xa4, 0x92, 0x4a, 0x2a, 
0xa9, 0x54, 0x29, 0xd5, 0xab, 0x64, 0xa9, 0xe1, 0xb6, 0xa5, 0x92, 0x4a, 0x86, 0xa6, 0xb4, 0x92, 
0xeb, 0xb0, 0x0c
};

const uint8_t PROGMEM heli_11_00_mask[] = {
0x25, 0x17, 0xa0, 0xa3, 0x74, 0x3a, 0x1d, 0x9c, 0xb7, 0x93, 0xdb, 0xd1, 0x94, 0x4e, 0x27, 0x4b, 
0x0d, 0xb7, 0x2d, 0x95, 0x54, 0x32, 0x34, 0xa5, 0x95, 0x5c, 0x87, 0x65
};

const uint8_t PROGMEM heli_11_02[] = {
0x25, 0x17, 0xe8, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0xdd, 0xa6, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 
0x07, 0xe2, 0x0b
};

const uint8_t PROGMEM heli_11_03[] = {
0x25, 0x17, 0xe8, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0xdd, 0xa6, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 
0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xd9, 0x6d, 0x3a, 0x9d, 0x4e, 0x07, 0xe6, 
0x09
};

const uint8_t PROGMEM heli_11_04[] = {
0x25, 0x17, 0x60, 0xa7, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x76, 0x9b, 0x4e, 0xa7, 
0xd3, 0x81, 0x79, 0x02
};

const uint8_t PROGMEM heli_12_00[] = {
0x25, 0x17, 0xa0, 0xa5, 0x74, 0x3a, 0xb8, 0xd0, 0xad, 0x76, 0xce, 0x29, 0xe7, 0xe4, 0xaa, 0x57, 
0x11, 0x96, 0x0a, 0x9e, 0xeb, 0x5c, 0x29, 0x55, 0x4a, 0x49, 0x35, 0x5b, 0x3a, 0xad, 0xe4, 0x76, 
0x1d, 0x36, 0x01
};

const uint8_t PROGMEM heli_12_00_mask[] = {
0x25, 0x17, 0xa0, 0xa5, 0x74, 0x3a, 0xb8, 0xd0, 0x8d, 0xa5, 0x74, 0x84, 0xa5, 0x82, 0xe7, 0x3a, 
0x57, 0x4a, 0x95, 0x52, 0x52, 0xcd, 0x96, 0x4e, 0x2b, 0xb9, 0x5d, 0x87, 0x4d
};

const uint8_t PROGMEM heli_12_02[] = {
0x25, 0x17, 0xd0, 0x9e, 0x4e, 0x67, 0xb7, 0x41, 0x56, 0xe9, 0xec, 0x36, 0x9d, 0x4d, 0x67, 0xb7, 
0xe9, 0x6c, 0x3a, 0x1d, 0x74, 0x0f
};

const uint8_t PROGMEM heli_12_03[] = {
0x25, 0x17, 0xd0, 0x9e, 0x4e, 0x67, 0xb7, 0xd9, 0xed, 0x36, 0x9b, 0xce, 0x6e, 0xd3, 0xd9, 0x74, 
0x76, 0x9b, 0xce, 0xa6, 0x43, 0x5d, 0x3a, 0xbb, 0x4d, 0x67, 0xd3, 0xd9, 0x6d, 0x3a, 0x9b, 0x4e, 
0x07, 0xdd, 0x03
};

const uint8_t PROGMEM heli_12_04[] = {
0x25, 0x17, 0x20, 0xa7, 0xed, 0x36, 0x9b, 0xce, 0x6e, 0xd3, 0xd9, 0x74, 0x76, 0x9b, 0xce, 0xa6, 
0x03, 0x0d, 0x05
};


const uint8_t PROGMEM heli_13_00[] = {
0x25, 0x17, 0xd0, 0x95, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x1d, 0x5d, 0x76, 0xbb, 0xdd, 0x6e, 
0xb7, 0xeb, 0x60, 0xa2, 0x6f, 0xb5, 0xeb, 0xff, 0x53, 0xaa, 0x94, 0x2a, 0xa5, 0x4a, 0xa9, 0x52, 
0xaa, 0x94, 0xaa, 0x5d, 0x7a, 0xda, 0x74, 0x3a, 0x9d, 0x8e, 0x31, 0xd7, 0x39, 0xe7, 0x9c, 0x73, 
0x4e, 0x2a, 0xa9, 0xa4, 0x92, 0xca, 0x29, 0xa9, 0x9c, 0x53, 0xce, 0x29, 0x5c, 0xa5, 0xd3, 0xe9, 
0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xb7, 0xdb, 0xed, 0x76, 0xbb, 0xdd, 0x6e, 0xb7, 0xdb, 0xed, 0x76, 
0x2c, 0x03
};

const uint8_t PROGMEM heli_13_00_mask[] = {
0x25, 0x17, 0xd0, 0x95, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x1d, 0x5d, 0x76, 0xbb, 0xdd, 0x6e, 
0xb7, 0xeb, 0x60, 0xa2, 0x6f, 0xb5, 0xde, 0xae, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0x4e, 0x4f, 0x9b, 
0x4e, 0xa7, 0xd3, 0x31, 0xe6, 0x3a, 0xe7, 0x9c, 0x73, 0xce, 0x49, 0x25, 0x95, 0x54, 0x52, 0x39, 
0x25, 0x95, 0x73, 0xca, 0x39, 0x85, 0xab, 0x74, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0xf4, 0x76, 
0xbb, 0xdd, 0x6e, 0xb7, 0xdb, 0xed, 0x76, 0xbb, 0xdd, 0x8e, 0x65
};

const uint8_t PROGMEM heli_13_01[] = {
0x25, 0x17, 0xc0, 0x2b, 0x05, 0x6d, 0x02
};

const uint8_t PROGMEM heli_13_02[] = {
0x25, 0x17, 0xa8, 0xd2, 0xe9, 0x74, 0x3a, 0x9f, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9f, 0x4e, 
0xa7, 0xd3, 0x21, 0x3e, 0xf8, 0x32, 0xe6, 0xe0, 0x4c
};

const uint8_t PROGMEM heli_13_03[] = {
0x25, 0x17, 0xa8, 0xd2, 0xe9, 0x74, 0x3a, 0x9f, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9f, 0x4e, 
0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0xce, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0xce, 0xa7, 0xd3, 
0xe9, 0xe0, 0xcd, 0xa0, 0x4d
};

const uint8_t PROGMEM heli_13_04[] = {
0x25, 0x17, 0x20, 0xa7, 0x74, 0x3a, 0x9d, 0xce, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x9d, 0xce, 0xa7, 
0xd3, 0xe9, 0xe0, 0xc7, 0xa8, 0x83, 0x32, 0x01
};

const uint8_t PROGMEM heli_14_00[] = {
0x25, 0x17, 0xa0, 0xa3, 0x74, 0x3a, 0xa8, 0x29, 0xab, 0xee, 0xba, 0xea, 0x55, 0xab, 0x52, 0xaa, 
0x94, 0x2a, 0xa5, 0xca, 0xdd, 0xea, 0x56, 0xdf, 0xea, 0x92, 0xe9, 0xd0, 0x96, 0xfe, 0xd4, 0xa7, 
0xa4, 0x92, 0xca, 0x6e, 0xb7, 0xdb, 0xed, 0x76, 0xa9, 0x9c, 0x73, 0x4e, 0x8e, 0xa0, 0x74, 0x7a, 
0xbb, 0xdd, 0x6e, 0xb7, 0xdb, 0x75, 0x56, 0x49, 0x65, 0xb7, 0xdb, 0xed, 0x76, 0x9d, 0x74, 0xce, 
0xb9, 0xda, 0xd5, 0xae, 0x76, 0xb5, 0x4b, 0xa7, 0xd3, 0xe9, 0x74, 0x3a, 0x34, 0x01
};

const uint8_t PROGMEM heli_14_00_mask[] = {
0x25, 0x17, 0xa0, 0xa3, 0x74, 0x3a, 0xa8, 0x29, 0xab, 0x6e, 0x57, 0x49, 0x65, 0xd3, 0xe9, 0x74, 
0x3a, 0x9d, 0xde, 0xae, 0xd3, 0xa1, 0x2d, 0xfd, 0xa9, 0x4f, 0x49, 0x25, 0x95, 0xdd, 0x6e, 0xb7, 
0xdb, 0xed, 0x52, 0x39, 0xe7, 0x9c, 0x1c, 0x41, 0xe9, 0xf4, 0x76, 0xbb, 0xdd, 0x6e, 0xb7, 0xeb, 
0xac, 0x92, 0xca, 0x6e, 0xb7, 0xdb, 0xed, 0x3a, 0xe9, 0x9c, 0x73, 0xb5, 0xab, 0x5d, 0xed, 0x6a, 
0x97, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0x68, 0x02
};

const uint8_t PROGMEM heli_14_01[] = {
0x25, 0x17, 0x40, 0x29, 0x65, 0x83, 0x34, 0x01
};

const uint8_t PROGMEM heli_14_02[] = {
0x25, 0x17, 0xa8, 0xd2, 0xe9, 0x7c, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xeb, 0x74, 0x3a, 0x9d, 0x4e, 
0xe7, 0xd3, 0x41, 0xd1, 0xf9, 0x98, 0x83, 0x30, 0x01
};

const uint8_t PROGMEM heli_14_03[] = {
0x25, 0x17, 0xa8, 0xd2, 0xe9, 0x7c, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xeb, 0x74, 0x3a, 0x9d, 0x4e, 
0xe7, 0xd3, 0xe9, 0x7c, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0xe0, 0xc9, 0x74, 0x3a, 0x9d, 0x4e, 
0xa7, 0xf3, 0xe9, 0x74, 0x65, 0x83, 0x34, 0x01
};

const uint8_t PROGMEM heli_14_04[] = {
0x25, 0x17, 0x60, 0xa5, 0x74, 0x3e, 0x9d, 0x4e, 0xa7, 0xd3, 0xe9, 0x74, 0xf0, 0x64, 0x3a, 0x9d, 
0x4e, 0xa7, 0xd3, 0x95, 0xad, 0x64, 0x3a, 0xae, 0x20, 0x4c
};

const uint8_t PROGMEM heli_15_00[] = {
0x25, 0x17, 0xd0, 0x95, 0x4e, 0xa7, 0xd3, 0xa1, 0x2f, 0x1d, 0x44, 0xf5, 0x57, 0xaf, 0xfe, 0xd4, 
0xa7, 0x54, 0x29, 0x55, 0x4a, 0xb5, 0xfa, 0x94, 0xaa, 0x5d, 0x45, 0x1a, 0xde, 0xb6, 0xea, 0xb6, 
0xdb, 0x75, 0x3a, 0x9d, 0xdd, 0x6e, 0x97, 0x4a, 0x2a, 0x39, 0x02, 0xd3, 0xe9, 0x74, 0x7a, 0xbb, 
0xdd, 0x6e, 0xd7, 0xdb, 0xed, 0x76, 0xbb, 0x74, 0xce, 0xb9, 0xda, 0xd5, 0xae, 0x76, 0x95, 0x4c, 
0x6f, 0xb7, 0xdb, 0x74, 0x3a, 0xb4, 0x01
};

const uint8_t PROGMEM heli_15_00_mask[] = {
0x25, 0x17, 0xd0, 0x95, 0x4e, 0xa7, 0xd3, 0xa1, 0x2f, 0x1d, 0x44, 0xf5, 0xe7, 0xd6, 0xdb, 0x75, 
0x3a, 0x9d, 0x5e, 0xa7, 0xa3, 0x0d, 0x6f, 0x5b, 0x75, 0xdb, 0xed, 0x3a, 0x9d, 0xce, 0x6e, 0xb7, 
0x4b, 0x25, 0x95, 0x1c, 0x81, 0xe9, 0x74, 0x3a, 0xbd, 0xdd, 0x6e, 0xb7, 0xeb, 0xed, 0x76, 0xbb, 
0x5d, 0x3a, 0xe7, 0x5c, 0xed, 0x6a, 0x57, 0xbb, 0x4a, 0xa6, 0xb7, 0xdb, 0x6d, 0x3a, 0x1d, 0xda, 
0x00
};

const uint8_t PROGMEM heli_15_01[] = {
0x25, 0x17, 0xc0, 0x25, 0x65, 0x83, 0x3b, 0x01
};

const uint8_t PROGMEM heli_15_02[] = {
0x25, 0x17, 0x28, 0xd3, 0xe9, 0x7c, 0x3a, 0x9d, 0x4e, 0xe7, 0xd3, 0xe9, 0x74, 0x3a, 0x9f, 0x4e, 
0xa7, 0x83, 0x9b, 0xf3, 0x11, 0xe6, 0x83, 0x37, 0x01
};

const uint8_t PROGMEM heli_15_03[] = {
0x25, 0x17, 0x28, 0xd3, 0xe9, 0x7c, 0x3a, 0x9d, 0x4e, 0xe7, 0xd3, 0xe9, 0x74, 0x3a, 0x9f, 0x4e, 
0xa7, 0xd3, 0xeb, 0x74, 0x3a, 0x1d, 0x7c, 0x99, 0x4e, 0xa7, 0xd3, 0xf9, 0x74, 0x3a, 0x9d, 0xce, 
0xa7, 0x2b, 0x39, 0xdc, 0x09
};

const uint8_t PROGMEM heli_15_04[] = {
0x25, 0x17, 0x60, 0xa3, 0x74, 0x7a, 0x9d, 0x4e, 0xa7, 0x83, 0x2f, 0xd3, 0xe9, 0x74, 0x3a, 0x9f, 
0x4e, 0xa7, 0x2b, 0xd9, 0xc9, 0x74, 0x2a, 0x95, 0x0b, 0xde, 0x04
};


const uint8_t PROGMEM heli_16_00[] = {
0x25, 0x17, 0xd0, 0x94, 0x4e, 0x67, 0xd3, 0xe9, 0x7c, 0x3a, 0x9d, 0x0e, 0x4d, 0xe9, 0x74, 0x3a, 
0x38, 0xe9, 0x57, 0xbf, 0xfa, 0x7f, 0xd5, 0xab, 0xdb, 0x95, 0x52, 0xa5, 0x54, 0x29, 0xe5, 0x6c, 
0x6c, 0xe9, 0xf0, 0xb7, 0x6a, 0x75, 0xdb, 0x75, 0x3a, 0x9d, 0x4e, 0xa7, 0xb3, 0xdb, 0xed, 0x78, 
0x4c, 0xa7, 0xd3, 0xe9, 0xed, 0x76, 0xbb, 0xde, 0x6e, 0xb7, 0x4b, 0xe7, 0x9c, 0xab, 0x5d, 0xed, 
0x7a, 0x75, 0xab, 0xcb, 0x6d, 0xb7, 0xdb, 0xed, 0x76, 0x9b, 0x4e, 0x47, 0x0f
};

const uint8_t PROGMEM heli_16_00_mask[] = {
0x25, 0x17, 0xd0, 0x94, 0x4e, 0x67, 0xb7, 0xdb, 0x75, 0x3a, 0x9d, 0x0e, 0x4d, 0xe9, 0x74, 0x3a, 
0x38, 0xe9, 0x57, 0xa7, 0x94, 0x5d, 0xa7, 0xd7, 0xe9, 0x74, 0x7a, 0xda, 0x74, 0xf8, 0x5b, 0xb5, 
0xba, 0xed, 0x3a, 0x9d, 0x4e, 0xa7, 0xd3, 0xd9, 0xed, 0x76, 0x3c, 0xa6, 0xd3, 0xe9, 0xf4, 0x76, 
0xbb, 0x5d, 0x6f, 0xb7, 0xdb, 0xa5, 0x73, 0xce, 0xd5, 0xae, 0x76, 0xbd, 0xba, 0xd5, 0xe5, 0xb6, 
0xdb, 0xed, 0x76, 0xbb, 0x4d, 0xa7, 0xa3, 0x07
};

const uint8_t PROGMEM heli_16_01[] = {
0x25, 0x17, 0x40, 0x2a, 0x65, 0x83, 0x32, 0x01
};

const uint8_t PROGMEM heli_16_02[] = {
0x25, 0x17, 0x30, 0x95, 0x4e, 0xa7, 0xd7, 0xe9, 0xf4, 0x3a, 0x9d, 0x5e, 0xa7, 0xd3, 0xf9, 0x74, 
0x90, 0x73, 0x3e, 0xc2, 0xe0, 0xcb, 0x34
};

const uint8_t PROGMEM heli_16_03[] = {
0x25, 0x17, 0x30, 0x95, 0x4e, 0xa7, 0xd7, 0xe9, 0xf4, 0x3a, 0x9d, 0x5e, 0xa7, 0xd3, 0xf9, 0x74, 
0x3a, 0x9d, 0x4f, 0xa7, 0xd3, 0xc1, 0x93, 0xe9, 0x74, 0x7a, 0x9d, 0x4e, 0xaf, 0xd3, 0xe9, 0x18, 
0xb3, 0x41, 0x99
};

const uint8_t PROGMEM heli_16_04[] = {
0x25, 0x17, 0x60, 0xa9, 0x74, 0x3e, 0x9d, 0x4e, 0x07, 0x4f, 0xa6, 0xd3, 0xe9, 0x75, 0x3a, 0xbd, 
0x4e, 0x57, 0xb2, 0x23, 0x0c, 0xbe, 0x4c, 0x03
};

const uint8_t PROGMEM heli_17_00[] = {
0x25, 0x17, 0xd0, 0x94, 0x4e, 0x67, 0xd3, 0xe9, 0x7c, 0x3a, 0x1d, 0xda, 0x82, 0xa3, 0x7e, 0xa5, 
0x5a, 0xfd, 0xbf, 0xba, 0x5d, 0x29, 0x55, 0x4a, 0x49, 0xe7, 0xe4, 0x58, 0x0a, 0x4d, 0x69, 0xa5, 
0xca, 0x5d, 0xe8, 0x4c, 0x87, 0xbf, 0x74, 0x3a, 0xbd, 0xdd, 0x6e, 0x95, 0xdd, 0xae, 0x77, 0xb5, 
0xab, 0x9d, 0x54, 0x52, 0xdd, 0xea, 0x5f, 0xf5, 0xaa, 0x94, 0x92, 0x4a, 0x3a, 0xe7, 0xa4, 0x92, 
0x4a, 0x2a, 0xb9, 0x54, 0x52, 0xc9, 0x6d, 0xb4
};

const uint8_t PROGMEM heli_17_00_mask[] = {
0x25, 0x17, 0xd0, 0x94, 0x4e, 0x67, 0xb7, 0xdb, 0x75, 0x3a, 0x1d, 0xda, 0x82, 0xa3, 0x7e, 0x65, 
0x95, 0x5d, 0xaf, 0xd3, 0xe9, 0x75, 0xf8, 0x0a, 0x4d, 0x69, 0xa5, 0xca, 0x5d, 0xe8, 0x4c, 0x87, 
0xbf, 0x74, 0x3a, 0xbd, 0xdd, 0x6e, 0x95, 0xdd, 0xae, 0x77, 0xb5, 0xab, 0x9d, 0x54, 0x52, 0xdd, 
0xea, 0x5f, 0xf5, 0xaa, 0x94, 0x92, 0x4a, 0x3a, 0xe7, 0xa4, 0x92, 0x4a, 0x2a, 0xb9, 0x54, 0x52, 
0xc9, 0x6d, 0xb4
};

const uint8_t PROGMEM heli_17_01[] = {
0x25, 0x17, 0xc0, 0x2a, 0x65, 0x83, 0x31, 0x01
};

const uint8_t PROGMEM heli_17_02[] = {
0x25, 0x17, 0x10, 0x95, 0x4e, 0xe7, 0xd3, 0xe9, 0x75, 0x3a, 0x9f, 0x4e, 0xaf, 0xd3, 0xf9, 0x74, 
0x3a, 0xd8, 0x38, 0x1f, 0x0c, 0x9a, 0x4f, 0x02
};

const uint8_t PROGMEM heli_17_03[] = {
0x25, 0x17, 0x10, 0x95, 0x4e, 0xe7, 0xd3, 0xe9, 0x75, 0x3a, 0x9f, 0x4e, 0xaf, 0xd3, 0xf9, 0x74, 
0x7a, 0x9d, 0x0e, 0xbe, 0x4c, 0xa7, 0xd7, 0xe9, 0x7c, 0x3a, 0xbd, 0x4e, 0xe7, 0xd3, 0xe9, 0x88, 
0xb2, 0xc1, 0x98
};

const uint8_t PROGMEM heli_17_04[] = {
0x25, 0x17, 0xa0, 0xa9, 0x74, 0x3a, 0xf8, 0x32, 0x9d, 0x5e, 0xa7, 0xf3, 0xe9, 0xf4, 0x3a, 0x5d, 
0xd9, 0x4a, 0xa6, 0x83, 0x33, 0xf3, 0x49
};


const uint8_t PROGMEM heli_18_00[] = {
0x25, 0x17, 0xd0, 0x9a, 0x0e, 0x4d, 0xe9, 0x20, 0xb3, 0xd4, 0x57, 0xb9, 0x55, 0x76, 0x57, 0x5b, 
0x25, 0x95, 0x74, 0xaa, 0x14, 0xca, 0x72, 0xad, 0x3e, 0x1d, 0x5d, 0x3a, 0xbb, 0x1d, 0xef, 0xe9, 
0xf4, 0x76, 0xbb, 0x55, 0x52, 0x49, 0xe7, 0x6a, 0x57, 0xbb, 0x52, 0x4a, 0x2a, 0xbb, 0xea, 0x55, 
0x29, 0x25, 0x95, 0x54, 0x52, 0xc9, 0xed, 0x36, 0x1d, 0x3a, 0x01
};

const uint8_t PROGMEM heli_18_00_mask[] = {
0x25, 0x17, 0xd0, 0x9a, 0x0e, 0x4d, 0xe9, 0x20, 0xb3, 0xd4, 0x57, 0xb9, 0xf9, 0xe2, 0x0f, 0x6d, 
0xb9, 0x56, 0x9f, 0x8e, 0x2e, 0x9d, 0xdd, 0x8e, 0xf7, 0x74, 0x7a, 0xbb, 0xdd, 0x2a, 0xa9, 0xa4, 
0x73, 0xb5, 0xab, 0x5d, 0x29, 0x25, 0x95, 0x5d, 0xf5, 0xaa, 0x94, 0x92, 0x4a, 0x2a, 0xa9, 0xe4, 
0x76, 0x9b, 0x0e, 0x9d
};

const uint8_t PROGMEM heli_18_01[] = {
0x25, 0x17, 0x40, 0x0e, 0x65, 0x83, 0x6a, 0x01
};

const uint8_t PROGMEM heli_18_02[] = {
0x25, 0x17, 0x10, 0x94, 0xce, 0xa7, 0xd3, 0xeb, 0x74, 0x3e, 0x9d, 0x5e, 0xa7, 0xf3, 0xe9, 0xf4, 
0x70, 0x6c, 0x3e, 0x18, 0x34, 0x1f, 0xf6, 0x00
};

const uint8_t PROGMEM heli_18_03[] = {
0x25, 0x17, 0x10, 0x94, 0xce, 0xa7, 0xd3, 0xeb, 0x74, 0x3e, 0x9d, 0x5e, 0xa7, 0xf3, 0xe9, 0xf4, 
0x3a, 0x1d, 0x7c, 0x99, 0x4e, 0xaf, 0xd3, 0xf9, 0x74, 0x7a, 0x5d, 0xc9, 0x7c, 0x3a, 0xbd, 0x4e, 
0x07, 0x83, 0x02
};

const uint8_t PROGMEM heli_18_04[] = {
0x25, 0x17, 0x10, 0x94, 0xce, 0xa7, 0xd3, 0xeb, 0x74, 0x3e, 0x9d, 0x5e, 0xa7, 0xf3, 0xe9, 0xf4, 
0x3a, 0x1d, 0x7c, 0x99, 0x4e, 0xaf, 0xd3, 0x9d, 0xec, 0x5c, 0x7a, 0x9d, 0xce, 0xa7, 0xd3, 0xeb, 
0x74, 0x30, 0x5f, 0x3e, 0xec, 0x01
};

const uint8_t PROGMEM heli_19_00[] = {
0x25, 0x17, 0xa0, 0x66, 0x55, 0xd7, 0x55, 0xbb, 0x52, 0x52, 0x49, 0x27, 0xd5, 0xe9, 0xa5, 0x53, 
0x72, 0xa8, 0x6c, 0xbb, 0xdd, 0x6e, 0xa3, 0x4b, 0x4b, 0x25, 0x55, 0x6f, 0x83, 0x83, 0x00
};

const uint8_t PROGMEM heli_19_00_mask[] = {
0x25, 0x17, 0xa0, 0x66, 0x55, 0xbb, 0x4a, 0x47, 0x9f, 0x5e, 0x3a, 0x25, 0x87, 0xca, 0xb6, 0xdb, 
0xed, 0x36, 0xba, 0xb4, 0x54, 0x52, 0xf5, 0x36, 0x38, 0x08
};

const uint8_t PROGMEM heli_19_02[] = {
0x25, 0x17, 0x30, 0x95, 0x4e, 0xaf, 0xd3, 0xf9, 0x74, 0x7a, 0x9d, 0xce, 0xa7, 0xd3, 0xeb, 0x74, 
0xe0, 0xbb, 0x00
};

const uint8_t PROGMEM heli_19_03[] = {
0x25, 0x17, 0x30, 0x95, 0x4e, 0xaf, 0xd3, 0xf9, 0x74, 0x7a, 0x9d, 0xce, 0xa7, 0xd3, 0xeb, 0x74, 
0xf0, 0x65, 0x3a, 0xbd, 0x4e, 0xe7, 0xd3, 0xe9, 0x75, 0x3a, 0x9f, 0x4e, 0xaf, 0xd3, 0xc1, 0xa4
};

const uint8_t PROGMEM heli_19_04[] = {
0x25, 0x17, 0xe0, 0xf3, 0x74, 0x7a, 0x9d, 0xce, 0xa7, 0xd3, 0xeb, 0x74, 0x3e, 0x9d, 0x5e, 0xa7, 
0x83, 0x49, 0x01
};

const uint8_t PROGMEM heli_20_00[] = {
0x25, 0x17, 0xa0, 0xab, 0x74, 0x3a, 0xb4, 0x25, 0x95, 0x54, 0x90, 0x91, 0x72, 0xdb, 0x6c, 0x3a, 
0xd5, 0x2b, 0xe7, 0xe4, 0x18, 0xdb, 0x6e, 0x77, 0x95, 0x4c, 0x3a, 0xe7, 0x82, 0x86, 0xd2, 0xdb, 
0x4f, 0xfd, 0xdb, 0xed, 0xa7, 0x96, 0x4a, 0x2a, 0xa9, 0x6a, 0xbb, 0xdc, 0x2e, 0x95, 0xdc, 0x6e, 
0xb7, 0xa1, 0x11
};

const uint8_t PROGMEM heli_20_00_mask[] = {
0x25, 0x17, 0xa0, 0xab, 0x74, 0x3a, 0xb4, 0x25, 0x95, 0x54, 0x90, 0x91, 0x72, 0xce, 0x39, 0x25, 
0x95, 0x1c, 0x8b, 0xdb, 0xed, 0xae, 0x92, 0x49, 0xe7, 0x5c, 0xd0, 0x50, 0x7a, 0xfb, 0xa9, 0x7f, 
0xbb, 0xfd, 0xd4, 0x52, 0x49, 0x25, 0x55, 0x6d, 0x97, 0xdb, 0xa5, 0x92, 0xdb, 0xed, 0x36, 0x34, 
0x02
};

const uint8_t PROGMEM heli_20_01[] = {
0x25, 0x17, 0xe0, 0xc2, 0x6c, 0xe0, 0x9e, 0x00
};

const uint8_t PROGMEM heli_20_02[] = {
0x25, 0x17, 0xa0, 0xa5, 0x74, 0x3a, 0x14, 0xe6, 0x63, 0x0e, 0x69, 0xe9, 0xec, 0x36, 0x9d, 0x4d, 
0x67, 0xb7, 0xe9, 0x6c, 0x3a, 0xbb, 0x4d, 0xa7, 0x83, 0x86, 0x82, 0x4e, 0x01
};

const uint8_t PROGMEM heli_20_03[] = {
0x25, 0x17, 0xa0, 0xa5, 0x74, 0x76, 0x9b, 0xce, 0xa6, 0xb3, 0xdb, 0x74, 0x36, 0x9d, 0xdd, 0xa6, 
0xb3, 0x9d, 0xab, 0x10, 0x96, 0xce, 0x6e, 0xd3, 0xd9, 0x74, 0x76, 0x9b, 0xce, 0xa6, 0xb3, 0xdb, 
0x74, 0x3a, 0x68, 0x1d
};

const uint8_t PROGMEM heli_20_04[] = {
0x25, 0x17, 0xa0, 0xa5, 0x74, 0x76, 0x9b, 0xce, 0xa6, 0xb3, 0xdb, 0x74, 0x36, 0x9d, 0x55, 0x32, 
0x9d, 0x4d, 0x56, 0xb0, 0x65, 0xd0, 0x29
};


const uint8_t PROGMEM hostage_01[] = {
0x09, 0x0f, 0x5c, 0x3a, 0x77, 0x6d, 0x2f, 0xad, 0x4a, 0xa9, 0x54, 0x2a, 0x3d, 0xe5, 0x76, 0x3b, 
0xdb, 0x76, 0xab, 0xec, 0x76, 0x09
};

const uint8_t PROGMEM hostage_02[] = {
0x09, 0x0f, 0x64, 0x3a, 0x75, 0x29, 0x79, 0x69, 0x55, 0x4a, 0xe5, 0xf3, 0x31, 0x2a, 0xa9, 0x64, 
0x74, 0xe9, 0xf4, 0x76, 0xbb, 0x05
};

const uint8_t PROGMEM hostage_03[] = {
0x09, 0x0f, 0x58, 0x7b, 0x55, 0xb6, 0xd2, 0xce, 0xc9, 0x30, 0xa5, 0xa4, 0x92, 0x4a, 0x6e, 0x67, 
0x05
};

const uint8_t PROGMEM hostage_04[] = {
0x09, 0x0f, 0xd8, 0xd2, 0xfd, 0x45, 0x94, 0x76, 0x4e, 0x8e, 0xa8, 0xed, 0x56, 0x49, 0x25, 0x15, 
0x29
};

const uint8_t PROGMEM hostage_05[] = {
0x09, 0x0f, 0xbc, 0x93, 0xb5, 0xce, 0x1d, 0x57, 0xe7, 0xdc, 0x7a, 0x1d, 0x65, 0x3a, 0xa9, 0xe4, 
0x56, 0xe9, 0x74, 0x64
};

const uint8_t PROGMEM hostage_06[] = {
0x09, 0x0f, 0x28, 0xb3, 0x4a, 0xf1, 0x75, 0xce, 0xad, 0xd7, 0x51, 0xa6, 0x93, 0x4a, 0x6e, 0x95, 
0x4e, 0x47, 0x06
};

const uint8_t PROGMEM dormitory_01[] = {
0x1d, 0x0f, 0xe4, 0xb6, 0x72, 0xdb, 0x4e, 0x5d, 0xae, 0xff, 0xaa, 0x5b, 0x75, 0xd5, 0x6d, 0xab, 
0x7a, 0x5b, 0xaa, 0x2a, 0x55, 0x95, 0xac, 0x64, 0x25, 0x2b, 0xd9, 0xba, 0xaa, 0x6a, 0xd7, 0x55, 
0xaa, 0xd5, 0x57, 0xa9, 0x5e, 0x5d, 0xb2, 0x73, 0xeb, 0x4a, 0x4e, 0x24, 0xa9, 0xa4, 0xaa, 0x4a, 
0x49, 0x57, 0x39, 0xe7, 0x2a, 0xa9, 0xca, 0x75, 0xea, 0x76, 0xe9, 0x74, 0xed, 0x6a, 0x57, 0xbb, 
0xec, 0xda, 0x29, 0xa9, 0xaa, 0x52, 0xd2, 0x55, 0x4e, 0xaa, 0xaa, 0x94, 0xa4, 0x92, 0x54
};

const uint8_t PROGMEM dormitory_01_mask[] = {
0x1d, 0x0f, 0xe4, 0x56, 0x39, 0xe7, 0x9c, 0x92, 0x4a, 0x6e, 0xb7, 0xe9, 0xd0, 0x9a, 0x4e, 0x6f, 
0xb7, 0x4a, 0x2a, 0xe9, 0x9c, 0x73, 0x52, 0xc9, 0x89, 0xa4, 0x92, 0x4a, 0x2a, 0xa9, 0xa4, 0x92, 
0x4a, 0x2a, 0xa9, 0xa4, 0x92, 0x4a, 0x2a, 0xa9, 0xa4, 0x92, 0x4a, 0x2a, 0xa9, 0xa4, 0x92, 0x4a, 
0x2a, 0xa9, 0xa4, 0x92, 0x4a, 0x2a, 0xa9, 0xa4, 0x92, 0x4a, 0x2a, 0x49, 0x05
};

const uint8_t PROGMEM dormitory_02[] = {
0x1d, 0x0f, 0xe4, 0xb6, 0x72, 0xdb, 0x4e, 0x5d, 0xae, 0xff, 0xaa, 0x5b, 0x75, 0x75, 0xad, 0xba, 
0xab, 0x5e, 0x55, 0xb2, 0x92, 0x95, 0xac, 0x64, 0x25, 0xd3, 0xed, 0xba, 0x52, 0xb5, 0xeb, 0xea, 
0x5b, 0x7d, 0x95, 0xea, 0xd5, 0x25, 0x3b, 0xb7, 0xae, 0xe4, 0x44, 0x92, 0x4a, 0xaa, 0xaa, 0x94, 
0xac, 0xa4, 0x52, 0xa5, 0xb6, 0xa9, 0x74, 0xe5, 0x2e, 0xd7, 0x91, 0x25, 0xab, 0x3b, 0x17, 0x55, 
0xfa, 0xf2, 0xab, 0xd4, 0xad, 0x64, 0x25, 0x55, 0x55, 0x4a, 0x52, 0x49, 0x2a
};

const uint8_t PROGMEM dormitory_02_mask[] = {
0x1d, 0x0f, 0xe4, 0x56, 0x39, 0xe7, 0x9c, 0x92, 0x4a, 0x6e, 0xb7, 0xe9, 0xd0, 0x9a, 0x4e, 0x6f, 
0xb7, 0x4a, 0x2a, 0xe9, 0x9c, 0x73, 0x52, 0xc9, 0x89, 0xa4, 0x92, 0x4a, 0x2a, 0xa9, 0x64, 0x25, 
0x95, 0x54, 0x52, 0x49, 0x25, 0x2b, 0x59, 0xc9, 0x4a, 0x2a, 0xa9, 0xe4, 0x76, 0xab, 0xa4, 0x92, 
0x95, 0xdc, 0x2a, 0xa9, 0x64, 0x25, 0x95, 0x54, 0x52, 0x49, 0x25, 0xa9, 0x00
};

const uint8_t* const helicopter[] = { 
heli_01_00, heli_01_00_mask, heli_01_01, heli_01_02, heli_01_03, heli_01_04,
heli_02_00, heli_02_00_mask, heli_02_01, heli_02_02, heli_02_03, heli_02_04,
heli_03_00, heli_03_00_mask, heli_03_01, heli_03_02, heli_03_03, heli_03_04,
heli_04_00, heli_04_00_mask, heli_04_01, heli_04_02, heli_04_03, heli_04_04,
heli_05_00, heli_05_00_mask, heli_05_01, heli_05_02, heli_05_03, heli_05_04,
heli_06_00, heli_06_00_mask, heli_06_01, heli_06_02, heli_06_03, heli_06_04,
heli_07_00, heli_07_00_mask, heli_07_01, heli_07_02, heli_07_03, heli_07_04,
heli_08_00, heli_08_00_mask, heli_08_01, heli_08_02, heli_08_03, heli_08_04,
heli_09_00, heli_09_00_mask, heli_blank, heli_09_02, heli_09_03, heli_09_04, 
heli_10_00, heli_10_00_mask, heli_blank, heli_10_02, heli_10_03, heli_10_04, 
heli_11_00, heli_11_00_mask, heli_blank, heli_11_02, heli_11_03, heli_11_04,
heli_12_00, heli_12_00_mask, heli_blank, heli_12_02, heli_12_03, heli_12_04,
heli_13_00, heli_13_00_mask, heli_13_01, heli_13_02, heli_13_03, heli_13_04,
heli_14_00, heli_14_00_mask, heli_14_01, heli_14_02, heli_14_03, heli_14_04,
heli_15_00, heli_15_00_mask, heli_15_01, heli_15_02, heli_15_03, heli_15_04,
heli_16_00, heli_16_00_mask, heli_16_01, heli_16_02, heli_16_03, heli_16_04,
heli_17_00, heli_17_00_mask, heli_17_01, heli_17_02, heli_17_03, heli_17_04,
heli_18_00, heli_18_00_mask, heli_18_01, heli_18_02, heli_18_03, heli_18_04,
heli_19_00, heli_19_00_mask, heli_blank, heli_19_02, heli_19_03, heli_19_04,
heli_20_00, heli_20_00_mask, heli_20_01, heli_20_02, heli_20_03, heli_20_04,
};

const uint8_t* const hostage_images[] = { 
hostage_01, hostage_02, hostage_03, hostage_04, hostage_05, hostage_06 
};