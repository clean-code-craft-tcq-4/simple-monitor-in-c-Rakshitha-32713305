#include <stdio.h>

//parameter ranges
const float min_temp = 0;
const float max_temp = 45;
const float min_soc = 20;
const float max_soc = 80;
const float min_CR = 0.0;
const float max_CR = 0.8;

//tolerance levels
const float tolerance_level = 5;
const float min_tol_temp ;
const float max_tol_temp ;
const float min_tol_soc ;
const float max_tol_soc;
const float min_tol_CR ;
const float max_tol_CR;

extern int tempIsok (float temperature);
extern int socIsok (float soc);
extern int chargeRateIsok (float chargeRate);
