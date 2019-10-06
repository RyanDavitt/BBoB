// Palette table
const unsigned int Robot_Palette[] PROGMEM = {
             0x0000,  //Color index  0 (  0-  0-  0)occurs 3625 times
             0x101F,  //Color index  1 ( 16-  0-248)occurs 172 times
             0xFFFF,  //Color index  2 (248-252-248)occurs 780 times
             0x5AEB,  //Color index  3 ( 88- 92- 88)occurs 456 times
             0xA040,  //Color index  4 (160-  8-  0)occurs 19 times
             0xFB60   //Color index  5 (248-108-  0)occurs 68 times
             };

const unsigned int Robot_1[] PROGMEM = {
             0x1010, //Width, height
             0x0C00, //13 x color 0
             0x0201, //3 x color 1
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0C00, //13 x color 0
             0x0202  //3 x color 2
              };

const unsigned int Robot_10[] PROGMEM = {
             0x1010, //Width, height
             0x0C00, //13 x color 0
             0x0201, //3 x color 1
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0500, //6 x color 0
             0x0003, //1 x color 3
             0x0500, //6 x color 0
             0x0202, //3 x color 2
             0x0400, //5 x color 0
             0x0103, //2 x color 3
             0x0600, //7 x color 0
             0x0102, //2 x color 2
             0x0400, //5 x color 0
             0x0103, //2 x color 3
             0x0600, //7 x color 0
             0x0102, //2 x color 2
             0x0300, //4 x color 0
             0x0203, //3 x color 3
             0x0500, //6 x color 0
             0x0202, //3 x color 2
             0x0300, //4 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0103, //2 x color 3
             0x0004, //1 x color 4
             0x0300, //4 x color 0
             0x0202, //3 x color 2
             0x0200, //3 x color 0
             0x0103, //2 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0105, //2 x color 5
             0x0300, //4 x color 0
             0x0202, //3 x color 2
             0x0200, //3 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0003, //1 x color 3
             0x0105, //2 x color 5
             0x0400, //5 x color 0
             0x0102, //2 x color 2
             0x0100, //2 x color 0
             0x0603, //7 x color 3
             0x0400, //5 x color 0
             0x0102, //2 x color 2
             0x0100, //2 x color 0
             0x0601, //7 x color 1
             0x0300, //4 x color 0
             0x0202, //3 x color 2
             0x0200, //3 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0400, //5 x color 0
             0x0202  //3 x color 2
              };

const unsigned int Robot_11[] PROGMEM = {
             0x1010, //Width, height
             0x0C00, //13 x color 0
             0x0201, //3 x color 1
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0600, //7 x color 0
             0x0003, //1 x color 3
             0x0400, //5 x color 0
             0x0202, //3 x color 2
             0x0500, //6 x color 0
             0x0103, //2 x color 3
             0x0500, //6 x color 0
             0x0102, //2 x color 2
             0x0500, //6 x color 0
             0x0103, //2 x color 3
             0x0500, //6 x color 0
             0x0102, //2 x color 2
             0x0400, //5 x color 0
             0x0203, //3 x color 3
             0x0400, //5 x color 0
             0x0202, //3 x color 2
             0x0400, //5 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0103, //2 x color 3
             0x0004, //1 x color 4
             0x0200, //3 x color 0
             0x0202, //3 x color 2
             0x0300, //4 x color 0
             0x0103, //2 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0105, //2 x color 5
             0x0200, //3 x color 0
             0x0202, //3 x color 2
             0x0300, //4 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0003, //1 x color 3
             0x0105, //2 x color 5
             0x0300, //4 x color 0
             0x0102, //2 x color 2
             0x0200, //3 x color 0
             0x0603, //7 x color 3
             0x0300, //4 x color 0
             0x0102, //2 x color 2
             0x0200, //3 x color 0
             0x0601, //7 x color 1
             0x0200, //3 x color 0
             0x0202, //3 x color 2
             0x0300, //4 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0300, //4 x color 0
             0x0202  //3 x color 2
              };

const unsigned int Robot_12[] PROGMEM = {
             0x1010, //Width, height
             0x0C00, //13 x color 0
             0x0201, //3 x color 1
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0700, //8 x color 0
             0x0003, //1 x color 3
             0x0300, //4 x color 0
             0x0202, //3 x color 2
             0x0600, //7 x color 0
             0x0103, //2 x color 3
             0x0400, //5 x color 0
             0x0102, //2 x color 2
             0x0600, //7 x color 0
             0x0103, //2 x color 3
             0x0400, //5 x color 0
             0x0102, //2 x color 2
             0x0500, //6 x color 0
             0x0203, //3 x color 3
             0x0300, //4 x color 0
             0x0202, //3 x color 2
             0x0500, //6 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0103, //2 x color 3
             0x0004, //1 x color 4
             0x0100, //2 x color 0
             0x0202, //3 x color 2
             0x0400, //5 x color 0
             0x0103, //2 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0105, //2 x color 5
             0x0100, //2 x color 0
             0x0202, //3 x color 2
             0x0400, //5 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0003, //1 x color 3
             0x0105, //2 x color 5
             0x0200, //3 x color 0
             0x0102, //2 x color 2
             0x0300, //4 x color 0
             0x0603, //7 x color 3
             0x0200, //3 x color 0
             0x0102, //2 x color 2
             0x0300, //4 x color 0
             0x0601, //7 x color 1
             0x0100, //2 x color 0
             0x0202, //3 x color 2
             0x0400, //5 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0200, //3 x color 0
             0x0202  //3 x color 2
              };

const unsigned int Robot_13[] PROGMEM = {
             0x1010, //Width, height
             0x0C00, //13 x color 0
             0x0201, //3 x color 1
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0800, //9 x color 0
             0x0003, //1 x color 3
             0x0200, //3 x color 0
             0x0202, //3 x color 2
             0x0700, //8 x color 0
             0x0103, //2 x color 3
             0x0300, //4 x color 0
             0x0102, //2 x color 2
             0x0700, //8 x color 0
             0x0103, //2 x color 3
             0x0300, //4 x color 0
             0x0102, //2 x color 2
             0x0600, //7 x color 0
             0x0203, //3 x color 3
             0x0200, //3 x color 0
             0x0202, //3 x color 2
             0x0600, //7 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0103, //2 x color 3
             0x0004, //1 x color 4
             0x0000, //1 x color 0
             0x0202, //3 x color 2
             0x0500, //6 x color 0
             0x0103, //2 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0105, //2 x color 5
             0x0000, //1 x color 0
             0x0202, //3 x color 2
             0x0500, //6 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0003, //1 x color 3
             0x0105, //2 x color 5
             0x0100, //2 x color 0
             0x0102, //2 x color 2
             0x0400, //5 x color 0
             0x0603, //7 x color 3
             0x0100, //2 x color 0
             0x0102, //2 x color 2
             0x0400, //5 x color 0
             0x0601, //7 x color 1
             0x0000, //1 x color 0
             0x0202, //3 x color 2
             0x0500, //6 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0202  //3 x color 2
              };

const unsigned int Robot_14[] PROGMEM = {
             0x1010, //Width, height
             0x0C00, //13 x color 0
             0x0201, //3 x color 1
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0900, //10 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0202, //3 x color 2
             0x0800, //9 x color 0
             0x0103, //2 x color 3
             0x0200, //3 x color 0
             0x0102, //2 x color 2
             0x0800, //9 x color 0
             0x0103, //2 x color 3
             0x0200, //3 x color 0
             0x0102, //2 x color 2
             0x0700, //8 x color 0
             0x0203, //3 x color 3
             0x0100, //2 x color 0
             0x0202, //3 x color 2
             0x0700, //8 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0103, //2 x color 3
             0x0004, //1 x color 4
             0x0202, //3 x color 2
             0x0600, //7 x color 0
             0x0103, //2 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0105, //2 x color 5
             0x0202, //3 x color 2
             0x0600, //7 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0003, //1 x color 3
             0x0105, //2 x color 5
             0x0000, //1 x color 0
             0x0102, //2 x color 2
             0x0500, //6 x color 0
             0x0603, //7 x color 3
             0x0000, //1 x color 0
             0x0102, //2 x color 2
             0x0500, //6 x color 0
             0x0601, //7 x color 1
             0x0202, //3 x color 2
             0x0600, //7 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0202  //3 x color 2
              };

const unsigned int Robot_15[] PROGMEM = {
             0x1010, //Width, height
             0x0C00, //13 x color 0
             0x0201, //3 x color 1
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0900, //10 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0202, //3 x color 2
             0x0900, //10 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0202, //3 x color 2
             0x0900, //10 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0202, //3 x color 2
             0x0800, //9 x color 0
             0x0203, //3 x color 3
             0x0004, //1 x color 4
             0x0000, //1 x color 0
             0x0102, //2 x color 2
             0x0800, //9 x color 0
             0x0103, //2 x color 3
             0x0105, //2 x color 5
             0x0000, //1 x color 0
             0x0102, //2 x color 2
             0x0700, //8 x color 0
             0x0203, //3 x color 3
             0x0105, //2 x color 5
             0x0202, //3 x color 2
             0x0700, //8 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0203, //3 x color 3
             0x0202, //3 x color 2
             0x0600, //7 x color 0
             0x0103, //2 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0202, //3 x color 2
             0x0600, //7 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0003, //1 x color 3
             0x0200, //3 x color 0
             0x0102, //2 x color 2
             0x0500, //6 x color 0
             0x0603, //7 x color 3
             0x0000, //1 x color 0
             0x0102, //2 x color 2
             0x0500, //6 x color 0
             0x0601, //7 x color 1
             0x0202, //3 x color 2
             0x0600, //7 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0202  //3 x color 2
              };

const unsigned int Robot_16[] PROGMEM = {
             0x1010, //Width, height
             0x0C00, //13 x color 0
             0x0201, //3 x color 1
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0900, //10 x color 0
             0x0003, //1 x color 3
             0x0200, //3 x color 0
             0x0102, //2 x color 2
             0x0900, //10 x color 0
             0x0003, //1 x color 3
             0x0200, //3 x color 0
             0x0102, //2 x color 2
             0x0900, //10 x color 0
             0x0103, //2 x color 3
             0x0004, //1 x color 4
             0x0202, //3 x color 2
             0x0900, //10 x color 0
             0x0003, //1 x color 3
             0x0105, //2 x color 5
             0x0202, //3 x color 2
             0x0900, //10 x color 0
             0x0003, //1 x color 3
             0x0105, //2 x color 5
             0x0202, //3 x color 2
             0x0800, //9 x color 0
             0x0303, //4 x color 3
             0x0000, //1 x color 0
             0x0102, //2 x color 2
             0x0800, //9 x color 0
             0x0103, //2 x color 3
             0x0200, //3 x color 0
             0x0102, //2 x color 2
             0x0700, //8 x color 0
             0x0203, //3 x color 3
             0x0100, //2 x color 0
             0x0202, //3 x color 2
             0x0700, //8 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0202, //3 x color 2
             0x0600, //7 x color 0
             0x0103, //2 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0202, //3 x color 2
             0x0600, //7 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0003, //1 x color 3
             0x0200, //3 x color 0
             0x0102, //2 x color 2
             0x0500, //6 x color 0
             0x0603, //7 x color 3
             0x0000, //1 x color 0
             0x0102, //2 x color 2
             0x0500, //6 x color 0
             0x0601, //7 x color 1
             0x0202, //3 x color 2
             0x0600, //7 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0202  //3 x color 2
              };

const unsigned int Robot_17[] PROGMEM = {
             0x1010, //Width, height
             0x0C00, //13 x color 0
             0x0201, //3 x color 1
             0x0900, //10 x color 0
             0x0103, //2 x color 3
             0x0004, //1 x color 4
             0x0202, //3 x color 2
             0x0900, //10 x color 0
             0x0003, //1 x color 3
             0x0105, //2 x color 5
             0x0000, //1 x color 0
             0x0102, //2 x color 2
             0x0900, //10 x color 0
             0x0003, //1 x color 3
             0x0105, //2 x color 5
             0x0000, //1 x color 0
             0x0102, //2 x color 2
             0x0900, //10 x color 0
             0x0203, //3 x color 3
             0x0202, //3 x color 2
             0x0900, //10 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0202, //3 x color 2
             0x0900, //10 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0202, //3 x color 2
             0x0800, //9 x color 0
             0x0103, //2 x color 3
             0x0200, //3 x color 0
             0x0102, //2 x color 2
             0x0800, //9 x color 0
             0x0103, //2 x color 3
             0x0200, //3 x color 0
             0x0102, //2 x color 2
             0x0700, //8 x color 0
             0x0203, //3 x color 3
             0x0100, //2 x color 0
             0x0202, //3 x color 2
             0x0700, //8 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0202, //3 x color 2
             0x0600, //7 x color 0
             0x0103, //2 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0202, //3 x color 2
             0x0600, //7 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0003, //1 x color 3
             0x0200, //3 x color 0
             0x0102, //2 x color 2
             0x0500, //6 x color 0
             0x0603, //7 x color 3
             0x0000, //1 x color 0
             0x0102, //2 x color 2
             0x0500, //6 x color 0
             0x0601, //7 x color 1
             0x0202, //3 x color 2
             0x0600, //7 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0202  //3 x color 2
              };

const unsigned int Robot_18[] PROGMEM = {
             0x1010, //Width, height
             0x0C00, //13 x color 0
             0x0201, //3 x color 1
             0x0900, //10 x color 0
             0x0103, //2 x color 3
             0x0004, //1 x color 4
             0x0202, //3 x color 2
             0x0900, //10 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0105, //2 x color 5
             0x0102, //2 x color 2
             0x0900, //10 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0105, //2 x color 5
             0x0102, //2 x color 2
             0x0900, //10 x color 0
             0x0203, //3 x color 3
             0x0202, //3 x color 2
             0x0900, //10 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0202, //3 x color 2
             0x0900, //10 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0202, //3 x color 2
             0x0800, //9 x color 0
             0x0103, //2 x color 3
             0x0200, //3 x color 0
             0x0102, //2 x color 2
             0x0800, //9 x color 0
             0x0103, //2 x color 3
             0x0200, //3 x color 0
             0x0102, //2 x color 2
             0x0700, //8 x color 0
             0x0203, //3 x color 3
             0x0100, //2 x color 0
             0x0202, //3 x color 2
             0x0700, //8 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0202, //3 x color 2
             0x0600, //7 x color 0
             0x0103, //2 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0202, //3 x color 2
             0x0600, //7 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0003, //1 x color 3
             0x0200, //3 x color 0
             0x0102, //2 x color 2
             0x0500, //6 x color 0
             0x0603, //7 x color 3
             0x0000, //1 x color 0
             0x0102, //2 x color 2
             0x0500, //6 x color 0
             0x0601, //7 x color 1
             0x0202, //3 x color 2
             0x0600, //7 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0202  //3 x color 2
              };

const unsigned int Robot_19[] PROGMEM = {
             0x1010, //Width, height
             0x0C00, //13 x color 0
             0x0201, //3 x color 1
             0x0900, //10 x color 0
             0x0103, //2 x color 3
             0x0004, //1 x color 4
             0x0202, //3 x color 2
             0x0900, //10 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0005, //1 x color 5
             0x0102, //2 x color 2
             0x0900, //10 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0005, //1 x color 5
             0x0102, //2 x color 2
             0x0900, //10 x color 0
             0x0203, //3 x color 3
             0x0202, //3 x color 2
             0x0900, //10 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0202, //3 x color 2
             0x0900, //10 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0202, //3 x color 2
             0x0800, //9 x color 0
             0x0103, //2 x color 3
             0x0200, //3 x color 0
             0x0102, //2 x color 2
             0x0800, //9 x color 0
             0x0103, //2 x color 3
             0x0200, //3 x color 0
             0x0102, //2 x color 2
             0x0700, //8 x color 0
             0x0203, //3 x color 3
             0x0100, //2 x color 0
             0x0202, //3 x color 2
             0x0700, //8 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0202, //3 x color 2
             0x0600, //7 x color 0
             0x0103, //2 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0202, //3 x color 2
             0x0600, //7 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0003, //1 x color 3
             0x0200, //3 x color 0
             0x0102, //2 x color 2
             0x0500, //6 x color 0
             0x0603, //7 x color 3
             0x0000, //1 x color 0
             0x0102, //2 x color 2
             0x0500, //6 x color 0
             0x0601, //7 x color 1
             0x0202, //3 x color 2
             0x0600, //7 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0202  //3 x color 2
              };

const unsigned int Robot_2[] PROGMEM = {
             0x1010, //Width, height
             0x0C00, //13 x color 0
             0x0201, //3 x color 1
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0004, //1 x color 4
             0x0B00, //12 x color 0
             0x0202, //3 x color 2
             0x0005, //1 x color 5
             0x0B00, //12 x color 0
             0x0202, //3 x color 2
             0x0005, //1 x color 5
             0x0C00, //13 x color 0
             0x0102, //2 x color 2
             0x0003, //1 x color 3
             0x0C00, //13 x color 0
             0x0102, //2 x color 2
             0x0001, //1 x color 1
             0x0B00, //12 x color 0
             0x0202, //3 x color 2
             0x0C00, //13 x color 0
             0x0202  //3 x color 2
              };

const unsigned int Robot_20[] PROGMEM = {
             0x1010, //Width, height
             0x0C00, //13 x color 0
             0x0201, //3 x color 1
             0x0900, //10 x color 0
             0x0103, //2 x color 3
             0x0004, //1 x color 4
             0x0202, //3 x color 2
             0x0900, //10 x color 0
             0x0003, //1 x color 3
             0x0200, //3 x color 0
             0x0102, //2 x color 2
             0x0900, //10 x color 0
             0x0003, //1 x color 3
             0x0200, //3 x color 0
             0x0102, //2 x color 2
             0x0900, //10 x color 0
             0x0203, //3 x color 3
             0x0202, //3 x color 2
             0x0900, //10 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0202, //3 x color 2
             0x0900, //10 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0202, //3 x color 2
             0x0800, //9 x color 0
             0x0103, //2 x color 3
             0x0200, //3 x color 0
             0x0102, //2 x color 2
             0x0800, //9 x color 0
             0x0103, //2 x color 3
             0x0200, //3 x color 0
             0x0102, //2 x color 2
             0x0700, //8 x color 0
             0x0203, //3 x color 3
             0x0100, //2 x color 0
             0x0202, //3 x color 2
             0x0700, //8 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0202, //3 x color 2
             0x0600, //7 x color 0
             0x0103, //2 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0202, //3 x color 2
             0x0600, //7 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0003, //1 x color 3
             0x0200, //3 x color 0
             0x0102, //2 x color 2
             0x0500, //6 x color 0
             0x0603, //7 x color 3
             0x0000, //1 x color 0
             0x0102, //2 x color 2
             0x0500, //6 x color 0
             0x0601, //7 x color 1
             0x0202, //3 x color 2
             0x0600, //7 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0202  //3 x color 2
              };

const unsigned int Robot_3[] PROGMEM = {
             0x1010, //Width, height
             0x0C00, //13 x color 0
             0x0201, //3 x color 1
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0003, //1 x color 3
             0x0004, //1 x color 4
             0x0A00, //11 x color 0
             0x0202, //3 x color 2
             0x0105, //2 x color 5
             0x0A00, //11 x color 0
             0x0202, //3 x color 2
             0x0105, //2 x color 5
             0x0B00, //12 x color 0
             0x0102, //2 x color 2
             0x0103, //2 x color 3
             0x0B00, //12 x color 0
             0x0102, //2 x color 2
             0x0101, //2 x color 1
             0x0A00, //11 x color 0
             0x0202, //3 x color 2
             0x0003, //1 x color 3
             0x0B00, //12 x color 0
             0x0202  //3 x color 2
              };

const unsigned int Robot_4[] PROGMEM = {
             0x1010, //Width, height
             0x0C00, //13 x color 0
             0x0201, //3 x color 1
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0003, //1 x color 3
             0x0B00, //12 x color 0
             0x0202, //3 x color 2
             0x0003, //1 x color 3
             0x0C00, //13 x color 0
             0x0102, //2 x color 2
             0x0003, //1 x color 3
             0x0C00, //13 x color 0
             0x0102, //2 x color 2
             0x0003, //1 x color 3
             0x0B00, //12 x color 0
             0x0202, //3 x color 2
             0x0103, //2 x color 3
             0x0004, //1 x color 4
             0x0900, //10 x color 0
             0x0202, //3 x color 2
             0x0003, //1 x color 3
             0x0105, //2 x color 5
             0x0900, //10 x color 0
             0x0202, //3 x color 2
             0x0003, //1 x color 3
             0x0105, //2 x color 5
             0x0A00, //11 x color 0
             0x0102, //2 x color 2
             0x0203, //3 x color 3
             0x0A00, //11 x color 0
             0x0102, //2 x color 2
             0x0201, //3 x color 1
             0x0900, //10 x color 0
             0x0202, //3 x color 2
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0A00, //11 x color 0
             0x0202  //3 x color 2
              };

const unsigned int Robot_5[] PROGMEM = {
             0x1010, //Width, height
             0x0C00, //13 x color 0
             0x0201, //3 x color 1
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0A00, //11 x color 0
             0x0202, //3 x color 2
             0x0103, //2 x color 3
             0x0B00, //12 x color 0
             0x0102, //2 x color 2
             0x0103, //2 x color 3
             0x0B00, //12 x color 0
             0x0102, //2 x color 2
             0x0103, //2 x color 3
             0x0A00, //11 x color 0
             0x0202, //3 x color 2
             0x0000, //1 x color 0
             0x0103, //2 x color 3
             0x0004, //1 x color 4
             0x0800, //9 x color 0
             0x0202, //3 x color 2
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0105, //2 x color 5
             0x0800, //9 x color 0
             0x0202, //3 x color 2
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0105, //2 x color 5
             0x0900, //10 x color 0
             0x0102, //2 x color 2
             0x0303, //4 x color 3
             0x0900, //10 x color 0
             0x0102, //2 x color 2
             0x0301, //4 x color 1
             0x0800, //9 x color 0
             0x0202, //3 x color 2
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0900, //10 x color 0
             0x0202  //3 x color 2
              };

const unsigned int Robot_6[] PROGMEM = {
             0x1010, //Width, height
             0x0C00, //13 x color 0
             0x0201, //3 x color 1
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0100, //2 x color 0
             0x0003, //1 x color 3
             0x0900, //10 x color 0
             0x0202, //3 x color 2
             0x0000, //1 x color 0
             0x0103, //2 x color 3
             0x0A00, //11 x color 0
             0x0102, //2 x color 2
             0x0000, //1 x color 0
             0x0103, //2 x color 3
             0x0A00, //11 x color 0
             0x0102, //2 x color 2
             0x0203, //3 x color 3
             0x0900, //10 x color 0
             0x0202, //3 x color 2
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0103, //2 x color 3
             0x0004, //1 x color 4
             0x0700, //8 x color 0
             0x0202, //3 x color 2
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0105, //2 x color 5
             0x0700, //8 x color 0
             0x0202, //3 x color 2
             0x0100, //2 x color 0
             0x0003, //1 x color 3
             0x0105, //2 x color 5
             0x0800, //9 x color 0
             0x0102, //2 x color 2
             0x0403, //5 x color 3
             0x0800, //9 x color 0
             0x0102, //2 x color 2
             0x0401, //5 x color 1
             0x0700, //8 x color 0
             0x0202, //3 x color 2
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0800, //9 x color 0
             0x0202  //3 x color 2
              };

const unsigned int Robot_7[] PROGMEM = {
             0x1010, //Width, height
             0x0C00, //13 x color 0
             0x0201, //3 x color 1
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0200, //3 x color 0
             0x0003, //1 x color 3
             0x0800, //9 x color 0
             0x0202, //3 x color 2
             0x0100, //2 x color 0
             0x0103, //2 x color 3
             0x0900, //10 x color 0
             0x0102, //2 x color 2
             0x0100, //2 x color 0
             0x0103, //2 x color 3
             0x0900, //10 x color 0
             0x0102, //2 x color 2
             0x0000, //1 x color 0
             0x0203, //3 x color 3
             0x0800, //9 x color 0
             0x0202, //3 x color 2
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0103, //2 x color 3
             0x0004, //1 x color 4
             0x0600, //7 x color 0
             0x0202, //3 x color 2
             0x0103, //2 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0105, //2 x color 5
             0x0600, //7 x color 0
             0x0202, //3 x color 2
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0003, //1 x color 3
             0x0105, //2 x color 5
             0x0700, //8 x color 0
             0x0102, //2 x color 2
             0x0503, //6 x color 3
             0x0700, //8 x color 0
             0x0102, //2 x color 2
             0x0501, //6 x color 1
             0x0600, //7 x color 0
             0x0202, //3 x color 2
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0700, //8 x color 0
             0x0202  //3 x color 2
              };

const unsigned int Robot_8[] PROGMEM = {
             0x1010, //Width, height
             0x0C00, //13 x color 0
             0x0201, //3 x color 1
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0300, //4 x color 0
             0x0003, //1 x color 3
             0x0700, //8 x color 0
             0x0202, //3 x color 2
             0x0200, //3 x color 0
             0x0103, //2 x color 3
             0x0800, //9 x color 0
             0x0102, //2 x color 2
             0x0200, //3 x color 0
             0x0103, //2 x color 3
             0x0800, //9 x color 0
             0x0102, //2 x color 2
             0x0100, //2 x color 0
             0x0203, //3 x color 3
             0x0700, //8 x color 0
             0x0202, //3 x color 2
             0x0100, //2 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0103, //2 x color 3
             0x0004, //1 x color 4
             0x0500, //6 x color 0
             0x0202, //3 x color 2
             0x0000, //1 x color 0
             0x0103, //2 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0105, //2 x color 5
             0x0500, //6 x color 0
             0x0202, //3 x color 2
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0003, //1 x color 3
             0x0105, //2 x color 5
             0x0600, //7 x color 0
             0x0102, //2 x color 2
             0x0603, //7 x color 3
             0x0600, //7 x color 0
             0x0102, //2 x color 2
             0x0601, //7 x color 1
             0x0500, //6 x color 0
             0x0202, //3 x color 2
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0600, //7 x color 0
             0x0202  //3 x color 2
              };

const unsigned int Robot_9[] PROGMEM = {
             0x1010, //Width, height
             0x0C00, //13 x color 0
             0x0201, //3 x color 1
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0D00, //14 x color 0
             0x0102, //2 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0C00, //13 x color 0
             0x0202, //3 x color 2
             0x0400, //5 x color 0
             0x0003, //1 x color 3
             0x0600, //7 x color 0
             0x0202, //3 x color 2
             0x0300, //4 x color 0
             0x0103, //2 x color 3
             0x0700, //8 x color 0
             0x0102, //2 x color 2
             0x0300, //4 x color 0
             0x0103, //2 x color 3
             0x0700, //8 x color 0
             0x0102, //2 x color 2
             0x0200, //3 x color 0
             0x0203, //3 x color 3
             0x0600, //7 x color 0
             0x0202, //3 x color 2
             0x0200, //3 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0103, //2 x color 3
             0x0004, //1 x color 4
             0x0400, //5 x color 0
             0x0202, //3 x color 2
             0x0100, //2 x color 0
             0x0103, //2 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0105, //2 x color 5
             0x0400, //5 x color 0
             0x0202, //3 x color 2
             0x0100, //2 x color 0
             0x0003, //1 x color 3
             0x0100, //2 x color 0
             0x0003, //1 x color 3
             0x0105, //2 x color 5
             0x0500, //6 x color 0
             0x0102, //2 x color 2
             0x0000, //1 x color 0
             0x0603, //7 x color 3
             0x0500, //6 x color 0
             0x0102, //2 x color 2
             0x0000, //1 x color 0
             0x0601, //7 x color 1
             0x0400, //5 x color 0
             0x0202, //3 x color 2
             0x0100, //2 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0500, //6 x color 0
             0x0202  //3 x color 2
              };

const unsigned int Robot_ImagePointers[] PROGMEM = {
         &Robot_1,
         &Robot_10,
         &Robot_11,
         &Robot_12,
         &Robot_13,
         &Robot_14,
         &Robot_15,
         &Robot_16,
         &Robot_17,
         &Robot_18,
         &Robot_19,
         &Robot_2,
         &Robot_20,
         &Robot_3,
         &Robot_4,
         &Robot_5,
         &Robot_6,
         &Robot_7,
         &Robot_8,
         &Robot_9,
             };

//#defines to simplify image referencing
#define ROBOT_1                             0
#define ROBOT_10                            1
#define ROBOT_11                            2
#define ROBOT_12                            3
#define ROBOT_13                            4
#define ROBOT_14                            5
#define ROBOT_15                            6
#define ROBOT_16                            7
#define ROBOT_17                            8
#define ROBOT_18                            9
#define ROBOT_19                            10
#define ROBOT_2                             11
#define ROBOT_20                            12
#define ROBOT_3                             13
#define ROBOT_4                             14
#define ROBOT_5                             15
#define ROBOT_6                             16
#define ROBOT_7                             17
#define ROBOT_8                             18
#define ROBOT_9                             19

const unsigned int Robot_ImageInfo[] PROGMEM = {
               20,         //Number of images in set
               6,        //Palette size
               1000,      //Default inter image delay
               30,        //Default number of images to cycle for set
               &Robot_Palette, //Pointer to palette table
               &Robot_ImagePointers, //Pointer to image pointer list
               };

