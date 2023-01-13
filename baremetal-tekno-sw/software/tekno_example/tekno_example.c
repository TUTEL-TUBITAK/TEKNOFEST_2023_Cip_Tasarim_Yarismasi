/*
 *   TEKNOFEST 2023 CHIP DESIGN COMPETITION SOFTWARE EXAMPLE
 *
 * - A example of software created according to the chip design to be designed.
 *
 * - You can create your own test systems by updating the driver and test codes.
 *
 * - Compile Command: make software PROGRAM=tekno_example BOARD=tekno
 *
 */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Drivers for peripherals and extensions //
#include "../../chip/tekno/platform.h"

// Test codes for peripherals and extensions //
#include "test_codes/uart_test.c"
#include "test_codes/spi_test.c"
#include "test_codes/pwm_test.c"
#include "test_codes/accelerator_test.c"
#include "test_codes/cryptography_test.c"

#define CPU_CLK 50000000  // 50 Mhz 
#define BAUD_RATE 115200
	
int main()
{
	// Initializing uart
	uart_ctrl uart_control;
	uart_control.fields.tx_en = 0x1; 
	uart_control.fields.tx_en = 0x1; 
	uart_control.fields.baud_div = CPU_CLK/BAUD_RATE; 
	
	UART_CTRL = uart_control.bits;

	tekno_printf("\n"
	"-------------------------------------------------------------------------------------\n"
	"<<<<<<<<<<<<<< TEKNOFEST 2023 CHIP DESIGN COMPETITION SOFTWARE EXAMPLE >>>>>>>>>>>>>>\n"
	"-------------------------------------------------------------------------------------\n"); 
	
	char buffer[100];
	int length = 0;

 for (;;) {
    tekno_printf("\n[tutel@tubitak.gov.tr ~]$ ");
	
    if (!length) // nothing to be done
		continue;

    if (!strcmp(buffer, "help")) {
		tekno_printf( 
			"\n"
			"Available test commands:\n"
			"  help         : show this text\n"
			"  uart         : UART test codes\n"
			"  spi          : SPI test codes\n"
			"  pwm          : PWM test codes\n"
			"  accel        : Accelerator test codes\n"
			"  cryp         : Cryptography test codes\n\n"
		);
	}
    else if (!strcmp(buffer, "uart")) {
		uart_test();
	}
	else if (!strcmp(buffer, "spi")) {
		spi_test();
	}
	else if (!strcmp(buffer, "pwm")) {
		pwm_test();
	}
	else if (!strcmp(buffer, "accel")) {
		accelerator_test();
	}
	else if (!strcmp(buffer, "cryp")) {
		cryptography_test();
	}
    else {
		tekno_printf("\nInvalid command. Type 'help' to see all commands.\n");
    }
}
	return 0;
}
