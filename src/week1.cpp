/*#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

#define I2C_SDA 21
#define I2C_SCL 22
int ButtonPin = 15;
int LedPin[] = {23, 19, 18, 5, 17, 16, 4, 0,}; 

LiquidCrystal_I2C lcd(0x27, 20, 4); // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup(){
    for (int i = 0; i < 8; i++) {
    pinMode(LedPin[i], OUTPUT);
  }
  pinMode(ButtonPin, INPUT_PULLUP);
	lcd.init(I2C_SDA, I2C_SCL); // initialize the lcd to use user defined I2C pins
	lcd.backlight();
	lcd.setCursor(0,0);
	lcd.print("Menu: 0");
  delay(500);
}


void loop(){
  static int menu = 0;  // ตัวแปรเก็บเมนูที่เลือก
  int switchState = digitalRead(ButtonPin);  // อ่านสถานะของสวิตช์
    if (switchState == HIGH) {
    delay(300);  // ให้เวลา Debouncing ให้สวิตช์มีเวลาหยุดสักนิด

    // เปลี่ยนเมนูที่เลือก
    menu = (menu % 6) + 1;  // สลับเมนูจาก 1-6
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Menu: ");
    lcd.print(menu);  // แสดงเมนูที่เลือก
    delay(500);  // ให้เวลาสำหรับแสดงผลบนจอ LCD
    }
    // ใช้ switch-case เพื่อจัดการการเลือกเมนู
    switch (menu) {
      case 1:
        // เมนู 1: LED ทั้ง 8 หลอดเปิดพร้อมกัน
        for (int i = 0; i < 8; i++) {
          digitalWrite(LedPin[i], HIGH);
        }
        break;
      case 2:
         for (int i = 0; i < 8; i++) {
            digitalWrite(LedPin[0],LOW);
            digitalWrite(LedPin[1],HIGH);
            digitalWrite(LedPin[2],LOW);
            digitalWrite(LedPin[3],HIGH);
            digitalWrite(LedPin[4],LOW);
            digitalWrite(LedPin[5],HIGH);
            digitalWrite(LedPin[6],LOW);
            digitalWrite(LedPin[7],HIGH);
            delay(200);
            digitalWrite(LedPin[0],HIGH);
            digitalWrite(LedPin[1],LOW);
            digitalWrite(LedPin[2],HIGH);
            digitalWrite(LedPin[3],LOW);
            digitalWrite(LedPin[4],HIGH);
            digitalWrite(LedPin[5],LOW);
            digitalWrite(LedPin[6],HIGH);
            digitalWrite(LedPin[7],LOW);
            delay(200);
        }
        break;
      case 3:
       for (int i = 0; i < 8; i++) {
            digitalWrite(LedPin[0],LOW);
            digitalWrite(LedPin[1],LOW);
            digitalWrite(LedPin[2],LOW);
            digitalWrite(LedPin[3],LOW);
            digitalWrite(LedPin[4],LOW);
            digitalWrite(LedPin[5],LOW);
            digitalWrite(LedPin[6],LOW);
            digitalWrite(LedPin[7],LOW);
            delay(200);
            digitalWrite(LedPin[0],HIGH);
            delay(200);
            digitalWrite(LedPin[1],HIGH);
            delay(200);
            digitalWrite(LedPin[2],HIGH);
            delay(200);
            digitalWrite(LedPin[3],HIGH);
            delay(200);
            digitalWrite(LedPin[4],HIGH);
            delay(200);
            digitalWrite(LedPin[5],HIGH);
            delay(200);
            digitalWrite(LedPin[6],HIGH);
            delay(200);
            digitalWrite(LedPin[7],HIGH);
            delay(200);
       }
       break;
      case 4:
       for (int i = 0; i < 8; i++) {
            digitalWrite(LedPin[0],LOW);
            digitalWrite(LedPin[1],LOW);
            digitalWrite(LedPin[2],LOW);
            digitalWrite(LedPin[3],LOW);
            digitalWrite(LedPin[4],LOW);
            digitalWrite(LedPin[5],LOW);
            digitalWrite(LedPin[6],LOW);
            digitalWrite(LedPin[7],LOW);
            delay(200);
            digitalWrite(LedPin[0],HIGH);
            digitalWrite(LedPin[1],HIGH);
            delay(200);
            digitalWrite(LedPin[0],LOW);
            digitalWrite(LedPin[1],LOW);
            digitalWrite(LedPin[2],HIGH);
            digitalWrite(LedPin[3],HIGH);
            delay(200);
            digitalWrite(LedPin[0],LOW);
            digitalWrite(LedPin[1],LOW);
            digitalWrite(LedPin[2],LOW);
            digitalWrite(LedPin[3],LOW);
            digitalWrite(LedPin[4],HIGH);
            digitalWrite(LedPin[5],HIGH);
            delay(200);
            digitalWrite(LedPin[0],LOW);
            digitalWrite(LedPin[1],LOW);
            digitalWrite(LedPin[2],LOW);
            digitalWrite(LedPin[3],LOW);
            digitalWrite(LedPin[4],LOW);
            digitalWrite(LedPin[5],LOW);
            digitalWrite(LedPin[6],HIGH);
            digitalWrite(LedPin[7],HIGH);
            delay(200);
        }
        break;
      case 5:
       for (int i = 0; i < 8; i++) {
            digitalWrite(LedPin[0],LOW);
            digitalWrite(LedPin[1],LOW);
            digitalWrite(LedPin[2],LOW);
            digitalWrite(LedPin[3],LOW);
            digitalWrite(LedPin[4],LOW);
            digitalWrite(LedPin[5],LOW);
            digitalWrite(LedPin[6],LOW);
            digitalWrite(LedPin[7],LOW);
            delay(200);
            digitalWrite(LedPin[0],HIGH);
            delay(200);
            digitalWrite(LedPin[1],HIGH);
            delay(200);
            digitalWrite(LedPin[2],HIGH);
            delay(200);
            digitalWrite(LedPin[3],HIGH);
            delay(200);
            digitalWrite(LedPin[4],HIGH);
            delay(200);
            digitalWrite(LedPin[5],HIGH);
            delay(200);
            digitalWrite(LedPin[6],HIGH);
            delay(200);
            digitalWrite(LedPin[7],HIGH);
            delay(200);
            digitalWrite(LedPin[7],LOW);
            delay(200);
            digitalWrite(LedPin[6],LOW);
            delay(200);
            digitalWrite(LedPin[5],LOW);
            delay(200);
            digitalWrite(LedPin[4],LOW);
            delay(200);
            digitalWrite(LedPin[3],LOW);
            delay(200);
            digitalWrite(LedPin[2],LOW);
            delay(200);
            digitalWrite(LedPin[1],LOW);
            delay(200);
            digitalWrite(LedPin[0],LOW);
            delay(200);

       }
       break;
      case 6:
       for (int i = 0; i < 8; i++) {
            digitalWrite(LedPin[0],LOW);
            digitalWrite(LedPin[1],LOW);
            digitalWrite(LedPin[2],LOW);
            digitalWrite(LedPin[3],LOW);
            digitalWrite(LedPin[4],LOW);
            digitalWrite(LedPin[5],LOW);
            digitalWrite(LedPin[6],LOW);
            digitalWrite(LedPin[7],LOW);
            delay(200);
            digitalWrite(LedPin[0],HIGH);
            digitalWrite(LedPin[1],HIGH);
            digitalWrite(LedPin[2],HIGH);
            digitalWrite(LedPin[3],HIGH);
            digitalWrite(LedPin[4],HIGH);
            digitalWrite(LedPin[5],HIGH);
            digitalWrite(LedPin[6],HIGH);
            digitalWrite(LedPin[7],HIGH);
            delay(300);
       }
        
    }
   
}*/