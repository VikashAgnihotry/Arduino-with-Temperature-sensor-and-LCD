#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 7, en = 6, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
const int temp= A0;
void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  pinMode(temp, INPUT);
  pinMode(A1, INPUT);
  // Print a message to the LCD.
  lcd.println("Temp : ");
}

void loop() {
  int sensorValues = analogRead(temp);
  float val = sensorValues *(5.0/1023.0);
  float tc= (val-1.5)*100;
  lcd.setCursor(7, 0);
  lcd.println(tc);
  delay(100);
}

