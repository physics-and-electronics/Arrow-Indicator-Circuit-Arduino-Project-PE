/*
-----------------------------------------------------------
Website: www.physicsandelectronics.com


Main Project : Arrow Indicator Circuit - Arduino Project

Sub-Code : Blinking of LED
Objective : To understand the controlling of LED with Arduino

-----------------------------------------------------------
*/


int led = 3; //Assigning pin number 3 for LED

void setup()
{
  pinMode(led, OUTPUT); //LED will be acting as OUTPUT
}

void loop()
{
  //Code to blink LED
  
  digitalWrite(led, HIGH); //Turning ON led 
  delay(2000);			   //Keeping it ON for 2 seconds
  digitalWrite(led, LOW);  //Turning OFF led 
  delay(2000);			   //Keeping it OFF for 2 seconds
}
