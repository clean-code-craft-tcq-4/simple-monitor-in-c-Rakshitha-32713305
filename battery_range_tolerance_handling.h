#include "batteryparameters.h"

extern int rangecheck(float input,float max,float min);
extern void calculate_tolerance (float max,float min,float max_tol,float min_tol);
extern void check_min_warninglevel (float input,float min,float min_tol);
extern void check_max_warninglevel (float input,float max,float max_tol);
