#include "driver/gpio.h" 

class LED
{
    int PinNumber;
public:
    LED(int PinNumber);
    void ON();
    void OFF();
};