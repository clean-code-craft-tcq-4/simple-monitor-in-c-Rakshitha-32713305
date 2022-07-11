#include "batteryparameters.h"

int tempIsok (float temperature)
{
     int rangecheck_temp = 0 ;
    
     printf("battery temperature:\n");  
     rangecheck_temp = rangecheck (temperature,max_temp,min_temp);
     
     if (rangecheck_temp == 1)
     {
     calculate_tolerance (max_temp,min_temp,max_tol_temp,min_tol_temp);
     check_min_warninglevel(temperature,min_temp,min_tol_temp);
     check_max_warninglevel(temperature,max_temp,max_tol_temp);
     }
   
     return rangecheck_temp;
}

int socIsok (float soc)
{
     int rangecheck_soc = 0 ;
     
     printf("battery SOC:\n");  
     rangecheck_soc = rangecheck (soc,max_soc,min_soc);
     
     if(rangecheck_soc == 1)
     {
     calculate_tolerance (max_soc,min_soc,max_tol_soc,min_tol_soc);
     check_min_warninglevel(soc,min_soc,min_tol_soc);
     check_max_warninglevel(soc,max_soc,max_tol_soc);
     }
     
     return rangecheck_soc;
}

int chargeRateIsok (float chargeRate)
{
     int rangecheck_CR = 0 ;
     
     printf("battery chargeRate:\n");  
     rangecheck_CR = rangecheck (chargeRate,max_CR,min_CR);
     
     if(rangecheck_CR == 1)
     {
     calculate_tolerance (max_CR,min_CR,max_tol_CR,min_tol_CR);
     check_min_warninglevel(chargeRate,min_CR,min_tol_CR);
     check_max_warninglevel(chargeRate,max_CR,max_tol_CR);
     }
     
     return rangecheck_CR;
}
