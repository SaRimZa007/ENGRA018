#include <Arduino.h>
int ButtonPin = 15;
int LedPin[] = {23, 19, 18, 16, 4, 0,};

// put function declarations here:
//int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  //int result = myFunction(2, 3);
  /*
  pinMode(23, OUTPUT);
  pinMode(19, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(0, OUTPUT);
  */
  pinMode(ButtonPin, INPUT_PULLUP);
  for (int i =0; i < 8; i++){
    pinMode(LedPin[i], OUTPUT);
  }
  
  //pinMode(4, OUTPUT);
  //pinMode(0, OUTPUT);

}
int a = 0;
void loop() {
while(a == 0){
  digitalWrite(LedPin[0],HIGH);
  digitalWrite(LedPin[1],LOW);
  digitalWrite(LedPin[2],LOW);
  
  digitalWrite(LedPin[3],LOW);
  digitalWrite(LedPin[4],LOW);
  digitalWrite(LedPin[5],HIGH);
  delay(1000);

  digitalWrite(LedPin[0],HIGH);
  digitalWrite(LedPin[1],LOW);
  digitalWrite(LedPin[2],LOW);

  digitalWrite(LedPin[3],LOW);
  digitalWrite(LedPin[4],HIGH);
  digitalWrite(LedPin[5],LOW);
  delay(1000);

  digitalWrite(LedPin[0],LOW);
  digitalWrite(LedPin[1],LOW);
  digitalWrite(LedPin[2],HIGH);

  digitalWrite(LedPin[3],HIGH);
  digitalWrite(LedPin[4],LOW);
  digitalWrite(LedPin[5],LOW);
  delay(1000);

  digitalWrite(LedPin[0],LOW);
  digitalWrite(LedPin[1],HIGH);
  digitalWrite(LedPin[2],LOW);

  digitalWrite(LedPin[3],HIGH);
  digitalWrite(LedPin[4],LOW);
  digitalWrite(LedPin[5],LOW);
  delay(1000);
while(digitalRead(ButtonPin)==HIGH) a =1;
  }
  
  while(a == 1){
    digitalWrite(LedPin[0],LOW);
    digitalWrite(LedPin[1],LOW);
    digitalWrite(LedPin[2],LOW);
  
    digitalWrite(LedPin[3],LOW);
    digitalWrite(LedPin[4],LOW);
    digitalWrite(LedPin[5],LOW);
    delay(1000);

    digitalWrite(LedPin[0],HIGH);
    digitalWrite(LedPin[1],HIGH);
    digitalWrite(LedPin[2],HIGH);
  
    digitalWrite(LedPin[3],HIGH);
    digitalWrite(LedPin[4],HIGH);
    digitalWrite(LedPin[5],HIGH);
    delay(1000);
    while(digitalRead(ButtonPin)==HIGH) a =0;
    }
  }
