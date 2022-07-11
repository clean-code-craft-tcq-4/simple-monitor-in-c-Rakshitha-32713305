#include "batteryparameters.h"

extern int rangecheck(float input,float l_max,float l_min);
extern void calculate_tolerance (float l_max,float l_min,float *l_max_tol,float *l_min_tol);
extern void check_min_warninglevel (float input,float l_min,float l_min_tol);
extern void check_max_warninglevel (float input,float l_max,float l_max_tol);
