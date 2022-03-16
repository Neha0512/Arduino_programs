#include <LiquidCrystal.h>
#define rs 0
#define en 1
#define D4 5
#define D5 4
#define D6 3
#define D7 2

 LiquidCrystal lcd(rs,en,D4,D5,D6,D7);

void setup()
{
  lcd.clear();
  lcd.begin(16,2);    
}
void loop()
{
  lcd.setCursor(0,0);
  lcd.print("Neha");
  delay(1000);
  
  lcd.setCursor(1,1);   lcd.print("LPU Punjab");
  delay(1000);

  lcd.clear();
  delay(2000);
}
