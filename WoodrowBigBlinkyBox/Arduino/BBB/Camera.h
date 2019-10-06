// Palette table
const unsigned int Camera_Palette[] PROGMEM = {
             0x0000,  //Color index  0 (  0-  0-  0)occurs 393 times
             0x8C71,  //Color index  1 (136-140-136)occurs 115 times
             0xFFFF   //Color index  2 (248-252-248)occurs 4 times
             };

const unsigned int Camera_1[] PROGMEM = {
             0x1010, //Width, height
             0x0300, //4 x color 0
             0x0101, //2 x color 1
             0x0C00, //13 x color 0
             0x0001, //1 x color 1
             0x0100, //2 x color 0
             0x0001, //1 x color 1
             0x0B00, //12 x color 0
             0x0001, //1 x color 1
             0x0100, //2 x color 0
             0x0001, //1 x color 1
             0x0200, //3 x color 0
             0x0101, //2 x color 1
             0x0600, //7 x color 0
             0x0901, //10 x color 1
             0x0400, //5 x color 0
             0x0001, //1 x color 1
             0x0900, //10 x color 0
             0x0001, //1 x color 1
             0x0300, //4 x color 0
             0x0001, //1 x color 1
             0x0200, //3 x color 0
             0x0201, //3 x color 1
             0x0300, //4 x color 0
             0x0001, //1 x color 1
             0x0300, //4 x color 0
             0x0001, //1 x color 1
             0x0100, //2 x color 0
             0x0001, //1 x color 1
             0x0200, //3 x color 0
             0x0001, //1 x color 1
             0x0200, //3 x color 0
             0x0001, //1 x color 1
             0x0300, //4 x color 0
             0x0001, //1 x color 1
             0x0100, //2 x color 0
             0x0001, //1 x color 1
             0x0200, //3 x color 0
             0x0001, //1 x color 1
             0x0200, //3 x color 0
             0x0001, //1 x color 1
             0x0300, //4 x color 0
             0x0001, //1 x color 1
             0x0100, //2 x color 0
             0x0001, //1 x color 1
             0x0200, //3 x color 0
             0x0001, //1 x color 1
             0x0200, //3 x color 0
             0x0001, //1 x color 1
             0x0300, //4 x color 0
             0x0001, //1 x color 1
             0x0200, //3 x color 0
             0x0201, //3 x color 1
             0x0300, //4 x color 0
             0x0001, //1 x color 1
             0x0300, //4 x color 0
             0x0001, //1 x color 1
             0x0900, //10 x color 0
             0x0001, //1 x color 1
             0x0400, //5 x color 0
             0x0901, //10 x color 1
             0x4200  //67 x color 0
              };

const unsigned int Camera_2[] PROGMEM = {
             0x1010, //Width, height
             0x0300, //4 x color 0
             0x0101, //2 x color 1
             0x0C00, //13 x color 0
             0x0001, //1 x color 1
             0x0102, //2 x color 2
             0x0001, //1 x color 1
             0x0B00, //12 x color 0
             0x0001, //1 x color 1
             0x0102, //2 x color 2
             0x0001, //1 x color 1
             0x0B00, //12 x color 0
             0x0901, //10 x color 1
             0x0400, //5 x color 0
             0x0001, //1 x color 1
             0x0900, //10 x color 0
             0x0001, //1 x color 1
             0x0300, //4 x color 0
             0x0001, //1 x color 1
             0x0200, //3 x color 0
             0x0201, //3 x color 1
             0x0300, //4 x color 0
             0x0001, //1 x color 1
             0x0300, //4 x color 0
             0x0001, //1 x color 1
             0x0100, //2 x color 0
             0x0401, //5 x color 1
             0x0200, //3 x color 0
             0x0001, //1 x color 1
             0x0300, //4 x color 0
             0x0001, //1 x color 1
             0x0100, //2 x color 0
             0x0401, //5 x color 1
             0x0200, //3 x color 0
             0x0001, //1 x color 1
             0x0300, //4 x color 0
             0x0001, //1 x color 1
             0x0100, //2 x color 0
             0x0401, //5 x color 1
             0x0200, //3 x color 0
             0x0001, //1 x color 1
             0x0300, //4 x color 0
             0x0001, //1 x color 1
             0x0200, //3 x color 0
             0x0201, //3 x color 1
             0x0300, //4 x color 0
             0x0001, //1 x color 1
             0x0300, //4 x color 0
             0x0001, //1 x color 1
             0x0900, //10 x color 0
             0x0001, //1 x color 1
             0x0400, //5 x color 0
             0x0901, //10 x color 1
             0x4200  //67 x color 0
              };

const unsigned int Camera_ImagePointers[] PROGMEM = {
         &Camera_1,
         &Camera_2,
             };

//#defines to simplify image referencing
#define CAMERA_1                            0
#define CAMERA_2                            1

const unsigned int Camera_ImageInfo[] PROGMEM = {
               2,         //Number of images in set
               3,        //Palette size
               1000,      //Default inter image delay
               30,        //Default number of images to cycle for set
               &Camera_Palette, //Pointer to palette table
               &Camera_ImagePointers, //Pointer to image pointer list
               };

