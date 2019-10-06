// Palette table
const unsigned int Ryan_Palette[] PROGMEM = {
             0xFFFF,  //Color index  0 (248-252-248)occurs 112 times
             0xE8E4   //Color index  1 (232- 28- 32)occurs 144 times
             };

const unsigned int Ryan_Pic1[] PROGMEM = {
             0x1010, //Width, height
             0x0300, //4 x color 0
             0x0401, //5 x color 1
             0x0800, //9 x color 0
             0x0801, //9 x color 1
             0x0500, //6 x color 0
             0x0A01, //11 x color 1
             0x0300, //4 x color 0
             0x0C01, //13 x color 1
             0x0200, //3 x color 0
             0x0D01, //14 x color 1
             0x0100, //2 x color 0
             0x0401, //5 x color 1
             0x0200, //3 x color 0
             0x0501, //6 x color 1
             0x0100, //2 x color 0
             0x0301, //4 x color 1
             0x0400, //5 x color 0
             0x0401, //5 x color 1
             0x0100, //2 x color 0
             0x0301, //4 x color 1
             0x0400, //5 x color 0
             0x0401, //5 x color 1
             0x0100, //2 x color 0
             0x0401, //5 x color 1
             0x0200, //3 x color 0
             0x0501, //6 x color 1
             0x0100, //2 x color 0
             0x0D01, //14 x color 1
             0x0100, //2 x color 0
             0x0C01, //13 x color 1
             0x0300, //4 x color 0
             0x0A01, //11 x color 1
             0x0500, //6 x color 0
             0x0801, //9 x color 1
             0x0800, //9 x color 0
             0x0401, //5 x color 1
             0x2600  //39 x color 0
              };

const unsigned int Ryan_ImagePointers[] PROGMEM = {
         &Ryan_Pic1,
             };

//#defines to simplify image referencing
#define RYAN_PIC1                           0

const unsigned int Ryan_ImageInfo[] PROGMEM = {
               1,         //Number of images in set
               2,        //Palette size
               1000,      //Default inter image delay
               30,        //Default number of images to cycle for set
               &Ryan_Palette, //Pointer to palette table
               &Ryan_ImagePointers, //Pointer to image pointer list
               };

