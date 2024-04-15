/*
-----------------------------------------------------------
Website: www.physicsandelectronics.com


Main Project : Arrow Indicator Circuit - Arduino Project

**Main Code for the Project**
-----------------------------------------------------------
*/



int led12 = 2;  //led in row=1 ; column=2
int led21 = 3;	//led in row=2 ; column=1
int led23 = 5;  //led in row=2 ; column=3
int led32 = 6;  //led in row=3 ; column=2

int fwd = 7;	//button for forward 
int right = 8;  //button for right 
int left = 10;  //button for left
int back = 9;   //button for back 

int fwdVal;   //Variable to store the state of fwd button (1 when pressed and 0 when not pressed) 
int rightVal; //Variable to store the state of right button (1 when pressed and 0 when not pressed) 
int leftVal;  //Variable to store the state of left button (1 when pressed and 0 when not pressed) 
int backVal;  //Variable to store the state of back button (1 when pressed and 0 when not pressed) 

void setup()
{
  //keeping leds as OUTPUT
  pinMode(led12, OUTPUT);
  pinMode(led21, OUTPUT);
  pinMode(led23, OUTPUT);
  pinMode(led32, OUTPUT);
  
  //Switches will act as INPUT
  pinMode(fwd, INPUT);
  pinMode(right, INPUT);
  pinMode(left, INPUT);
  pinMode(back, INPUT);

  Serial.begin(9600); //Serial monitor to keep a record of what's happening
}

void loop()
{
  //Checking the situation/state of push buttons
  fwdVal = digitalRead(fwd);
  rightVal = digitalRead(right);
  leftVal = digitalRead(left);
  backVal = digitalRead(back);
    
     Serial.println(fwdVal);

  /*Controlling LEDs in order to represent forward sign if forward button is pressed*/
  
  if(fwdVal == 1){
  	digitalWrite(led12, HIGH);
  	digitalWrite(led21, HIGH);
  	digitalWrite(led23, HIGH);
  	digitalWrite(led32, LOW);
    
  }

 
  /*Controlling LEDs in order to represent backward sign if backward button is pressed*/ 
  
  else if(backVal == 1){
    digitalWrite(led12, LOW);
  	digitalWrite(led21, HIGH);
  	digitalWrite(led23, HIGH);
  	digitalWrite(led32, HIGH);
  }
  
  /*Controlling LEDs in order to represent left sign if left button is pressed*/
  
  else if(leftVal == 1){
    digitalWrite(led12, HIGH);
  	digitalWrite(led21, HIGH);
  	digitalWrite(led23, LOW);
  	digitalWrite(led32, HIGH);
  }
  
  /*Controlling LEDs in order to represent right sign if right button is pressed*/
  
  else if(rightVal == 1){
    digitalWrite(led12, HIGH);
  	digitalWrite(led21, LOW);
  	digitalWrite(led23, HIGH);
  	digitalWrite(led32, HIGH);
  }
  
  //If no button is pressed, then keep all leds OFF
  else{
    digitalWrite(led12, LOW);
  	digitalWrite(led21, LOW);
  	digitalWrite(led23, LOW);
  	digitalWrite(led32, LOW);
  }
  
}