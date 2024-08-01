#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "LED.h"

extern "C" void app_main(void);

void app_main(void)
{
    LED led1(5); 
    LED led2(17); 
    while(1)
    {        
        led1.ON();
        led2.OFF();
        vTaskDelay(500/portTICK_PERIOD_MS);
        led1.OFF();
        led2.ON();
        vTaskDelay(500/portTICK_PERIOD_MS);
    }
}