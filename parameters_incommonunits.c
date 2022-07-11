#include <stdio.h>

void tempInCelcius(float *temperature);
{  
 *temperature = ((*temperature) - 32) * 5 / 9; 
  printf("temp %f in celsius\n",*temperature);
}
