// Palette table
const unsigned int Mario_Palette[] PROGMEM = {
             0x0000,  //Color index  0 (  0-  0-  0)occurs 195 times
             0xF821,  //Color index  1 (248-  4-  8)occurs 98 times
             0x6180,  //Color index  2 ( 96- 48-  0)occurs 124 times
             0xEF36,  //Color index  3 (232-228-176)occurs 90 times
             0xE8E4,  //Color index  4 (232- 28- 32)occurs 4 times
             0x8200   //Color index  5 (128- 64-  0)occurs 1 times
             };

const unsigned int Mario_Mario_1[] PROGMEM = {
             0x1010, //Width, height
             0x0400, //5 x color 0
             0x0401, //5 x color 1
             0x0900, //10 x color 0
             0x0801, //9 x color 1
             0x0600, //7 x color 0
             0x0202, //3 x color 2
             0x0103, //2 x color 3
             0x0002, //1 x color 2
             0x0003, //1 x color 3
             0x0700, //8 x color 0
             0x0002, //1 x color 2
             0x0003, //1 x color 3
             0x0002, //1 x color 2
             0x0203, //3 x color 3
             0x0002, //1 x color 2
             0x0203, //3 x color 3
             0x0500, //6 x color 0
             0x0002, //1 x color 2
             0x0003, //1 x color 3
             0x0102, //2 x color 2
             0x0203, //3 x color 3
             0x0002, //1 x color 2
             0x0203, //3 x color 3
             0x0400, //5 x color 0
             0x0102, //2 x color 2
             0x0303, //4 x color 3
             0x0302, //4 x color 2
             0x0700, //8 x color 0
             0x0603, //7 x color 3
             0x0700, //8 x color 0
             0x0102, //2 x color 2
             0x0001, //1 x color 1
             0x0202, //3 x color 2
             0x0800, //9 x color 0
             0x0202, //3 x color 2
             0x0001, //1 x color 1
             0x0102, //2 x color 2
             0x0001, //1 x color 1
             0x0202, //3 x color 2
             0x0400, //5 x color 0
             0x0302, //4 x color 2
             0x0301, //4 x color 1
             0x0302, //4 x color 2
             0x0300, //4 x color 0
             0x0103, //2 x color 3
             0x0002, //1 x color 2
             0x0001, //1 x color 1
             0x0003, //1 x color 3
             0x0101, //2 x color 1
             0x0003, //1 x color 3
             0x0001, //1 x color 1
             0x0002, //1 x color 2
             0x0103, //2 x color 3
             0x0300, //4 x color 0
             0x0203, //3 x color 3
             0x0501, //6 x color 1
             0x0203, //3 x color 3
             0x0300, //4 x color 0
             0x0103, //2 x color 3
             0x0201, //3 x color 1
             0x0100, //2 x color 0
             0x0201, //3 x color 1
             0x0103, //2 x color 3
             0x0500, //6 x color 0
             0x0201, //3 x color 1
             0x0100, //2 x color 0
             0x0201, //3 x color 1
             0x0600, //7 x color 0
             0x0202, //3 x color 2
             0x0300, //4 x color 0
             0x0202, //3 x color 2
             0x0400, //5 x color 0
             0x0302, //4 x color 2
             0x0300, //4 x color 0
             0x0302, //4 x color 2
             0x0100  //2 x color 0
              };

const unsigned int Mario_Mario_2[] PROGMEM = {
             0x1010, //Width, height
             0x0400, //5 x color 0
             0x0501, //6 x color 1
             0x0100, //2 x color 0
             0x0203, //3 x color 3
             0x0300, //4 x color 0
             0x0901, //10 x color 1
             0x0103, //2 x color 3
             0x0300, //4 x color 0
             0x0202, //3 x color 2
             0x0203, //3 x color 3
             0x0002, //1 x color 2
             0x0103, //2 x color 3
             0x0202, //3 x color 2
             0x0200, //3 x color 0
             0x0002, //1 x color 2
             0x0003, //1 x color 3
             0x0002, //1 x color 2
             0x0303, //4 x color 3
             0x0002, //1 x color 2
             0x0103, //2 x color 3
             0x0202, //3 x color 2
             0x0200, //3 x color 0
             0x0002, //1 x color 2
             0x0003, //1 x color 3
             0x0102, //2 x color 2
             0x0303, //4 x color 3
             0x0002, //1 x color 2
             0x0203, //3 x color 3
             0x0002, //1 x color 2
             0x0200, //3 x color 0
             0x0102, //2 x color 2
             0x0403, //5 x color 3
             0x0402, //5 x color 2
             0x0500, //6 x color 0
             0x0703, //8 x color 3
             0x0002, //1 x color 2
             0x0300, //4 x color 0
             0x0402, //5 x color 2
             0x0004, //1 x color 4
             0x0202, //3 x color 2
             0x0004, //1 x color 4
             0x0005, //1 x color 5
             0x0300, //4 x color 0
             0x0602, //7 x color 2
             0x0001, //1 x color 1
             0x0202, //3 x color 2
             0x0004, //1 x color 4
             0x0100, //2 x color 0
             0x0002, //1 x color 2
             0x0103, //2 x color 3
             0x0502, //6 x color 2
             0x0001, //1 x color 1
             0x0202, //3 x color 2
             0x0004, //1 x color 4
             0x0100, //2 x color 0
             0x0002, //1 x color 2
             0x0203, //3 x color 3
             0x0000, //1 x color 0
             0x0101, //2 x color 1
             0x0002, //1 x color 2
             0x0101, //2 x color 1
             0x0003, //1 x color 3
             0x0101, //2 x color 1
             0x0003, //1 x color 3
             0x0001, //1 x color 1
             0x0102, //2 x color 2
             0x0000, //1 x color 0
             0x0003, //1 x color 3
             0x0000, //1 x color 0
             0x0002, //1 x color 2
             0x0901, //10 x color 1
             0x0102, //2 x color 2
             0x0100, //2 x color 0
             0x0202, //3 x color 2
             0x0801, //9 x color 1
             0x0102, //2 x color 2
             0x0000, //1 x color 0
             0x0202, //3 x color 2
             0x0601, //7 x color 1
             0x0500, //6 x color 0
             0x0002, //1 x color 2
             0x0100, //2 x color 0
             0x0301, //4 x color 1
             0x1700  //24 x color 0
              };

const unsigned int Mario_ImagePointers[] PROGMEM = {
         &Mario_Mario_1,
         &Mario_Mario_2,
             };

//#defines to simplify image referencing
#define MARIO_MARIO_1                       0
#define MARIO_MARIO_2                       1

const unsigned int Mario_ImageInfo[] PROGMEM = {
               2,         //Number of images in set
               6,        //Palette size
               1000,      //Default inter image delay
               30,        //Default number of images to cycle for set
               &Mario_Palette, //Pointer to palette table
               &Mario_ImagePointers, //Pointer to image pointer list
               };

