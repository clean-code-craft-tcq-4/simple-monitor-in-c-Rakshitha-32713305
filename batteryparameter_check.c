#include "batteryparameters.h"
#include "battery_range_tolerance_handling.h"
#include <stdio.h>


//parameter ranges
const float min_temp = 0;
const float max_temp = 45;
const float min_soc = 20;
const float max_soc = 80;
const float min_CR = 0.0;
const float max_CR = 0.8;

//tolerance levels
 float min_tol_temp =0 ;
 float max_tol_temp =0 ;
 float min_tol_soc =0 ;
 float max_tol_soc =0;
 float min_tol_CR =0 ;
 float max_tol_CR =0;


int tempIsok (float temperature)
{
     int rangecheck_temp = 0 ;
    
     printf("battery temperature:\n");  
     rangecheck_temp = rangecheck (temperature,max_temp,min_temp);     
    
     calculate_tolerance (max_temp,min_temp,&max_tol_temp,&min_tol_temp);
     check_min_warninglevel(temperature,min_temp,min_tol_temp);
     check_max_warninglevel(temperature,max_temp,max_tol_temp);
     check_normal_range (temperature,max_tol_temp,min_tol_temp);
     check_min_breachlevel (temperature,min_temp);
     check_max_breachlevel (temperature,max_temp);
      
     return rangecheck_temp;
}

int socIsok (float soc)
{
     int rangecheck_soc = 0 ;
     
     printf("battery SOC:\n");  
     rangecheck_soc = rangecheck (soc,max_soc,min_soc);
     
     calculate_tolerance (max_soc,min_soc,&max_tol_soc,&min_tol_soc);
     check_min_warninglevel(soc,min_soc,min_tol_soc);
     check_max_warninglevel(soc,max_soc,max_tol_soc);
     check_normal_range (soc,max_tol_soc,min_tol_soc);
     check_min_breachlevel (soc,min_soc);
     check_max_breachlevel (soc,max_soc);
   
     return rangecheck_soc;
}

int chargeRateIsok (float chargeRate)
{
     int rangecheck_CR = 0 ;
     
     printf("battery chargeRate:\n");  
     rangecheck_CR = rangecheck (chargeRate,max_CR,min_CR);
         
     calculate_tolerance (max_CR,min_CR,&max_tol_CR,&min_tol_CR);
     check_min_warninglevel(chargeRate,min_CR,min_tol_CR);
     check_max_warninglevel(chargeRate,max_CR,max_tol_CR);    
     check_normal_range (chargeRate,max_tol_CR,min_tol_CR);
     check_min_breachlevel (chargeRate,min_CR);
     check_max_breachlevel (chargeRate,max_CR);
     
     return rangecheck_CR;
}

