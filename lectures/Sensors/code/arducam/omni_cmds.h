#ifndef OMNI_CMDS_H
#define OMNI_CMDS_H

/* This code brought to you by the rag tag duo of Arjun and Eric! Visit us at
 * our github accounts: https://github.com/arjunvb, https://github.com/efritz09
 */


/* The commands for the special effects were found in the OV2640 Camera Module
 * 	Software Application Notes pdf. What the registers do was not properly 
 *	documented, so we used what was given to test our control of the camera
 *
 * The BITMAP modes were also taken from the Software Applications Notes pdf
 *
 * The JPEG modes were taken from the Arducam's libraries available on github:
 * https://github.com/ArduCAM
 * https://github.com/ArduCAM/Arduino/blob/master/ArduCAM/ov2640_regs.h
 */


/***************************** SPECIAL EFFECTS *****************************/

const char BW[][2] =
{
	{0xff, 0x00},
	{0x7c, 0x00},
	{0x7d, 0x18},
	{0x7c, 0x05},
	{0x7d, 0x80},
	{0x7d, 0x80},
	{0xff, 0xff}
};

const char ANTIQUE[][2] =
{
	{0xff, 0x00},
	{0x7c, 0x00},
	{0x7d, 0x18},
	{0x7c, 0x05},
	{0x7d, 0x40},
	{0x7d, 0xa6},
	{0xff, 0xff}
};

const char BLUISH[][2] =
{
	{0xff, 0x00},
    {0x7c, 0x00},
    {0x7d, 0x18},
    {0x7c, 0x05},
    {0x7d, 0xa0},
    {0x7d, 0x40},
    {0xff, 0xff}
};

const char GREENISH[][2] =
{
	{0xff, 0x00},
    {0x7c, 0x00},
    {0x7d, 0x18},
    {0x7c, 0x05},
    {0x7d, 0x40},
    {0x7d, 0x40},
    {0xff, 0xff}
};

const char REDDISH[][2] =
{
	{0xff, 0x00},
    {0x7c, 0x00},
    {0x7d, 0x18},
    {0x7c, 0x05},
    {0x7d, 0x40},
    {0x7d, 0xc0},
    {0xff, 0xff}
};

const char NEG[][2] =
{
	{0xff, 0x00},
    {0x7c, 0x00},
    {0x7d, 0x40},
    {0x7c, 0x05},
    {0x7d, 0x80},
    {0x7d, 0x80},
    {0xff, 0xff}
};

const char BW_NEG[][2] =
{
	{0xff, 0x00},
    {0x7c, 0x00},
    {0x7d, 0x58},
    {0x7c, 0x05},
    {0x7d, 0x80},
    {0x7d, 0x80},
    {0xff, 0xff}
};

const char NORMAL[][2] =
{
	{0xff, 0x00},
    {0x7c, 0x00},
    {0x7d, 0x00},
    {0x7c, 0x05},
    {0x7d, 0x80},
    {0x7d, 0x80},
    {0xff, 0xff}
};


const char AUTO[][2] = 
{
	{0xff, 0x00},
	{0xc7, 0x00},
	{0xff, 0xff} //AWB on
};

const char SUNNY[][2] = 
{
	{0xff, 0x00},
	{0xc7, 0x40}, //AWB off
	{0xcc, 0x5e},
	{0xcd, 0x41},
	{0xce, 0x54},
	{0xff, 0xff}
};

const char CLOUDY[][2] = 
{
	{0xff, 0x00},
	{0xc7, 0x40}, //AWB off
	{0xcc, 0x65},
	{0xcd, 0x41},
	{0xce, 0x4f},
	{0xff, 0xff}
};

const char OFFICE[][2] = 
{
	{0xff, 0x00},
	{0xc7, 0x40}, //AWB off
	{0xcc, 0x52},
	{0xcd, 0x41},
	{0xce, 0x66},
	{0xff, 0xff}
};


const char HOME[][2] = 
{
	{0xff, 0x00},
	{0xc7, 0x40}, //AWB off
	{0xcc, 0x42},
	{0xcd, 0x3f},
	{0xce, 0x71},
	{0xff, 0xff}
};

/***************************** SATURATION *****************************/
const char SATURATION_NEG2[][2] =
{
	{0xff, 0x00},
	{0x7c, 0x00},
	{0x7d, 0x02},
	{0x7c, 0x03},
	{0x7d, 0x28},
	{0x7d, 0x28},
	{0xff, 0xff}
};

const char SATURATION_NEG1[][2] =
{
	{0xff, 0x00},
	{0x7c, 0x00},
	{0x7d, 0x02},
	{0x7c, 0x03},
	{0x7d, 0x38},
	{0x7d, 0x38},
	{0xff, 0xff}
};

const char SATURATION_ZERO[][2] =
{
	{0xff, 0x00},
	{0x7c, 0x00},
	{0x7d, 0x02},
	{0x7c, 0x03},
	{0x7d, 0x48},
	{0x7d, 0x48},
	{0xff, 0xff}
};

const char SATURATION_POS1[][2] =
{
	{0xff, 0x00},
	{0x7c, 0x00},
	{0x7d, 0x02},
	{0x7c, 0x03},
	{0x7d, 0x58},
	{0x7d, 0x58},
	{0xff, 0xff}
};

const char SATURATION_POS2[][2] =
{
	{0xff, 0x00},
	{0x7c, 0x00},
	{0x7d, 0x02},
	{0x7c, 0x03},
	{0x7d, 0x68},
	{0x7d, 0x68},
	{0xff, 0xff}
};

/***************************** CONTRAST *****************************/
const char CONTRAST_NEG2[][2] =
{
	{0xff, 0x00},
	{0x7c, 0x00},
	{0x7d, 0x04},
	{0x7c, 0x07},
	{0x7d, 0x20},
	{0x7d, 0x18},
	{0x7d, 0x34},
	{0x7d, 0x06},
	{0xff, 0xff}
};

const char CONTRAST_NEG1[][2] =
{
	{0xff, 0x00},
	{0x7c, 0x00},
	{0x7d, 0x04},
	{0x7c, 0x07},
	{0x7d, 0x20},
	{0x7d, 0x1c},
	{0x7d, 0x2a},
	{0x7d, 0x06},
	{0xff, 0xff}
};

const char CONTRAST_ZERO[][2] =
{
	{0xff, 0x00},
	{0x7c, 0x00},
	{0x7d, 0x04},
	{0x7c, 0x07},
	{0x7d, 0x20},
	{0x7d, 0x20},
	{0x7d, 0x20},
	{0x7d, 0x06},
	{0xff, 0xff}
};

const char CONTRAST_POS1[][2] =
{
	{0xff, 0x00},
	{0x7c, 0x00},
	{0x7d, 0x04},
	{0x7c, 0x07},
	{0x7d, 0x20},
	{0x7d, 0x24},
	{0x7d, 0x16},
	{0x7d, 0x06},
	{0xff, 0xff}
};

const char CONTRAST_POS2[][2] =
{
	{0xff, 0x00},
	{0x7c, 0x00},
	{0x7d, 0x04},
	{0x7c, 0x07},
	{0x7d, 0x20},
	{0x7d, 0x28},
	{0x7d, 0x0c},
	{0x7d, 0x06},
	{0xff, 0xff}
};

/***************************** BRIGHTNESS *****************************/
const char BRIGHTNESS_NEG2[][2] =
{
	{0xff, 0x00},
	{0x7c, 0x00},
	{0x7d, 0x04},
	{0x7c, 0x09},
	{0x7d, 0x40},
	{0xff, 0xff}
};

const char BRIGHTNESS_NEG1[][2] =
{
	{0xff, 0x00},
	{0x7c, 0x00},
	{0x7d, 0x04},
	{0x7c, 0x09},
	{0x7d, 0x30},
	{0xff, 0xff}
};

const char BRIGHTNESS_ZERO[][2] =
{
	{0xff, 0x00},
	{0x7c, 0x00},
	{0x7d, 0x04},
	{0x7c, 0x09},
	{0x7d, 0x20},
	{0xff, 0xff}
};

const char BRIGHTNESS_POS1[][2] =
{
	{0xff, 0x00},
	{0x7c, 0x00},
	{0x7d, 0x04},
	{0x7c, 0x09},
	{0x7d, 0x10},
	{0xff, 0xff}
};

const char BRIGHTNESS_POS2[][2] =
{
	{0xff, 0x00},
	{0x7c, 0x00},
	{0x7d, 0x04},
	{0x7c, 0x09},
	{0x7d, 0x00},
	{0xff, 0xff}
};



/***************************** BITMAP SETTINGS *****************************/

const char OV2640_QVGA[][2] =
{
	{0xff, 0x0}, 
	{0x2c, 0xff}, 
	{0x2e, 0xdf}, 
	{0xff, 0x1}, 
	{0x3c, 0x32}, 
	{0x11, 0x0}, 
	{0x9, 0x2}, 
	{0x4, 0xa8}, 
	{0x13, 0xe5}, 
	{0x14, 0x48}, 
	{0x2c, 0xc}, 
	{0x33, 0x78}, 
	{0x3a, 0x33}, 
	{0x3b, 0xfb}, 
	{0x3e, 0x0}, 
	{0x43, 0x11}, 
	{0x16, 0x10}, 
	{0x39, 0x2}, 
	{0x35, 0x88}, 

	{0x22, 0xa}, 
	{0x37, 0x40}, 
	{0x23, 0x0}, 
	{0x34, 0xa0}, 
	{0x6, 0x2}, 
	{0x6, 0x88}, 
	{0x7, 0xc0}, 
	{0xd, 0xb7}, 
	{0xe, 0x1}, 
	{0x4c, 0x0}, 
	{0x4a, 0x81}, 
	{0x21, 0x99}, 
	{0x24, 0x40}, 
	{0x25, 0x38}, 
	{0x26, 0x82}, 
	{0x5c, 0x0}, 
	{0x63, 0x0}, 
	{0x46, 0x22}, 
	{0xc, 0x3a}, 
	{0x5d, 0x55}, 
	{0x5e, 0x7d}, 
	{0x5f, 0x7d}, 
	{0x60, 0x55}, 
	{0x61, 0x70}, 
	{0x62, 0x80}, 
	{0x7c, 0x5}, 
	{0x20, 0x80}, 
	{0x28, 0x30}, 
	{0x6c, 0x0}, 
	{0x6d, 0x80}, 
	{0x6e, 0x0}, 
	{0x70, 0x2}, 
	{0x71, 0x94}, 
	{0x73, 0xc1}, 
	{0x3d, 0x34}, 
	{0x12, 0x4}, 
	{0x5a, 0x57}, 
	{0x4f, 0xbb}, 
	{0x50, 0x9c}, 
	{0xff, 0x0}, 
	{0xe5, 0x7f}, 
	{0xf9, 0xc0}, 
	{0x41, 0x24}, 
	{0xe0, 0x14}, 
	{0x76, 0xff}, 
	{0x33, 0xa0}, 
	{0x42, 0x20}, 
	{0x43, 0x18}, 
	{0x4c, 0x0}, 
	{0x87, 0xd0}, 
	{0x88, 0x3f}, 
	{0xd7, 0x3}, 
	{0xd9, 0x10}, 
	{0xd3, 0x82}, 
	{0xc8, 0x8}, 
	{0xc9, 0x80}, 
	{0x7c, 0x0}, 
	{0x7d, 0x0}, 
	{0x7c, 0x3}, 
	{0x7d, 0x48}, 
	{0x7d, 0x48}, 
	{0x7c, 0x8}, 
	{0x7d, 0x20}, 
	{0x7d, 0x10}, 
	{0x7d, 0xe}, 
	{0x90, 0x0}, 
	{0x91, 0xe}, 
	{0x91, 0x1a}, 
	{0x91, 0x31}, 
	{0x91, 0x5a}, 
	{0x91, 0x69}, 
	{0x91, 0x75}, 
	{0x91, 0x7e}, 
	{0x91, 0x88}, 
	{0x91, 0x8f}, 
	{0x91, 0x96}, 
	{0x91, 0xa3}, 
	{0x91, 0xaf}, 
	{0x91, 0xc4}, 
	{0x91, 0xd7}, 
	{0x91, 0xe8}, 
	{0x91, 0x20}, 
	{0x92, 0x0}, 

	{0x93, 0x6}, 
	{0x93, 0xe3}, 
	{0x93, 0x3}, 
	{0x93, 0x3}, 
	{0x93, 0x0}, 
	{0x93, 0x2}, 
	{0x93, 0x0}, 
	{0x93, 0x0}, 
	{0x93, 0x0}, 
	{0x93, 0x0}, 
	{0x93, 0x0}, 
	{0x93, 0x0}, 
	{0x93, 0x0}, 
	{0x96, 0x0}, 
	{0x97, 0x8}, 
	{0x97, 0x19}, 
	{0x97, 0x2}, 
	{0x97, 0xc}, 
	{0x97, 0x24}, 
	{0x97, 0x30}, 
	{0x97, 0x28}, 
	{0x97, 0x26}, 
	{0x97, 0x2}, 
	{0x97, 0x98}, 
	{0x97, 0x80}, 
	{0x97, 0x0}, 
	{0x97, 0x0}, 
	{0xa4, 0x0}, 
	{0xa8, 0x0}, 
	{0xc5, 0x11}, 
	{0xc6, 0x51}, 
	{0xbf, 0x80}, 
	{0xc7, 0x10}, 
	{0xb6, 0x66}, 
	{0xb8, 0xa5}, 
	{0xb7, 0x64}, 
	{0xb9, 0x7c}, 
	{0xb3, 0xaf}, 
	{0xb4, 0x97}, 
	{0xb5, 0xff}, 
	{0xb0, 0xc5}, 
	{0xb1, 0x94}, 
	{0xb2, 0xf}, 
	{0xc4, 0x5c}, 
	{0xa6, 0x0}, 
	{0xa7, 0x20}, 
	{0xa7, 0xd8}, 
	{0xa7, 0x1b}, 
	{0xa7, 0x31}, 
	{0xa7, 0x0}, 
	{0xa7, 0x18}, 
	{0xa7, 0x20}, 
	{0xa7, 0xd8}, 
	{0xa7, 0x19}, 
	{0xa7, 0x31}, 
	{0xa7, 0x0}, 
	{0xa7, 0x18}, 
	{0xa7, 0x20}, 
	{0xa7, 0xd8}, 
	{0xa7, 0x19}, 
	{0xa7, 0x31}, 
	{0xa7, 0x0}, 
	{0xa7, 0x18}, 
	{0x7f, 0x0}, 
	{0xe5, 0x1f}, 
	{0xe1, 0x77}, 
	{0xdd, 0x7f}, 
	{0xc2, 0xe}, 
	
	{0xff, 0x0}, 
	{0xe0, 0x4}, 
	{0xc0, 0xc8}, 
	{0xc1, 0x96}, 
	{0x86, 0x3d}, 
	{0x51, 0x90}, 
	{0x52, 0x2c}, 
	{0x53, 0x0}, 
	{0x54, 0x0}, 
	{0x55, 0x88}, 
	{0x57, 0x0}, 
	
	{0x50, 0x92}, 
	{0x5a, 0x50}, 
	{0x5b, 0x3c}, 
	{0x5c, 0x0}, 
	{0xd3, 0x4}, 
	{0xe0, 0x0}, 
	
	{0xff, 0x0}, 
	{0x5, 0x0}, 
	
	{0xda, 0x8}, 
	{0xd7, 0x3}, 
	{0xe0, 0x0}, 
	
	{0x5, 0x0}, 

	
	{0xff,0xff},
};  


const char SVGA[][2] = {
	{0xff, 0x00},
	{0x2c, 0xff},
	{0x2e, 0xdf},
	{0xff, 0x01},
	{0x3c, 0x32},
	//
	{0x11, 0x01},
	{0x09, 0x02},
	{0x04, 0x28},
	{0x13, 0xe5},
	{0x14, 0x48},
	{0x2c, 0x0c},
	{0x33, 0x78},
	{0x3a, 0x33},
	{0x3b, 0xfB},
	//
	{0x3e, 0x00},
	{0x43, 0x11},
	{0x16, 0x10},
	//
	{0x39, 0x92},
	//
	{0x35, 0xda},
	{0x22, 0x1a},
	{0x37, 0xc3},
	{0x23, 0x00},
	{0x34, 0xc0},
	{0x36, 0x1a},
	{0x06, 0x88},
	{0x07, 0xc0},
	{0x0d, 0x87},
	{0x0e, 0x41},
	{0x4c, 0x00},
	{0x48, 0x00},
	{0x5B, 0x00},
	{0x42, 0x03},
	//
	{0x4a, 0x81},
	{0x21, 0x99},
	//
	{0x24, 0x40},
	{0x25, 0x38},
	{0x26, 0x82},
	{0x5c, 0x00},
	{0x63, 0x00},
	{0x61, 0x70},
	{0x62, 0x80},
	{0x7c, 0x05},
	//
	{0x20, 0x80},
	{0x28, 0x30},
	{0x6c, 0x00},
	{0x6d, 0x80},
	{0x6e, 0x00},
	{0x70, 0x02},
	{0x71, 0x94},
	{0x73, 0xc1},
	//
	{0x12, 0x40},
	{0x17, 0x11},
	{0x18, 0x43},
	{0x19, 0x00},
	{0x1a, 0x4b},
	{0x32, 0x09},
	{0x37, 0xc0},
	{0x4f, 0x60},
	{0x50, 0xa8},
	{0x6d, 0x00},
	{0x3d, 0x38},
	//
	{0x46, 0x3f},
	{0x4f, 0x60},
	{0x0c, 0x3c},
	//
	{0xff, 0x00},
	{0xe5, 0x7f},
	{0xf9, 0xc0},
	{0x41, 0x24},
	{0xe0, 0x14},
	{0x76, 0xff},
	{0x33, 0xa0},
	{0x42, 0x20},
	{0x43, 0x18},
	{0x4c, 0x00},
	{0x87, 0xd5},
	{0x88, 0x3f},
	{0xd7, 0x03},
	{0xd9, 0x10},
	{0xd3, 0x82},
	//
	{0xc8, 0x08},
	{0xc9, 0x80},
	//
	{0x7c, 0x00},
	{0x7d, 0x00},
	{0x7c, 0x03},
	{0x7d, 0x48},
	{0x7d, 0x48},
	{0x7c, 0x08},
	{0x7d, 0x20},
	{0x7d, 0x10},
	{0x7d, 0x0e},
	//
	{0x90, 0x00},
	{0x91, 0x0e},
	{0x91, 0x1a},
	{0x91, 0x31},
	{0x91, 0x5a},
	{0x91, 0x69},
	{0x91, 0x75},
	{0x91, 0x7e},
	{0x91, 0x88},
	{0x91, 0x8f},
	{0x91, 0x96},
	{0x91, 0xa3},
	{0x91, 0xaf},
	{0x91, 0xc4},
	{0x91, 0xd7},
	{0x91, 0xe8},
	{0x91, 0x20},
	//
	{0x92, 0x00},
	{0x93, 0x06},
	{0x93, 0xe3},
	{0x93, 0x05},
	{0x93, 0x05},
	{0x93, 0x00},
	{0x93, 0x04},
	{0x93, 0x00},
	{0x93, 0x00},
	{0x93, 0x00},
	{0x93, 0x00},
	{0x93, 0x00},
	{0x93, 0x00},
	{0x93, 0x00},
	//
	{0x96, 0x00},
	{0x97, 0x08},
	{0x97, 0x19},
	{0x97, 0x02},
	{0x97, 0x0c},
	{0x97, 0x24},
	{0x97, 0x30},
	{0x97, 0x28},
	{0x97, 0x26},
	{0x97, 0x02},
	{0x97, 0x98},
	{0x97, 0x80},
	{0x97, 0x00},
	{0x97, 0x00},
	//
	{0xc3, 0xed},
	{0xa4, 0x00},
	{0xa8, 0x00},
	{0xc5, 0x11},
	{0xc6, 0x51},
	{0xbf, 0x80},
	{0xc7, 0x10},
	{0xb6, 0x66},
	{0xb8, 0xA5},
	{0xb7, 0x64},
	{0xb9, 0x7C},
	{0xb3, 0xaf},
	{0xb4, 0x97},
	{0xb5, 0xFF},
	{0xb0, 0xC5},
	{0xb1, 0x94},
	{0xb2, 0x0f},
	{0xc4, 0x5c},
	//
	{0xc0, 0x64},
	{0xc1, 0x4B},
	{0x8c, 0x00},
	{0x86, 0x3D},
	{0x50, 0x00},
	{0x51, 0xC8},
	{0x52, 0x96},
	{0x53, 0x00},
	{0x54, 0x00},
	{0x55, 0x00},
	{0x5a, 0xC8},
	{0x5b, 0x96},
	{0x5c, 0x00},
	{0xd3, 0x82},
	//
	{0xc3, 0xed},
	{0x7f, 0x00},
	//
	{0xda, 0x00},
	//
	{0xe5, 0x1f},
	{0xe1, 0x67},
	{0xe0, 0x00},
	{0xdd, 0x7f},
	{0x05, 0x00},
	{0xff, 0xff}
};


const char UXGA[][2] = {


	{0xff, 0x00},
	{0x2c, 0xff},
	{0x2e, 0xdf},
	{0xff, 0x01},
	{0x3c, 0x32},
	//
	{0x11, 0x01},
	{0x09, 0x02},
	{0x04, 0x28},
	{0x13, 0xe5},
	{0x14, 0x48},
	{0x2c, 0x0c},
	{0x33, 0x78},
	{0x3a, 0x33},
	{0x3b, 0xfB},
	//
	{0x3e, 0x00},
	{0x43, 0x11},
	{0x16, 0x10},
	//
	{0x39, 0x82},
	//
	{0x35, 0x88},
	{0x22, 0x0a},
	{0x37, 0x40},
	{0x23, 0x00},
	{0x34, 0xa0},
	{0x36, 0x1a},
	{0x06, 0x02},
	{0x07, 0xc0},
	{0x0d, 0xb7},
	{0x0e, 0x01},
	{0x4c, 0x00},
	{0x48, 0x00},
	{0x5B, 0x00},
	{0x42, 0x83},
	//
	{0x4a, 0x81},
	{0x21, 0x99},
	//
	{0x24, 0x40},
	{0x25, 0x38},
	{0x26, 0x82},
	{0x5c, 0x00},
	{0x63, 0x00},
	{0x46, 0x00},
	{0x0c, 0x38},
	//
	{0x61, 0x70},
	{0x62, 0x80},
	{0x7c, 0x05},
	//
	{0x20, 0x80},
	{0x28, 0x30},
	{0x6c, 0x00},
	{0x6d, 0x80},
	{0x6e, 0x00},
	{0x70, 0x02},
	{0x71, 0x94},
	{0x73, 0xc1},
	//
	{0x3d, 0x34},
	{0x5a, 0x57},
	{0x4f, 0xbb},
	{0x50, 0x9c},
	//
	//
	{0xff, 0x00},
	{0xe5, 0x7f},
	{0xf9, 0xc0},
	{0x41, 0x24},
	{0xe0, 0x14},
	{0x76, 0xff},
	{0x33, 0xa0},
	{0x42, 0x20},
	{0x43, 0x18},
	{0x4c, 0x00},
	{0x87, 0xd0},
	{0x88, 0x3f},
	{0xd7, 0x03},
	{0xd9, 0x10},
	{0xd3, 0x82},
	//
	{0xc8, 0x08},
	{0xc9, 0x80},
	//
	{0x7c, 0x00},
	{0x7d, 0x00},
	{0x7c, 0x03},
	{0x7d, 0x48},
	{0x7d, 0x48},
	{0x7c, 0x08},
	{0x7d, 0x20},
	{0x7d, 0x10},
	{0x7d, 0x0e},
	//
	{0x90, 0x00},
	{0x91, 0x0e},
	{0x91, 0x1a},
	{0x91, 0x31},
	{0x91, 0x5a},
	{0x91, 0x69},
	{0x91, 0x75},
	{0x91, 0x7e},
	{0x91, 0x88},
	{0x91, 0x8f},
	{0x91, 0x96},
	{0x91, 0xa3},
	{0x91, 0xaf},
	{0x91, 0xc4},
	{0x91, 0xd7},
	{0x91, 0xe8},
	{0x91, 0x20},
	//
	{0x92, 0x00},
	{0x93, 0x06},
	{0x93, 0xe3},
	{0x93, 0x05},
	{0x93, 0x05},
	{0x93, 0x00},
	{0x93, 0x04},
	{0x93, 0x00},
	{0x93, 0x00},
	{0x93, 0x00},
	{0x93, 0x00},
	{0x93, 0x00},
	{0x93, 0x00},
	{0x93, 0x00},
	//
	{0x96, 0x00},
	{0x97, 0x08},
	{0x97, 0x19},
	{0x97, 0x02},
	{0x97, 0x0c},
	{0x97, 0x24},
	{0x97, 0x30},
	{0x97, 0x28},
	{0x97, 0x26},
	{0x97, 0x02},
	{0x97, 0x98},
	{0x97, 0x80},
	{0x97, 0x00},
	{0x97, 0x00},
	//
	{0xc3, 0xed},
	{0xc4, 0x9a},
	{0xa4, 0x00},
	{0xa8, 0x00},
	{0xc5, 0x11},
	{0xc6, 0x51},
	{0xbf, 0x80},
	{0xc7, 0x10},
	{0xb6, 0x66},
	{0xb8, 0xA5},
	{0xb7, 0x64},
	{0xb9, 0x7C},
	{0xb3, 0xaf},
	{0xb4, 0x97},
	{0xb5, 0xFF},
	{0xb0, 0xC5},
	{0xb1, 0x94},
	{0xb2, 0x0f},
	{0xc4, 0x5c},
	//
	{0xc0, 0xc8},
	{0xc1, 0x96},
	{0x86, 0x1d},
	{0x50, 0x00},
	{0x51, 0x90},
	{0x52, 0x2c},
	{0x53, 0x00},
	{0x54, 0x00},
	{0x55, 0x88},
	{0x57, 0x00},
	{0x5a, 0x90},
	{0x5b, 0x2c},
	{0x5c, 0x05},
	//
	{0xc3, 0xed},
	{0x7f, 0x00},
	//
	{0xda, 0x00},
	//
	{0xe5, 0x1f},
	{0xe1, 0x67},
	{0xe0, 0x00},
	{0xdd, 0x7f},
	{0x05, 0x00},
	{0xff, 0xff}
};


/***************************** JPEG SETTINGS *****************************/
const char OV2640_JPEG_INIT[][2] =
{
	{ 0xff, 0x00 },
	{ 0x2c, 0xff },
	{ 0x2e, 0xdf },
	{ 0xff, 0x01 },
	{ 0x3c, 0x32 },
	{ 0x11, 0x00 },   
	{ 0x09, 0x02 },
	{ 0x04, 0x28 },
	{ 0x13, 0xe5 },
	{ 0x14, 0x48 },
	{ 0x2c, 0x0c },
	{ 0x33, 0x78 },
	{ 0x3a, 0x33 },
	{ 0x3b, 0xfB },
	{ 0x3e, 0x00 },
	{ 0x43, 0x11 },
	{ 0x16, 0x10 },
	{ 0x39, 0x92 },
	{ 0x35, 0xda },
	{ 0x22, 0x1a },
	{ 0x37, 0xc3 },
	{ 0x23, 0x00 },
	{ 0x34, 0xc0 },
	{ 0x36, 0x1a },
	{ 0x06, 0x88 },
	{ 0x07, 0xc0 },
	{ 0x0d, 0x87 },
	{ 0x0e, 0x41 },
	{ 0x4c, 0x00 },
	{ 0x48, 0x00 },
	{ 0x5B, 0x00 },
	{ 0x42, 0x03 },
	{ 0x4a, 0x81 },
	{ 0x21, 0x99 },
	{ 0x24, 0x40 },
	{ 0x25, 0x38 },
	{ 0x26, 0x82 },
	{ 0x5c, 0x00 },
	{ 0x63, 0x00 },
	{ 0x61, 0x70 },
	{ 0x62, 0x80 },
	{ 0x7c, 0x05 },
	{ 0x20, 0x80 },
	{ 0x28, 0x30 },
	{ 0x6c, 0x00 },
	{ 0x6d, 0x80 },
	{ 0x6e, 0x00 },
	{ 0x70, 0x02 },
	{ 0x71, 0x94 },
	{ 0x73, 0xc1 },
	{ 0x12, 0x40 },
	{ 0x17, 0x11 },
	{ 0x18, 0x43 },
	{ 0x19, 0x00 },
	{ 0x1a, 0x4b },
	{ 0x32, 0x09 },
	{ 0x37, 0xc0 },
	{ 0x4f, 0x60 },
	{ 0x50, 0xa8 },
	{ 0x6d, 0x00 },
	{ 0x3d, 0x38 },
	{ 0x46, 0x3f },
	{ 0x4f, 0x60 },
	{ 0x0c, 0x3c },
	{ 0xff, 0x00 },
	{ 0xe5, 0x7f },
	{ 0xf9, 0xc0 },
	{ 0x41, 0x24 },
	{ 0xe0, 0x14 },
	{ 0x76, 0xff },
	{ 0x33, 0xa0 },
	{ 0x42, 0x20 },
	{ 0x43, 0x18 },
	{ 0x4c, 0x00 },
	{ 0x87, 0xd5 },
	{ 0x88, 0x3f },
	{ 0xd7, 0x03 },
	{ 0xd9, 0x10 },
	{ 0xd3, 0x82 },
	{ 0xc8, 0x08 },
	{ 0xc9, 0x80 },
	{ 0x7c, 0x00 },
	{ 0x7d, 0x00 },
	{ 0x7c, 0x03 },
	{ 0x7d, 0x48 },
	{ 0x7d, 0x48 },
	{ 0x7c, 0x08 },
	{ 0x7d, 0x20 },
	{ 0x7d, 0x10 },
	{ 0x7d, 0x0e },
	{ 0x90, 0x00 },
	{ 0x91, 0x0e },
	{ 0x91, 0x1a },
	{ 0x91, 0x31 },
	{ 0x91, 0x5a },
	{ 0x91, 0x69 },
	{ 0x91, 0x75 },
	{ 0x91, 0x7e },
	{ 0x91, 0x88 },
	{ 0x91, 0x8f },
	{ 0x91, 0x96 },
	{ 0x91, 0xa3 },
	{ 0x91, 0xaf },
	{ 0x91, 0xc4 },
	{ 0x91, 0xd7 },
	{ 0x91, 0xe8 },
	{ 0x91, 0x20 },
	{ 0x92, 0x00 },
	{ 0x93, 0x06 },
	{ 0x93, 0xe3 },
	{ 0x93, 0x05 },
	{ 0x93, 0x05 },
	{ 0x93, 0x00 },
	{ 0x93, 0x04 },
	{ 0x93, 0x00 },
	{ 0x93, 0x00 },
	{ 0x93, 0x00 },
	{ 0x93, 0x00 },
	{ 0x93, 0x00 },
	{ 0x93, 0x00 },
	{ 0x93, 0x00 },
	{ 0x96, 0x00 },
	{ 0x97, 0x08 },
	{ 0x97, 0x19 },
	{ 0x97, 0x02 },
	{ 0x97, 0x0c },
	{ 0x97, 0x24 },
	{ 0x97, 0x30 },
	{ 0x97, 0x28 },
	{ 0x97, 0x26 },
	{ 0x97, 0x02 },
	{ 0x97, 0x98 },
	{ 0x97, 0x80 },
	{ 0x97, 0x00 },
	{ 0x97, 0x00 },
	{ 0xc3, 0xed },
	{ 0xa4, 0x00 },
	{ 0xa8, 0x00 },
	{ 0xc5, 0x11 },
	{ 0xc6, 0x51 },
	{ 0xbf, 0x80 },
	{ 0xc7, 0x10 },
	{ 0xb6, 0x66 },
	{ 0xb8, 0xA5 },
	{ 0xb7, 0x64 },
	{ 0xb9, 0x7C },
	{ 0xb3, 0xaf },
	{ 0xb4, 0x97 },
	{ 0xb5, 0xFF },
	{ 0xb0, 0xC5 },
	{ 0xb1, 0x94 },
	{ 0xb2, 0x0f },
	{ 0xc4, 0x5c },
	{ 0xc0, 0x64 },
	{ 0xc1, 0x4B },
	{ 0x8c, 0x00 },
	{ 0x86, 0x3D },
	{ 0x50, 0x00 },
	{ 0x51, 0xC8 },
	{ 0x52, 0x96 },
	{ 0x53, 0x00 },
	{ 0x54, 0x00 },
	{ 0x55, 0x00 },
	{ 0x5a, 0xC8 },
	{ 0x5b, 0x96 },
	{ 0x5c, 0x00 },
	{ 0xd3, 0x00 },   //{ 0xd3, 0x7f },
	{ 0xc3, 0xed },
	{ 0x7f, 0x00 },
	{ 0xda, 0x00 },
	{ 0xe5, 0x1f },
	{ 0xe1, 0x67 },
	{ 0xe0, 0x00 },
	{ 0xdd, 0x7f },
	{ 0x05, 0x00 },
			   
	{ 0x12, 0x40 },
	{ 0xd3, 0x04 },   //{ 0xd3, 0x7f },
	{ 0xc0, 0x16 },
	{ 0xC1, 0x12 },
	{ 0x8c, 0x00 },
	{ 0x86, 0x3d },
	{ 0x50, 0x00 },
	{ 0x51, 0x2C },
	{ 0x52, 0x24 },
	{ 0x53, 0x00 },
	{ 0x54, 0x00 },
	{ 0x55, 0x00 },
	{ 0x5A, 0x2c },
	{ 0x5b, 0x24 },
	{ 0x5c, 0x00 },
	{ 0xff, 0xff },
};     


const char OV2640_YUV422[][2] =
{
	{ 0xFF, 0x00 },
	{ 0x05, 0x00 },
	{ 0xDA, 0x10 },
	{ 0xD7, 0x03 },
	{ 0xDF, 0x00 },
	{ 0x33, 0x80 },
	{ 0x3C, 0x40 },
	{ 0xe1, 0x77 },
	{ 0x00, 0x00 },
	{ 0xff, 0xff },
};

const char OV2640_JPEG[][2] =  
{
	{ 0xe0, 0x14 },
	{ 0xe1, 0x77 },
	{ 0xe5, 0x1f },
	{ 0xd7, 0x03 },
	{ 0xda, 0x10 },
	{ 0xe0, 0x00 },
	{ 0xFF, 0x01 },
	{ 0x04, 0x08 },
	{ 0xff, 0xff },
}; 

const char OV2640_160x120_JPEG[][2] =  
{
	{ 0xff, 0x01 },
	{ 0x12, 0x40 },
	{ 0x17, 0x11 },
	{ 0x18, 0x43 },
	{ 0x19, 0x00 },
	{ 0x1a, 0x4b },
	{ 0x32, 0x09 },
	{ 0x4f, 0xca },
	{ 0x50, 0xa8 },
	{ 0x5a, 0x23 },
	{ 0x6d, 0x00 },
	{ 0x39, 0x12 },
	{ 0x35, 0xda },
	{ 0x22, 0x1a },
	{ 0x37, 0xc3 },
	{ 0x23, 0x00 },
	{ 0x34, 0xc0 },
	{ 0x36, 0x1a },
	{ 0x06, 0x88 },
	{ 0x07, 0xc0 },
	{ 0x0d, 0x87 },
	{ 0x0e, 0x41 },
	{ 0x4c, 0x00 },
	{ 0xff, 0x00 },
	{ 0xe0, 0x04 },
	{ 0xc0, 0x64 },
	{ 0xc1, 0x4b },
	{ 0x86, 0x35 },
	{ 0x50, 0x92 },
	{ 0x51, 0xc8 },
	{ 0x52, 0x96 },
	{ 0x53, 0x00 },
	{ 0x54, 0x00 },
	{ 0x55, 0x00 },
	{ 0x57, 0x00 },
	{ 0x5a, 0x28 },
	{ 0x5b, 0x1e },
	{ 0x5c, 0x00 },
	{ 0xe0, 0x00 },
	{ 0xff, 0xff },
};










#endif