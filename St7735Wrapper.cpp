/*
 * St7735Wrapper.cpp
 *
 *  Created on: 7.9.2012
 *      Author: kubanec
 */

#include "st7735_port.h"
#include "st7735_2.h"
#include "St7735Wrapper.h"

uint16_t St7735::GetHeight(void)
{
	return lcdGetHeight();
}
uint16_t St7735::GetWidth(void)
{
	return lcdGetWidth();
}
void St7735::Init(void)
{
	lcdInit();
}
void St7735::Test(void)
{
	lcdTest();
}
void St7735::FillRGB(uint16_t color)
{
	lcdFillRGB(color);
}
void St7735::DrawPixel(uint16_t x, uint16_t y, uint16_t color)
{
	lcdDrawPixel(x, y, color);
}
void St7735::DrawHLine(uint16_t x0, uint16_t x1, uint16_t y, uint16_t color)
{
	lcdDrawHLine(x0, x1, y, color);
}
void St7735::DrawVLine(uint16_t x, uint16_t y0, uint16_t y1, uint16_t color)
{
	lcdDrawVLine(x, y0, y1, color);
}
void St7735::Putchar(uint8_t znak, uint16_t x, uint16_t y, uint16_t color,
		uint8_t size)
{
	lcdPutchar(znak, x, y, color, size);
}
void St7735::PutString(const char * data, uint16_t x, uint16_t y,
		uint16_t color, uint8_t size)
{
	lcdPutString(data, x, y, color, size);
}
void St7735::PutsStringBackground(const char * data, uint16_t x, uint16_t y,
		uint16_t color, uint16_t background_color, uint8_t size)
{
	lcdPutsStringBackground(data, x, y, color, background_color, size);
}
