#include <Servo.h>
#include <pwmWrite.h>

//Bennenung der Pins
//Motor
#define Motorpwm 25
#define Motorrichtung1 26
#define Motorrichtung2 27

//Servo
#define Servo1 32


//Deklaration Variablen
//Bool (0/1) 
bool Motorbetrieb;

//Integer (-32767 bis 32767)
int Motordrehzahl,Servopos;



void setup() {
// put your setup code here, to run once:
//Pinmode
pinMode(Motorpwm, OUTPUT);
pinMode(Motorrichtung1,OUTPUT);
pinMode(Motorrichtung2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
}
