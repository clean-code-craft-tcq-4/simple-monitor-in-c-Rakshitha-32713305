#include <stdio.h>
#include "batteryparameters.h"

const float tolerance_level = 5;

int rangecheck(float input,float l_max,float l_min)
{
  if(input < l_min || input > l_max)  
  {
    printf("%f : out of range!\n",input);
    return 0;
  }
  else
  {
    printf("%f :ok!\n",input);
    return 1;
  }
}

void calculate_tolerance (float l_max,float l_min,float l_max_tol,float l_min_tol)
{
    float tol_level = 0;
    tol_level = ((l_max) * ((tolerance_level)/100));
    
    l_max_tol = ( l_max - tol_level);
    printf ("%f : warning_max_tol!\n",l_max_tol);
     
    l_min_tol = ( l_min + tol_level);
    printf ("%f : warning_min_tol!\n",l_min_tol);
}



void check_min_warninglevel (float input,float l_min,float l_min_tol)
{
  if(input > l_min && input <= l_min_tol )  
  {
    printf("WARNING : Approaching least point\n");
  }
}


void check_max_warninglevel (float input,float l_max,float l_max_tol)
{
  if (input >= l_max_tol && input < l_max )
  {
    printf("WARNING : Approaching peak\n");
  }
}
