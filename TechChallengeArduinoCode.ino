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
// Left side
AF_DCMotor motor3(3, MOTOR12_64KHZ);

// On port 4 of motorshield:
// Right side
AF_DCMotor motor4(4, MOTOR12_64KHZ);

void setup() {
Serial.begin(9600);           // set up Serial library at 9600 bps
Serial.println("Motor test!");

motor.setSpeed(255);    

motor2.setSpeed(255);

motor3.setSpeed(180);
  
motor4.setSpeed(180)
}


void loop() {
  
// 9 inches
Serial.print("run");
motor.run(FORWARD);      // turn it on going forward
motor2.run(FORWARD);  // motor 2 - same
delay(1000);

// 90 degrees down
// arm motors
Serial.print("lower");
motor3.run(FORWARD);     // 
motor4.run(FORWARD);  // 
delay(1000);

// 24 inches
Serial.print("run");
motor.run(FORWARD);
motor2.run(FORWARD);
delay(1000);
}

// 
Serial.print("raise");
motor.run(REVERSE);
motor2.run(REVERSE);
delay(1000);
}

// 180 degrees (drive motors)
Serial.print("180");
motor3.run(FORWARD); 
motor4.run(REVERSE); 
delay(1000);
}

// 10 inches
Serial.print("lower");
motor.run(FORWARD);  
motor2.run(REVERSE); 
delay(1000);
}

//
Serial.print("run");
motor.run(RELEASE); 
motor2.run(RELEASE);
delay(1000);
}

