#include <Servo.h>

Servo myServo3;
Servo myServo4;
Servo myServo5;
Servo myServo6;

int value =0;
int prevValue=0;

void setup() {
  Serial.begin(9600);
  myServo3.attach(3);
  myServo4.attach(4);
  myServo5.attach(5);
  myServo6.attach(6);
  pinMode(2,INPUT);

  myServo3.write(10); // patte AVD Tourner
  myServo4.write(170); // patte AVG Tourner
  myServo5.write(40); // patte AVD Lever/Poser
  myServo6.write(40); // patte AVG Lever/Poser 
}

void loop() {

  value = digitalRead(7);

  //Serial.println(value);

  delay(10);
 
  if(value!=prevValue)
  {

    //Lever  5 poser  6
    setServo( myServo6, 40);
    setServo( myServo5, 130);

    delay(1000);

    //Avancer  3 reculer 4
    setServo( myServo3, 170);
    setServo( myServo4, 10);

    delay(1000);

    // Lever  6 poser  5
    setServo( myServo5, 40);
    setServo( myServo6, 130);

    delay(1000);

    // Avancer 4 reculer 3
    setServo( myServo4, 170);
    setServo( myServo3, 10);

    delay(1000);
    
  }

  
  prevValue = value;
}
