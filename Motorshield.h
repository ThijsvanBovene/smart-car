#include <arduino.h>

#define DIR_CLK 4
#define DIR_EN 7
#define DIR_LATCH 12
#define DIR_SER 8

class motorShield {
  
  public:
  
  static void writeShiftRegisterPin(int pin, int Value); // Sets specified pin to 1 or 0


  private:
  

};
