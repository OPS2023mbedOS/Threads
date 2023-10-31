#include "button.h"
#include "mbed.h"

bool pushed = false;

void viewText() {
    pushed=true;
}
InterruptIn button(PI_11);

void textOnButton() {
  BSP_LCD_Init();
  BSP_LCD_LayerDefaultInit(LTDC_ACTIVE_LAYER, LCD_FB_START_ADDRESS);
  BSP_LCD_SelectLayer(LTDC_ACTIVE_LAYER);
  button.rise(&viewText);

  while (true) {
    if (pushed) {
      BSP_LCD_SetBackColor(LCD_COLOR_BLACK);
      BSP_LCD_SetTextColor(LCD_COLOR_ORANGE);
      BSP_LCD_DisplayStringAt(0, 100, (uint8_t *)"Kliknuti tlacitka",
                              CENTER_MODE);
      ThisThread::sleep_for(SHOW_TEXT_FOR);
      BSP_LCD_SetBackColor(LCD_COLOR_BLACK);
      BSP_LCD_SetTextColor(LCD_COLOR_BLACK);
      BSP_LCD_DisplayStringAt(0, 100, (uint8_t *)"Kliknuti tlacitka",
                              CENTER_MODE);
      pushed = false;
    }
  }
}