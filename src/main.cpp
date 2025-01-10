#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

#define I2C_SDA 21
#define I2C_SCL 22
int ButtonPin = 2;
int ButtonPin1 = 15;
int LedPin[] = {23, 19, 18, 5, 17, 16, 4, 0,}; 

int ledPin0 = 23;
int ledPin1 = 19;
int ledPin2 = 18;
int ledPin3 = 5;
int ledPin4 = 17;
int ledPin5 = 16;
int ledPin6 = 4;
int ledPin7 = 0;

LiquidCrystal_I2C lcd(0x27, 20, 4); // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup(){
    for (int i = 0; i < 8; i++) {
    pinMode(LedPin[i], OUTPUT);
  }
  pinMode(ButtonPin, INPUT_PULLUP);
  pinMode(ButtonPin1, INPUT_PULLUP);
 lcd.init(I2C_SDA, I2C_SCL); // initialize the lcd to use user defined I2C pins
 lcd.backlight();
 lcd.setCursor(0,0);
 lcd.print("Menu: 0");
  delay(500);
}


void loop(){
  static int menu = 0;  // ตัวแปรเก็บเมนูที่เลือก
  int switchState = digitalRead(ButtonPin); 
  int switchState1 = digitalRead(ButtonPin1);  // อ่านสถานะของสวิตช์
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
    else if (switchState1 == HIGH) {
    delay(300);  // ให้เวลา Debouncing ให้สวิตช์มีเวลาหยุดสักนิด

    // เปลี่ยนเมนูที่เลือก
    menu = (menu % 6) - 1;  // สลับเมนูจาก 1-6
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Menu: ");
    lcd.print(menu);  // แสดงเมนูที่เลือก
    delay(500);

    }
    // ใช้ switch-case เพื่อจัดการการเลือกเมนู
    switch (menu) {
      case 1:
        // เมนู 1: LED ทั้ง 8 หลอดเปิดพร้อมกัน
        for (int i = 0; i < 8; i++) {
          digitalWrite(LedPin[i], HIGH);
        }
        break;

    }
    switch (menu) {
      case 2:
    digitalWrite(ledPin0, HIGH);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin6, HIGH);
    digitalWrite(ledPin7, LOW);
    delay(500);
    digitalWrite(ledPin0, LOW);
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, HIGH);
    delay(500);
    }
    switch (menu) {
      case 3:
    for (int i = 0; i < 8; i++) {
    digitalWrite(ledPin0, LOW);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW);
    digitalWrite(LedPin[i], HIGH); // เปิด LED หลอดที่ i
    delay(500); // รอ 500 มิลลิวินาที
    digitalWrite(LedPin[i], LOW);  // ปิด LED หลอดที่ i
    }
    
  }
  switch (menu) {
      case 4:
    for (int i = 0; i < 8; i += 2) { // ขยับทีละ 2
    digitalWrite(LedPin[i], HIGH);   // เปิด LED คู่แรก
    digitalWrite(LedPin[i+1], HIGH); // เปิด LED คู่ที่สอง
    delay(500); // รอ 500 มิลลิวินาที
    digitalWrite(LedPin[i], LOW);    // ปิด LED คู่แรก
    digitalWrite(LedPin[i+1], LOW);  // ปิด LED คู่ที่สอง
  }

}
switch (menu) {
      case 5:
    for (int i = 0; i < 8; i++) {
    digitalWrite(LedPin[i], HIGH); // เปิด LED ทีละหลอด
    delay(500); // รอ 500 มิลลิวินาที
  }

  // ดับทีละหลอดจากหลอดสุดท้ายกลับมาหลอดแรก
  for (int i = 7; i >= 0; i--) {
    digitalWrite(LedPin[i], LOW); // ปิด LED ทีละหลอด
    delay(500); // รอ 500 มิลลิวินาที
  }

}
switch (menu) {
      case 6:
    for (int i = 0; i < 8; i++) {
    digitalWrite(LedPin[i], HIGH); // เปิด LED ทุกหลอด
  }
  delay(300); // รอ 500 มิลลิวินาที
  
  // ปิด LED ทั้งหมดพร้อมกัน
  for (int i = 0; i < 8; i++) {
    digitalWrite(LedPin[i], LOW); // ปิด LED ทุกหลอด
  }
  delay(300);

}
}