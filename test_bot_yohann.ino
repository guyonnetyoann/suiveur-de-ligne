//Bibliotheque Servo
#include <Servo.h>

Servo servo1; // creation

const int pin_servoG = 3; // pin servo gauche


void setup() {
  // put your setup code here, to run once:
  servo1.attach(pin_servoG);
  
}

void loop() {
 servo1.write(0);
  delay (1000);
 servo1.write(180);
  delay (1000);
   servo1.write(90);
  delay (1000);

}
