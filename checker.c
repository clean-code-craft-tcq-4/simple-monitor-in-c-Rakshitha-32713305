#include <stdio.h>
#include <assert.h>
#include "battery_check.h"

int main() 
{ 
 assert(batteryIsOk(0, 20, 0.8,FALSE)); 
 assert(batteryIsOk(45, 70, 0.8,FALSE)); 
 assert(!batteryIsOk(50, 85, 0,FALSE)); 
 assert(batteryIsOk(5, 24, 0.1,FALSE)); 
 assert(batteryIsOk(43, 80, 0.7,FALSE));
 assert(batteryIsOk(111, 70, 0.7,TRUE));
}
