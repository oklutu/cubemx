#include "led.h"

void LED_Control(uint8_t status){
    if (status == LED_ON)
        {LED_1_ON();
         LED_2_ON();
    
    
        }else if(status == LED_OFF){
        LED_1_OFF();
         LED_2_OFF();
        }        
}