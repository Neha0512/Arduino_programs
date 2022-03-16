#include<LiquidCrystal.h>
//LiquidCrystal lcd(RS, E, D4, D5, D6, D7);

LiquidCrystal lcd(4, 5, 3, 2, 1, 0);
const int sensor=A0; // Assigning analog pin A1 to variable 'sensor'
float tempc; //variable to store temperature in degree Celsius
float tempf; //variable to store temperature in Fahreinheit
float vout; //temporary variable to hold sensor reading

void setup()
{
pinMode(sensor, INPUT); // Configuring pin A1 as input
lcd.begin(16, 2);
lcd.print("Praveen Malik");
delay(3000);
}

void loop()
{
vout=analogRead(sensor);
vout=(vout*500)/1023;
tempc=vout; // Storing value in Degree tempf=(vout* 1.8)+32; // Converting to Fahrenheit
tempf=vout*1.6+32;

lcd.setCursor(0,0);
lcd.print("DegreeC= ");
lcd.print(tempc);

lcd.setCursor(0,1);
lcd.print("Fahrenheit=");
lcd.print(tempf); delay(100);

delay(100);
}
