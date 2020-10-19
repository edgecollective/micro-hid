/*
  KeyboardAndMouseControl

  Controls the mouse from five pushbuttons on an Arduino Leonardo, Micro or Due.

  Hardware:
  - five pushbuttons attached to D2, D3, D4, D5, D6

  The mouse movement is always relative. This sketch reads four pushbuttons, and
  uses them to set the movement of the mouse.

  WARNING: When you use the Mouse.move() command, the Arduino takes over your
  mouse! Make sure you have control before you use the mouse commands.

  created 15 Mar 2012
  modified 27 Mar 2012
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/KeyboardAndMouseControl
*/

#include "Keyboard.h"

// set pin numbers for the five buttons:
const int oneButton = 11;
const int twoButton = 10;
const int threeButton = 9;

void setup() { // initialize the buttons' inputs:
  pinMode(oneButton, INPUT);
  pinMode(twoButton, INPUT);
  pinMode(threeButton, INPUT);

  Serial.begin(9600);
  Keyboard.begin();
}

void loop() {

//Serial.println(digitalRead(upButton));
  // use the pushbuttons to control the keyboard:
  if (digitalRead(oneButton) == HIGH) {
    Keyboard.write('1');
   // Serial.println('1 high');
    delay(300);
  }
  else if (digitalRead(twoButton) == HIGH) {
   Keyboard.write('2');
       // Serial.println('2 high');

        delay(300);
  }
  else if (digitalRead(threeButton) == HIGH) {
    Keyboard.write('3');
       // Serial.println('3 high');

        delay(300);
  }
  
  /*
  if (digitalRead(rightButton) == HIGH) {
    Keyboard.write('r');
  }
  if (digitalRead(mouseButton) == HIGH) {
    Keyboard.write('m');
  }
*/
}
