#include <ZumoMotors.h>

ZumoMotors motors;

// Drift correction factor (tune this value)
const int driftCorrectionRight = 6;  // Adjust this value for left drift correction

// Function to move forward
void moveForward(int duration) {
  int leftSpeed = 200;                          // Default speed for left motor
  int rightSpeed = 200 - driftCorrectionRight;  // Slower right motor to correct drift

  motors.setSpeeds(leftSpeed, rightSpeed);
  delay(duration);
  motors.setSpeeds(0, 0);  // Stop after the specified duration
}

void moveBackward(int duration) {
  int leftSpeed = -200;                          // Default speed for left motor
  int rightSpeed = -200 + 5.5;  // Slower right motor to correct drift

  motors.setSpeeds(leftSpeed, rightSpeed);
  delay(duration);
  motors.setSpeeds(0, 0);  // Stop after the specified duration
}

// Function to turn left
void turnLeft() {
  int leftSpeed = -150;  // Reverse left motor
  int rightSpeed = 150;  // Forward right motor

  motors.setSpeeds(leftSpeed, rightSpeed);
  delay(380);
  motors.setSpeeds(0, 0);  // Stop after the specified duration
}

// Function to turn right
void turnRight() {
  int leftSpeed = 150;    // Forward left motor
  int rightSpeed = -150;  // Reverse right motor

  motors.setSpeeds(leftSpeed, rightSpeed);
  delay(380);
  motors.setSpeeds(0, 0);  // Stop after the specified duration
}

void setup() {
  // Nothing needed in setup for now
}

// 1539 - 50cm
// 825 - 25 cm
/*moveForward(825);
  delay(1000);
  turnRight();
  delay(1000);
  moveForward(1400);
  delay(1000);
  turnLeft();
  delay(1000);
  moveForward(2800);
  delay(1000);
  turnLeft();
  delay(1000);
  moveForward(2800);
  delay(1000);
  turnRight();
  delay(1000);
  moveForward(1400);
  delay(100000);*/
void loop() {
  moveForward(825);
  delay(1000);
  turnRight();
  delay(1000);
  moveForward(2800);
  delay(1000);
  turnLeft();
  delay(1000);
  moveForward(1400);
  delay(1000);
  turnRight();
  delay(1000);
  turnRight();
  delay(1000);
  moveForward(1400);
  delay(1000);
  turnRight();
  delay(1000);
  moveForward(1400);
  delay(1000);
  turnRight();
  delay(1000);
  moveForward(4200);
  delay(1000);
  turnLeft();
  delay(1000);
  moveForward(2800);
  delay(1000);
}
