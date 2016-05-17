// for controlling the Adafruit Motorshield via Max or Max for Live or similar
// by Jesse Stiles

#include <Wire.h>
#include <Adafruit_MotorShield.h>
#include "utility/Adafruit_MS_PWMServoDriver.h"

Adafruit_MotorShield AFMS = Adafruit_MotorShield(); 
Adafruit_DCMotor *m1 = AFMS.getMotor(1);
Adafruit_DCMotor *m2 = AFMS.getMotor(2);
Adafruit_DCMotor *m3 = AFMS.getMotor(3);
Adafruit_DCMotor *m4 = AFMS.getMotor(4);

int MIDI1, MIDI2, MIDI3, MIDI4;
int D1, D2, D3, D4;


void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  AFMS.begin();  // create with the default frequency 1.6KHz
}


void loop() {
  
  MIDI1 = Serial.parseInt();
  MIDI2 = Serial.parseInt();
  MIDI3 = Serial.parseInt(); 
  MIDI4 = Serial.parseInt();
  D1 = Serial.parseInt();
  D2 = Serial.parseInt();
  D3 = Serial.parseInt(); 
  D4 = Serial.parseInt();  
  
  m1->setSpeed(MIDI1);
  
  if(D1 == 0){
  m1->run(FORWARD);
  }
  else{
  m1->run(BACKWARD);
  }  
  
  m2->setSpeed(MIDI2);
  
  if(D2 == 0){
  m2->run(FORWARD);
  }
  else{
  m2->run(BACKWARD);
  }  

  m3->setSpeed(MIDI3);
  
  if(D3 == 0){
  m3->run(FORWARD);
  }
  else{
  m3->run(BACKWARD);
  }  
  
  m4->setSpeed(MIDI4);
  
  if(D4 == 0){
  m4->run(FORWARD);
  }
  else{
  m4->run(BACKWARD);
  }  
  
}



