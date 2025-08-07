#include <Servo.h>

int buttonPin = 12;
int button2Pin = 7;

int servoPin = 3;
Servo Servo1;
int servoPosition = 0;


void setup() {
  Servo1.attach(servoPin);
  Servo1.write(servoPosition);

  Serial.begin(9600);
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  int button2State = digitalRead(button2Pin);

  if (buttonState == HIGH && servoPosition <= 110){
    Servo1.write(servoPosition);
    servoPosition++;
    delay(5);
  }

  if (button2State == HIGH && servoPosition >= 0){
    Servo1.write(servoPosition);
    servoPosition--;
    delay(5);
  }


}
