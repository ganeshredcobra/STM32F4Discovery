#include "ch.h"
#include "hal.h"

int main(void) {
	halInit();
	chSysInit();
	palSetPadMode(GPIOD, 4, PAL_MODE_OUTPUT_PUSHPULL); /* PD4 */
	while (TRUE) {
		palSetPad(GPIOD, 4);
		chThdSleepMilliseconds(500);
		palClearPad(GPIOD, 4);
		chThdSleepMilliseconds(500);
	}
}
