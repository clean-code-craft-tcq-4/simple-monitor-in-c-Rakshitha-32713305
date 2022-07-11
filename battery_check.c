#include "batteryparameters.h"
#include "battery_check.h"

int is_batteryparam_ok (int ret_temp,int ret_soc,int ret_CR)
{
     return (ret_temp && ret_soc && ret_CR);   
}

int batteryIsOk(float temperature, float soc, float chargeRate)
{
    int ret = 0;
    int ret_temp = 0;
    int ret_soc  = 0;
    int ret_CR   = 0;
    
    ret_temp = tempIsok (temperature);
    ret_soc  = socIsok (soc);
    ret_CR   = chargeRateIsok (chargeRate);
    
    ret = is_batteryparam_ok(ret_temp,ret_soc,ret_CR); 
    
    if(ret == 1)
    {
#if (DISPLAY_LANGUAGE == GERMAN)       
       printf("BATTERIE IST OK\n"); 
#else
       printf("BATTERY IS OK\n");
#endif
    }
    else
    {
#if (DISPLAY_LANGUAGE == GERMAN)      
       printf("BATTERY IS NOT OK\n"); 
#else 
       printf("BATTERIE NICHT OK\n"); 
#endif
    }
     
  return ret;

}
