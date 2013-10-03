/*
	filename	: hello.c
	kegunaan	: mengetes cc2530, menyalakan lampu led kedip-kedip
				  dengan interval waktu 50 ms
*/	

/***********************************************************************************
* INCLUDES
*/

#include <hal_lcd.h>
#include <hal_led.h>
#include <hal_joystick.h>
#include <hal_board.h>
#include <hal_int.h>
#include <hal_assert.h>
#include "hal_rf.h"
#include "util.h"
#include "hal_rf_util.h"
#include "util_lcd.h"

void main(void)
{
    // Initalise board peripherals
    halBoardInit();

    // Initalise hal_rf
    if(halRfInit()==FAILED) {
      HAL_ASSERT(FALSE);
    }
    // Indicate that device is powered
    halLedSet(1);

    // Print Logo and splash screen on LCD
    utilPrintLogo("Agus Reza");
    halMcuWaitMs(3000);

    halLedSet(4);

    while (1) {
    halLedToggle(3);
    halMcuWaitMs(50);
    }

}

