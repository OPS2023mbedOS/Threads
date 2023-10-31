/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include "ledka.h"
Thread thread1;
Thread thread2;
Thread thread3;
#include "display.h"
#include "button.h"

void displayThread(){
    display();
}

void ledThread(){
    ledka();
}

void buttonThread(){
    textOnButton();
}

int main()
{
    thread1.start(displayThread);
    thread2.start(ledThread);
    thread3.start(buttonThread);
    while(true){

    }
}
