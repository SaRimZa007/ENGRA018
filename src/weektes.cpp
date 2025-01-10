/*#include <Arduino.h>
int potPin = 36;
int potPin1 = 39 ; 
int led1 = 23;
int led2 = 18;
int led3 = 17;
int led4 = 4;
int led5 = 19;
int led6 = 5;
int led7 = 16;
int led8 = 0;

void setup()
{
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);
  ledcSetup(0,5000,8);
}

void loop()
{
    int potValue = analogRead(potPin);
    int potValue1 = analogRead(potPin1);
    int dutyCycle = map(potValue,0,4095,0,255);
    int dutyCycle1 = map(potValue1,0,4095,0,255);
    ledcWrite(0,dutyCycle);
    ledcWrite(0,dutyCycle1);
    delay(10);

    if(potValue <1 )
    {
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
    }
    else if(potValue >1 && potValue <= 1023)
    {
      digitalWrite(led1,HIGH);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
    }
    else if(potValue >= 1023 && potValue <= 2046) 
    {
      digitalWrite(led1,HIGH);
      digitalWrite(led2,HIGH);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
    }
    else if(potValue >= 2046 && potValue <= 3068)
    {
      digitalWrite(led1,HIGH);
      digitalWrite(led2,HIGH);
      digitalWrite(led3,HIGH);
      digitalWrite(led4,LOW);
    }
    else if(potValue >= 3068)
    {
      digitalWrite(led1,HIGH);
      digitalWrite(led2,HIGH);
      digitalWrite(led3,HIGH);
      digitalWrite(led4,HIGH);
    }
    
    if(potValue1 <1 )
    {
      digitalWrite(led5,LOW);
      digitalWrite(led6,LOW);
      digitalWrite(led7,LOW);
      digitalWrite(led8,LOW);
    }
    else if(potValue1 > 1 && potValue1 <= 1023)
    {
      digitalWrite(led5,HIGH);
      digitalWrite(led6,LOW);
      digitalWrite(led7,LOW);
      digitalWrite(led8,LOW);
    }
    else if(potValue1 >= 1023 && potValue1 <= 2046)
    {
      digitalWrite(led5,HIGH);
      digitalWrite(led6,HIGH);
      digitalWrite(led7,LOW);
      digitalWrite(led8,LOW);
    }
    else if(potValue1 >= 2046 && potValue <= 3068)
    {
      digitalWrite(led5,HIGH);
      digitalWrite(led6,HIGH);
      digitalWrite(led7,HIGH);
      digitalWrite(led8,LOW);
    }
    else if(potValue1 >= 3068)
    {
      digitalWrite(led5,HIGH);
      digitalWrite(led6,HIGH);
      digitalWrite(led7,HIGH);
      digitalWrite(led8,HIGH);
      
}

  if (potValue >=4095 && potValue1 <= 4095)
    {
      digitalWrite(led8,HIGH);
      digitalWrite(led8,LOW);
      delay(1000);
      digitalWrite(led7,HIGH);
      digitalWrite(led7,LOW);
        delay(1000);
      digitalWrite(led6,HIGH);
       digitalWrite(led6,LOW);
        delay(1000);
      digitalWrite(led5,HIGH);
      digitalWrite(led5,LOW);
        delay(1000);
      digitalWrite(led4,HIGH);
       digitalWrite(led4,LOW);
        delay(1000);
      digitalWrite(led3,HIGH);
      digitalWrite(led3,LOW);
        delay(1000);
      digitalWrite(led2,HIGH);
        digitalWrite(led2,LOW);
        delay(1000);
      digitalWrite(led1,HIGH);
       digitalWrite(led1,LOW);
      delay(1000);
     

    } 
}
*/
    