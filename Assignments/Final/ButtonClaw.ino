//Code by Trinity Wilkins
#include <Servo.h>

//Creating buttons
int buttonPin = 12;
int button2Pin = 7;

// Creating Servo
int servoPin = 3;
Servo Servo1;
int servoPosition = 0;


void setup() {
  //Sets up Servo
  Servo1.attach(servoPin);
  Servo1.write(servoPosition);

  //Serial.begin(9600);
}

void loop() {
  //Setting up buttons
  int buttonState = digitalRead(buttonPin);
  int button2State = digitalRead(button2Pin);

  //Button for opening the claw
  if (buttonState == HIGH && servoPosition <= 110){
    Servo1.write(servoPosition);
    servoPosition++;
    delay(5);
  }
  //Button for closing the claw
  if (button2State == HIGH && servoPosition >= 0){
    Servo1.write(servoPosition);
    servoPosition--;
    delay(5);
  }
}
