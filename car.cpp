#include "car.h"

motor motorRV(M4A, M4B, PWM0B, 0, 0);
motor motorRA(M3B, M3A, PWM0A, 0, 0);
motor motorLV(M1A, M1B, PWM2A, 26, 0);
motor motorLA(M2A, M2B, PWM2B, 0, 0);


void car::driveforward(int Speed) {
  motorRV.setSpeed(Speed, forward);
  motorRA.setSpeed(Speed, forward);
  motorLV.setSpeed(Speed, forward);
  motorLA.setSpeed(Speed, forward);
}
void car::drivebackward(int Speed) {
  motorRV.setSpeed(Speed, backwards);
  motorRA.setSpeed(Speed, backwards);
  motorLV.setSpeed(Speed, backwards);
  motorLA.setSpeed(Speed, backwards);
}
void car::driveright(int Speed) {
  motorRV.setSpeed(Speed, backwards);
  motorRA.setSpeed(Speed, forward);
  motorLV.setSpeed(Speed, forward);
  motorLA.setSpeed(Speed, backwards);
}
void car::driveleft(int Speed) {
  motorRV.setSpeed(Speed, forward);
  motorRA.setSpeed(Speed, backwards);
  motorLV.setSpeed(Speed, backwards);
  motorLA.setSpeed(Speed, forward);
}
void car::Stop(){
  motorRV.Stop();
  motorRA.Stop();
  motorLV.Stop();
  motorLA.Stop();
}
void car::driveturnright(int Speed) {
  motorRV.setSpeed(Speed-5, backwards);
  motorRA.setSpeed(Speed-5, backwards);
  motorLV.setSpeed(Speed+10, forward);
  motorLA.setSpeed(Speed+10, forward);
}
void car::driveturnleft(int Speed) {
  motorRV.setSpeed(Speed+10, forward);
  motorRA.setSpeed(Speed+10, forward);
  motorLV.setSpeed(Speed-5, backwards);
  motorLA.setSpeed(Speed-5, backwards);
}
