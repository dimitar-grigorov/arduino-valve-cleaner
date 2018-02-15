#include <Arduino.h>
#include <elapsedMillis.h>

#define RELAY1  7
#define PotPin A0

//int sleepTime = 25;
//--------------------------------
//int relayState = LOW;              // ledState used to set the LED
//// Generally, you should use "unsigned long" for variables that hold time
//unsigned long previousMillis = 0;  // will store last time LED was updated
//long relayClickInterval = 1000;    // interval at which to blink (milliseconds)
//--------------------------------

elapsedMillis timeElapsed;

void setup()
{
  //Serial.begin(9600);
  pinMode(RELAY1, OUTPUT);
}

void loop()
{
  // read the input on analog pin A0:
  //sleepTime = map(analogRead(PotPin), 0, 1023, 12, 400);
  //Serial.println(sleepTime);

  // if (timeElapsed>=0 && timeElapsed<=5000) {
  //   TurnOnAndOffRelay(200);
  // } else if (timeElapsed>5000 && timeElapsed<=10000) {
  //   TurnOnAndOffRelay(150);
  // } else if (timeElapsed>10000 && timeElapsed<=15000) {
  //   TurnOnAndOffRelay(100);
  // } else if (timeElapsed>15000 && timeElapsed<=20000) {
  //   TurnOnAndOffRelay(80);
  // } else if (timeElapsed>20000 && timeElapsed<=25000) {
  //   TurnOnAndOffRelay(50);
  // } else if (timeElapsed>25000 && timeElapsed<=30000) {
  //   TurnOnAndOffRelay(40);
  // }else if (timeElapsed>30000 && timeElapsed<=35000) {
  //   TurnOnAndOffRelay(30);
  // }else if (timeElapsed>35000 && timeElapsed<=40000) {
  //   TurnOnAndOffRelay(20);
  //   timeElapsed = 0;
  // }else if (timeElapsed>40000 && timeElapsed<=45000) {
  //   TurnOnAndOffRelay(15);
  // }else if (timeElapsed>45000){
  //   timeElapsed = 0;
  // }

  for (int i = 120; i>=60; --i){
    TurnOnAndOffRelay(i);
    //TurnOnAndOffRelay(i);
  }

  for (int i = 60; i>=32; --i){
    TurnOnAndOffRelay(i);
    TurnOnAndOffRelay(i);
    TurnOnAndOffRelay(i);
    TurnOnAndOffRelay(i);
  }

  for (int i = 32; i>=15; --i){
    TurnOnAndOffRelay(i);
    TurnOnAndOffRelay(i);
    TurnOnAndOffRelay(i);
    TurnOnAndOffRelay(i);
    TurnOnAndOffRelay(i);
    TurnOnAndOffRelay(i);
    TurnOnAndOffRelay(i);
    TurnOnAndOffRelay(i);
    TurnOnAndOffRelay(i);
    TurnOnAndOffRelay(i);
  }
}

void TurnOnAndOffRelay(unsigned short slpT)
{
   digitalWrite(RELAY1, LOW);           // Turns ON Relays 1
   delay(slpT);
   digitalWrite(RELAY1, HIGH);          // Turns Relay Off
   delay(slpT);
}

//void RelayTest()
//{
//  unsigned long currentMillis = millis();
//  if (currentMillis - previousMillis >= relayClickInterval) {
//    // save the last time you blinked the LED
//    previousMillis = currentMillis;
//    // if the LED is off turn it on and vice-versa:
//    relayState = !relayState;
//    // set the LED with the ledState of the variable:
//    digitalWrite(RELAY1, relayState);
//  }
//}
