#include <stdio.h>

float tempInCelcius(float temperature)
{  
  float temp =0;
  temp = ((temperature) - 32) * 5 / 9; 
  printf("temp %f in celsius\n",temp);
  return temp;
}
