#include <stdio.h>
#include <assert.h>
#include "battery_check.h"

int main() 
{ 
 assert(batteryIsOk(0, 20, 0.8,0)); 
 assert(batteryIsOk(45, 70, 0.8,0)); 
 assert(!batteryIsOk(50, 85, 0,0)); 
 assert(batteryIsOk(5, 24, 0.1,0)); 
 assert(batteryIsOk(43, 80, 0.7,0));
 assert(batteryIsOk(111, 70, 0.7,1));
}
