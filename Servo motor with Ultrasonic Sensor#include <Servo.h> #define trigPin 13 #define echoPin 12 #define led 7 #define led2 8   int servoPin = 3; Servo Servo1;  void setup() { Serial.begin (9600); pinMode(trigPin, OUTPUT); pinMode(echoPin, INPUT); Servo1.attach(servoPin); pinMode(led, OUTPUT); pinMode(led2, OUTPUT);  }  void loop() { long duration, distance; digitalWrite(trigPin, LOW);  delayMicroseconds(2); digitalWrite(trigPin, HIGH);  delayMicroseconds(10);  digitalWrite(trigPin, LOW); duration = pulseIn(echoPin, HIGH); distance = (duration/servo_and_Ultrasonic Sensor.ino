#include <Servo.h>
#define trigPin 13
#define echoPin 12
#define led 7
#define led2 8


int servoPin = 3;
Servo Servo1;

void setup() {
Serial.begin (9600);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
Servo1.attach(servoPin);
pinMode(led, OUTPUT);
pinMode(led2, OUTPUT);

}

void loop() {
long duration, distance;
digitalWrite(trigPin, LOW); 
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);

delayMicroseconds(10); 
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = (duration/2) * 0.029;
if (distance < 40) { 
Servo1.write(90); 
digitalWrite(led2,HIGH);
digitalWrite(led,LOW);
 delay(10000);
}else{
  Servo1.write(0);
  digitalWrite(led2,LOW);
  digitalWrite(led,HIGH);
 
}

if (distance >= 200 || distance <= 0){
Serial.println("Out of range");
}
else {
Serial.print(distance);
Serial.println(" cm");
}
 delay(500);
}
