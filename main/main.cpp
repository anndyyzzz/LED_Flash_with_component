#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "LED.h"

LED led1(16); 
LED led2(17); 
LED led3(5); 
LED led4(18); 
LED led5(19); 
LED led6(21); 
LED led7(22); 
LED led8(23); 

void ALL_LED_OFF()
{
    led1.OFF();
    led2.OFF();
    led3.OFF();
    led4.OFF();
    led5.OFF();
    led6.OFF();
    led7.OFF();
    led8.OFF();
}

extern "C" void app_main(void)
{
    int i = 0;
    while(1)
    {        
        switch(i)
        {
            case 0:
            led1.ON();
            break;
            case 1:
            led2.ON();
            break;
            case 2:
            led3.ON();
            break;
            case 3:
            led4.ON();
            break;
            case 4:
            led5.ON();
            break;
            case 5:
            led6.ON();
            break;
            case 6:
            led7.ON();
            break;
            case 7:
            led8.ON();
            break;            
        }
        vTaskDelay(100/portTICK_PERIOD_MS);
        ALL_LED_OFF();
        if(i++ >= 7) i = 0;
    }
}   