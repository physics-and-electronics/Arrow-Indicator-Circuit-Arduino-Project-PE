/*
-----------------------------------------------------------
Website: www.physicsandelectronics.com


Main Project : Arrow Indicator Circuit - Arduino Project

Sub-Code : Interfacing of Push Button with Arduino
Objective : To know when is the button pressed and when it is not 

-----------------------------------------------------------
*/

int button =7;
int buttonState;

void setup() {
  // put your setup code here, to run once:
pinMode(button, INPUT); //keeping button as INPUT
Serial.begin(9600); // Because we need Serial Monitor
}

void loop() {
  // put your main code here, to run repeatedly:
buttonState = digitalRead(button); // buttonState stores 1 if button is pressed and 0 if not pressed
Serial.println(buttonState);  //Shows the state of button on Serial monitor
}
