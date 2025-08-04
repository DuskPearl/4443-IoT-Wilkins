// Ultrasonic Distance Measurement with HC-SR04
// Platform: Arduino (Uno/Nano/Etc.)
// Code given by teacher and altered by Trinity Wilkins

const int trigPin = 11;   // TRIG pin of HC-SR04
const int echoPin = 12;  // ECHO pin of HC-SR04
const int green1 = 2;
const int green2 = 3;
const int yellow1 = 4;
const int yellow2 = 5;
const int red1 = 6;
const int red2 = 7;

void setup() {
  Serial.begin(9600);          // Start serial communication
  pinMode(trigPin, OUTPUT);    // TRIG is an output
  pinMode(echoPin, INPUT);     // ECHO is an input
  pinMode(7,OUTPUT);

  pinMode(green1, OUTPUT);
  pinMode(green2, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(red1, OUTPUT);
  pinMode(red2, OUTPUT);
}

void loop() {
  long duration;
  float distance_cm;

  // Clear the TRIG pin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Send a 10 microsecond pulse to TRIG
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the echo pulse duration (microseconds)
  duration = pulseIn(echoPin, HIGH);

  // Calculate the distance (cm)
  // Speed of sound = 343 m/s = 0.0343 cm/us
  distance_cm = (duration * 0.0343) / 2;

  // Print to Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");

  delay(500);  // Wait half a second before next measurement

  // Lights begin to turn on incrementally if the distance 
  // registered is less than 180 cm from the sensor
  if (distance_cm < 180) { 
    
    // All lights turn on at less than 30cm
      if (distance_cm > 0 && distance_cm < 30){
        digitalWrite(green1, HIGH);
        digitalWrite(green2, HIGH);
        digitalWrite(yellow1, HIGH);
        digitalWrite(yellow2, HIGH);
        digitalWrite(red1, HIGH);
        digitalWrite(red2, HIGH);
    
    // All lights up to red 1 turn on at less than 60cm
      } else if (distance_cm > 30 && distance_cm < 60){
        digitalWrite(green1, HIGH);
        digitalWrite(green2, HIGH);
        digitalWrite(yellow1, HIGH);
        digitalWrite(yellow2, HIGH);
        digitalWrite(red1, HIGH);
        digitalWrite(red2, LOW);
    
    // All lights up to yellow 2 turn on at less than 90cm
      } else if (distance_cm > 60 && distance_cm < 90){
        digitalWrite(green1, HIGH);
        digitalWrite(green2, HIGH);
        digitalWrite(yellow1, HIGH);
        digitalWrite(yellow2, HIGH);
        digitalWrite(red1, LOW);
        digitalWrite(red2, LOW);
    
    // All lights up to yellow 1 turn on at less than 120cm
      } else if (distance_cm > 90 && distance_cm < 120){
        digitalWrite(green1, HIGH);
        digitalWrite(green2, HIGH);
        digitalWrite(yellow1, HIGH);
        digitalWrite(yellow2, LOW);
        digitalWrite(red1, LOW);
        digitalWrite(red2, LOW);
    
    // Both green lights turn on at less than 150cm
       } else if (distance_cm > 120 && distance_cm < 150 ){
        digitalWrite(green1, HIGH);
        digitalWrite(green2, HIGH);
        digitalWrite(yellow1, LOW);
        digitalWrite(yellow2, LOW);
        digitalWrite(red1, LOW);
        digitalWrite(red2, LOW);
    
    // Only green 1 light turns on at less than 180cm
        } else if (distance_cm > 150 && distance_cm < 180 ){
        digitalWrite(green1, HIGH);
        digitalWrite(green2, LOW);
        digitalWrite(yellow1, LOW);
        digitalWrite(yellow2, LOW);
        digitalWrite(red1, LOW);
        digitalWrite(red2, LOW);
        }
  } else {
    // Turn off all LEDs when not close
      digitalWrite(green1, LOW);
      digitalWrite(green2, LOW);
      digitalWrite(yellow1, LOW);
      digitalWrite(yellow2, LOW);
      digitalWrite(red1, LOW);
      digitalWrite(red2, LOW);
  
    delay(500);  
  }
}
