#include "ch.h"
#include "hal.h"

int main(void) {

	halInit();
	chSysInit();

	palSetPadMode(GPIOD,4, PAL_MODE_INPUT);
	palSetPadMode(GPIOD,6, PAL_MODE_OUTPUT_PUSHPULL);

	while (TRUE) {
		int x;
		x=palReadPad(GPIOD,4);
		if (x){
			palSetPad(GPIOD, 6);
		}
		else{
			palClearPad(GPIOD, 6);
		}

	}
}
