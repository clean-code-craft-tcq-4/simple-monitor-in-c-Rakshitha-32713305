#include <stdio.h>
#include "batteryparameters.h"

int rangecheck(float input,float max,float min)
{
  if(input < min || input > max)  
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

void calculate_tolerance (float max,float min,float max_tol,float min_tol)
{
    float tol_level = 0;
    tol_level = ((max) * ((tolerance_level)/100));
    
    max_tol = ( max - tol_level);
    printf ("%f : warning_max_tol!\n",max_tol);
     
    min_tol = ( min + tol_level);
    printf ("%f : warning_min_tol!\n",min_tol);
}



void check_min_warninglevel (float input,float min,float min_tol)
{
  if(input > min && input <= min_tol )  
  {
    printf("WARNING : Approaching least point\n");
  }
}


void check_max_warninglevel (float input,float max,float max_tol)
{
  if (input >= max_tol && input < max )
  {
    printf("WARNING : Approaching peak\n");
  }
}
