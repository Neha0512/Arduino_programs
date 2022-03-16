#include <DHT.h>

#define DHTPIN 5
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

float hum;
float temp;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000); 
hum=dht.readHumidity();
temp=dht.readTemperature();
Serial.print("Humidity: ");
Serial.print(hum);
Serial.print(" %, Temp: ");
Serial.print(temp);
Serial.println("Celsius");
delay(3000);
}
