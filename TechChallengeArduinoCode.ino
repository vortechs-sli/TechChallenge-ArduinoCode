/* THIS IS TEMPORARY CODE, CODES FOR THREE MOTORS
 * MUST WRITE AUTONOMOUS FLOW CHART TO COMPLETE
 * -kalie 4.6.17
*/

// NOTES:
// 255 is full speed

// you need this so you can use the adafruit motor shield library:
#include <AFMotor.h>

// driving motors

// On port 1 of the motorshield:
AF_DCMotor motor1(1, MOTOR12_64KHZ);  

// On port 2 of motorshield:
AF_DCMotor motor2(2, MOTOR12_64KHZ);

// reeling motors

// On port 3 of motorshield:
// Left side
AF_DCMotor motor3(3, MOTOR12_64KHZ);

// On port 4 of motorshield:
// Right side
AF_DCMotor motor4(4, MOTOR12_64KHZ);

void setup() {
Serial.begin(9600);           // set up Serial library at 9600 bps
Serial.println("Motor testing");

motor.setSpeed(255);    

motor2.setSpeed(255);

motor3.setSpeed(180);
  
motor4.setSpeed(180);

}


void loop() {
  
// 9 inches
Serial.print("run");
  
motor1.run(FORWARD);     
motor2.run(FORWARD);  
  
motor3.run(RELEASE);
motor4.run(RELEASE); 
  
delay(1000);  //

// 90 degrees down
// arm motors
Serial.print("lower");
  
motor3.run(FORWARD);   
motor4.run(FORWARD); 
  
motor1.run(RELEASE);
motor2.run(RELEASE); 
  
delay(1000);  //

// 24 inches
// drive across
Serial.print("run");
  
motor1.run(FORWARD);
motor2.run(FORWARD);
  
motor3.run(RELEASE);
motor4.run(RELEASE); 
  
delay(10000);  //
}

// 90 degrees up
// arm motors
// picks up at back of the robot chassis
Serial.print("raise at back");

motor1.run(RELEASE);
motor2.run(RELEASE);

motor3.run(REVERSE);
motor4.run(REVERSE); 

delay(10000);  //
}

// 180 degrees (drive motors)
Serial.print("180");

motor3.run(RELEASE);
motor4.run(RELEASE); 

motor1.run(FORWARD);
motor2.run(REVERSE); 

delay(10000);  //
}

// 30 inches
Serial.print("run");

motor1.run(FORWARD); 
motor2.run(FORWARD);

motor3.run(RELEASE);
motor4.run(RELEASE); 

delay(10000);
}

// 
Serial.print("lower");

motor3.run(FORWARD);  
motor4.run(FORWARD); 

motor1.run(RELEASE);
motor2.run(RELEASE); 

delay(10000);  //
}

//
Serial.print("run");

motor1.run(FORWARD); 
motor2.run(FORWARD); 

motor3.run(RELEASE);
motor4.run(RELEASE); 

delay(10000);
}

Serial.print("stop");

motor1.run(RELEASE); 
motor2.run(RELEASE);

motor3.run(RELEASE);
motor4.run(RELEASE); 

delay(10000);
}

