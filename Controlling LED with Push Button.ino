/*
-----------------------------------------------------------
Website: www.physicsandelectronics.com


Main Project : Arrow Indicator Circuit - Arduino Project

Sub-Code : Controlling LED with Push Button
Objective : To control LED by Push Button through Arduino 

-----------------------------------------------------------
*/


int led = 8; //Assigning pin number 8 for LED
int pushButton = 7; //Assigning pin number 7 for push button
int buttonState ; //this variable will help us to know whether button is pressed or not

void setup()
{
  pinMode(led, OUTPUT); //LED will be acting as OUTPUT
  pinMode(pushButton, INPUT); //Push Button will act as input
}

void loop()
{
  //Code to control LED with Push Button
  
  
  buttonState = digitalRead(pushButton); //Read the value you are getting from push Button
  
  if(buttonState == 1){ //if button has been pressed
  
    digitalWrite(led, HIGH); // turn the LED ON
  }
  else{
  	digitalWrite(led, LOW); // keep the LED OFF
  }
 }