#include <AccelStepper.h> //library for stepper motor
int bstate;
int pinStep1 = 5;
int pindirection1 = 4;
int enable1 = 8;

AccelStepper mystepper1(1, pinStep1, pindirection1); 

void setup() 
{  
 digitalWrite(enable1 ,HIGH);
 Serial.begin(9600); //initialize the serial port
 pinMode(13, INPUT);
 mystepper1.setMaxSpeed(40000); //set the speed
}
 

void loop()
{
  bstate = digitalRead(13);
  if (bstate == LOW) 
  {
    mystepper1.setSpeed(-1000); //change it to 1000 to move the motor in clockwise direction
    mystepper1.runSpeed();
  }
}
