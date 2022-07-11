#include "batteryparameters.h"
#include "battery_check.h"
#include "parameters_incommonunits.h"


int is_batteryparam_ok (int ret_temp,int ret_soc,int ret_CR)
{
     return (ret_temp && ret_soc && ret_CR);   
}

void update_batterystatus(int ret)
{
   if(ret == 1)
    {      
       printf("BATTERY IS OK\n");
    }
    else
    {
       printf("BATTERY IS NOT OK\n");
    }     
}

int batteryIsOk(float temperature, float soc, float chargeRate, boolean conversion)
{
    int ret = 0;
    int ret_temp = 0;
    int ret_soc  = 0;
    int ret_CR   = 0;
    boolean convert = FALSE;

  if (convert == TRUE)
  {
    tempInCelcius(&temperature);
  }     
    ret_temp = tempIsok (temperature);
    ret_soc  = socIsok (soc);
    ret_CR   = chargeRateIsok (chargeRate);
    
    ret = is_batteryparam_ok(ret_temp,ret_soc,ret_CR); 
    update_batterystatus(ret);
    
     
  return ret;

}
