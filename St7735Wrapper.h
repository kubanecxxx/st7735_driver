/*
 * St7735Wrapper.h
 *
 *  Created on: 7.9.2012
 *      Author: kubanec
 */

#ifndef ST7735WRAPPER_H_
#define ST7735WRAPPER_H_

class St7735
{
public:
	static uint16_t GetHeight(void);
	static uint16_t GetWidth(void);
	static void Init(void);
	static void Test(void);
	static void FillRGB(uint16_t color);
	static void DrawPixel(uint16_t x, uint16_t y, uint16_t color);
	static void DrawHLine(uint16_t x0, uint16_t x1, uint16_t y, uint16_t color);
	static void DrawVLine(uint16_t x, uint16_t y0, uint16_t y1, uint16_t color);
	static void Putchar(uint8_t znak, uint16_t x, uint16_t y, uint16_t color,
			uint8_t size);
	static void PutString(const char * data, uint16_t x, uint16_t y,
			uint16_t color, uint8_t size);
	static void PutsStringBackground(const char * data, uint16_t x, uint16_t y,
			uint16_t color, uint16_t background_color, uint8_t size);
};

#endif /* ST7735WRAPPER_H_ */
