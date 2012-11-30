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
	inline static uint16_t GetHeight(void)
	{
		return lcdGetHeight();
	}
	inline static uint16_t GetWidth(void)
	{
		return lcdGetWidth();
	}
	inline static void Init(void)
	{
		lcdInit();
	}
	inline static void Test(void)
	{
		lcdTest();
	}
	inline static void FillRGB(uint16_t color)
	{
		lcdFillRGB(color);
	}
	inline static void DrawPixel(uint16_t x, uint16_t y, uint16_t color)
	{
		lcdDrawPixel(x, y, color);
	}
	inline static void DrawHLine(uint16_t x0, uint16_t x1, uint16_t y,
			uint16_t color)
	{
		lcdDrawHLine(x0, x1, y, color);
	}
	inline static void DrawVLine(uint16_t x, uint16_t y0, uint16_t y1,
			uint16_t color)
	{
		lcdDrawVLine(x, y0, y1, color);
	}
	inline static void Putchar(uint8_t znak, uint16_t x, uint16_t y,
			uint16_t color, uint8_t size)
	{
		lcdPutchar(znak, x, y, color, size);
	}
	inline static void PutString(const char * data, uint16_t x, uint16_t y,
			uint16_t color, uint8_t size)
	{
		lcdPutString(data, x, y, color, size);
	}
	inline static void PutsStringBackground(const char * data, uint16_t x,
			uint16_t y, uint16_t color, uint16_t background_color, uint8_t size)
	{
		lcdPutsStringBackground(data, x, y, color, background_color, size);
	}

	inline static void DrawLine(uint16_t x0, uint16_t x1, uint16_t y0,
			uint16_t y1, uint16_t color)
	{
		lcdDrawLine(x0, y0, x1, y1, color);
	}
	inline static void DrawRectangle(uint16_t x1, uint16_t y1, uint16_t x2,
			uint16_t y2, uint16_t color)
	{
		lcdDrawRectangle(x1, y1, x2, y2, color);
	}
};

#endif /* ST7735WRAPPER_H_ */
