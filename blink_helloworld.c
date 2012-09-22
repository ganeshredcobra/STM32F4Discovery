#include "ch.h"
#include "hal.h"

int main(void) {

	halInit();
	chSysInit();

	palSetPadMode(GPIOD, GPIOD_LED4, PAL_MODE_OUTPUT_PUSHPULL); /* Green. */

	while (TRUE) {
		palSetPad(GPIOD, GPIOD_LED4);
		chThdSleepMilliseconds(500);
		palClearPad(GPIOD, GPIOD_LED4);
		chThdSleepMilliseconds(500);
	}
}
