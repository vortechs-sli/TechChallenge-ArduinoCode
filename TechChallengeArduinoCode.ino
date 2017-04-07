/* THIS IS TEMPORARY CODE, CODES FOR THREE MOTORS
 * MUST WRITE AUTONOMOUS FLOW CHART TO COMPLETE
 * -kalie 4.6.17
*/

// NOTES:
// 255 is full speed

// you need this so you can use the adafruit motor shield library:
#include <AFMotor.h>

// On port 1 of the motorshield:
AF_DCMotor motor(1, MOTOR12_64KHZ);  

// On port 2 of motorshield:
AF_DCMotor motor2(2, MOTOR12_64KHZ);

// On port 3 of motorshield:
AF_DCMotor motor3(3, MOTOR12_64KHZ);

void setup() {
Serial.begin(9600);           // set up Serial library at 9600 bps
Serial.println("Motor test!");

motor.setSpeed(200);    

motor2.setSpeed(200);

motor3.setSpeed(200);
}

void loop() {
Serial.print("tick");

motor.run(FORWARD);      // turn it on going forward
motor2.run(FORWARD);  // motor 2 goes forward as well
delay(1000);

Serial.print("tock");
motor.run(BACKWARD);     // the other way
motor2.run(BACKWARD);  //again for motor 2
delay(1000);

Serial.print("tack");
motor.run(RELEASE);      // stopped
motor2.run(RELEASE);  // command motor 2 to stop
delay(1000);
}


