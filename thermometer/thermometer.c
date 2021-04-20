#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "hardware/adc.h"

int main(){
	stdio_init_all();
    adc_init();
	//gpio_init(0);
    //gpio_set_dir(0, GPIO_OUT);

    adc_gpio_init(28);
    adc_select_input(adc_pin);

	//gpio_set_outover(0, 1);

    //int T = 27 - (((machine.ADC(4).read_u16() * (3.3 / 65535)) - 0.706) / 0.001721);
    double T = 27 - (ADC_voltage - 0.706)/0.001721;

    while (true) {

        /*
        gpio_put(0, 1);
        sleep_ms(500);
        gpio_put(0, 0);
        sleep_ms(500);
        */
    }

	return 0;
}