#include <stdio.h>
#include <assert.h>

const float min_temp = 0;
const float max_temp = 45;
const float min_soc = 20;
const float max_soc = 80;
const float max_CR = 0.8;

int tempIsok (float temperature)
{
  if(temperature < min_temp || temperature > max_temp)
  {
    printf("Temperature out of range!\n");
    return 0;
  }
  else
  {
    printf("Temperature is ok!\n");  
    return 1;
  }
}

int socIsok (float soc)
{
  if(soc < min_soc || soc > max_soc)
  {
    printf("State of Charge out of range!\n");
    return 0;
  }
  else
  {
    printf("State of Charge is ok!\n");  
    return 1;
  }
}

int chargeRateIsok (float chargeRate)
{
  if(chargeRate > max_CR)
  {
    printf("Charge Rate out of range!\n");
    return 0;
  }
  else
  {
    printf("Charge Rate is ok!\n");  
    return 1;
  }
}

int is_batteryparam_ok (int ret_temp,int ret_soc,int ret_CR)
{
 if ((ret_temp && ret_soc && ret_CR) == 1 )
    {
     printf("battery is ok!\n");
     return 1;
    }
    else 
    {
     printf("battery is  not ok!\n");
     return 0;  
    }   
}

int batteryIsOk(float temperature, float soc, float chargeRate)
{
    int ret_temp = 0;
    int ret_soc  = 0;
    int ret_CR   = 0;
    
    ret_temp = tempIsok (temperature);
    ret_soc  = socIsok (soc);
    ret_CR   = chargeRateIsok (chargeRate);
    
    is_batteryparam_ok(ret_temp,ret_soc,ret_CR);   

}

int main() 
{
  assert(batteryIsOk(25, 70, 0.7));
  assert(batteryIsOk(0, 20, 0.8));
  assert(batteryIsOk(45, 80, 0.8));
  assert(!batteryIsOk(50, 85, 0));
}
