#include "mbed.h"
#include "ledka.h"

void ledka(){
    DigitalOut led(LED1);
    while (true) {
        led = !led;
        ThisThread::sleep_for(BLINKING_RATE);
    }
}