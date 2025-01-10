/*#include <Arduino.h>
int LED_PIN1 = 23;
int LED_PIN2 = 19;
int LED_PIN3 = 18;
int LED_PIN4 = 5;
int LED_PIN5 = 17;
int LED_PIN6 = 16;
int LED_PIN7 = 4;
int LED_PIN8 = 0;
int potPin= 36;

void setup() {

    pinMode(LED_PIN1, OUTPUT);
    pinMode(LED_PIN2, OUTPUT);
    pinMode(LED_PIN3, OUTPUT);
    pinMode(LED_PIN4, OUTPUT);
    pinMode(LED_PIN5, OUTPUT);
    pinMode(LED_PIN6, OUTPUT);
    pinMode(LED_PIN7, OUTPUT);
    pinMode(LED_PIN8, OUTPUT);

}

void loop() {

    int potValue = analogRead(potPin); 
    int dutyCycle = map(potValue, 0, 4095, 0, 4000);

        digitalWrite(LED_PIN1, LOW); 
        digitalWrite(LED_PIN2, LOW);
        digitalWrite(LED_PIN3, LOW);
        digitalWrite(LED_PIN4, LOW);
        digitalWrite(LED_PIN5, LOW);
        digitalWrite(LED_PIN6, LOW);
        digitalWrite(LED_PIN7, LOW);
        digitalWrite(LED_PIN8, LOW);


    if (dutyCycle >= 0 && dutyCycle < 500 ) {

        digitalWrite(LED_PIN1, HIGH); 
        digitalWrite(LED_PIN2, LOW);
        digitalWrite(LED_PIN3, LOW);
        digitalWrite(LED_PIN4, LOW);
        digitalWrite(LED_PIN5, LOW);
        digitalWrite(LED_PIN6, LOW);
        digitalWrite(LED_PIN7, LOW);
        digitalWrite(LED_PIN8, LOW);


    } else if (dutyCycle >= 500 && dutyCycle < 1000 ) {
        digitalWrite(LED_PIN1, HIGH); 
        digitalWrite(LED_PIN2, HIGH);
        digitalWrite(LED_PIN3, HIGH);
        digitalWrite(LED_PIN4, LOW);
        digitalWrite(LED_PIN5, LOW);
        digitalWrite(LED_PIN6, LOW);
        digitalWrite(LED_PIN7, LOW);
        digitalWrite(LED_PIN8, LOW);
      

    } else if (dutyCycle >= 1000 && dutyCycle < 2000 ) {

        digitalWrite(LED_PIN1, HIGH); 
        digitalWrite(LED_PIN2, HIGH);
        digitalWrite(LED_PIN3, HIGH);
        digitalWrite(LED_PIN4, HIGH);
        digitalWrite(LED_PIN5, HIGH);
        digitalWrite(LED_PIN6, LOW);
        digitalWrite(LED_PIN7, LOW);
        digitalWrite(LED_PIN8, LOW);

   
    }else if (dutyCycle >= 1500 && dutyCycle < 2000 ) {

        digitalWrite(LED_PIN1, HIGH); 
        digitalWrite(LED_PIN2, HIGH);
        digitalWrite(LED_PIN3, HIGH);
        digitalWrite(LED_PIN4, HIGH);
        digitalWrite(LED_PIN5, HIGH);
        digitalWrite(LED_PIN6, HIGH);
        digitalWrite(LED_PIN7, LOW);
        digitalWrite(LED_PIN8, LOW);

   
    }else if (dutyCycle > 2000) {

        digitalWrite(LED_PIN1, HIGH); 
        digitalWrite(LED_PIN2, HIGH);
        digitalWrite(LED_PIN3, HIGH);
        digitalWrite(LED_PIN4, HIGH);
        digitalWrite(LED_PIN5, HIGH);
        digitalWrite(LED_PIN6, HIGH);
        digitalWrite(LED_PIN7, HIGH);
        digitalWrite(LED_PIN8, HIGH);

   
    }

}*/