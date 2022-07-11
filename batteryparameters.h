#include <stdio.h>

//parameter ranges
const float min_temp = 0;
const float max_temp = 45;
const float min_soc = 20;
const float max_soc = 80;
const float min_CR = 0.0;
const float max_CR = 0.8;

extern int tempIsok (float temperature);
extern int socIsok (float soc);
extern int chargeRateIsok (float chargeRate);
