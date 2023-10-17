#include "mbed.h"
#include "button.h"

DigitalIn button(PI_11);

void textOnButton() {
    //init
    while(true) {
        if(button.read()) {
            BSP_LCD_SetBackColor(LCD_COLOR_BLACK);
            BSP_LCD_SetTextColor(LCD_COLOR_ORANGE);
            SP_LCD_DisplayStringAt(0, 100, (uint8_t *)"DISCOVERY STM32F746NG", CENTER_MODE);
            ThisThread::sleep_for(SHOW_TEXT_FOR)
            //turn off text
            ThisThread::sleep_for(SHOW_TEXT_FOR)
        }
    }
}