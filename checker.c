#include <stdio.h>
#include <assert.h>

int main() 
{
  assert(batteryIsOk(25, 70, 0.7));
  assert(batteryIsOk(0, 20, 0.8));
  assert(batteryIsOk(45, 80, 0.8));
  assert(!batteryIsOk(50, 85, 0));
  assert(batteryIsOk(5, 24, 0.1));
  assert(batteryIsOk(43, 79, 0.7));
}
