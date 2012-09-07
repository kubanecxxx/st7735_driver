__ST = st7735

INCDIR += $(__ST) $(__ST)/fonts
CSRC += $(__ST)/st7735_2.c $(__ST)/fonts/fonts.c
ST7735_WRAPPER = $(__ST)/St7735Wrapper.cpp
