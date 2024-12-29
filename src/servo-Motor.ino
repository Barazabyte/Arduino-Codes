#include <Servo.h>
int servoPin = 4;
Servo servoMotor;

void setup() {
  // put your setup code here, to run once:
    servoMotor.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  servoMotor.Write(0);
  delay(1000);
  servoMotor.write(45);
  delay(1000);
  servoMotor.write(90);
  delay(1000);
  servoMotor.write(180);
  delay(2000);

}
