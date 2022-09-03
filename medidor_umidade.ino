#include <LiquidCrystal.h>
#include <ArduinoJson.h>
const int TAMANHO = 50;
LiquidCrystal lcd(8, 6, 5, 4, 3,2);



int sensorPin = A0;
int sensorValue = 0;
int percentValue = 0;



void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
}



void loop() {

  StaticJsonDocument<TAMANHO> json;


 sensorValue = analogRead(sensorPin);
  //Serial.print("\n\nValor analógico: ");
  //Serial.print(sensorValue);
  
  percentValue = map(sensorValue, 1023, 200, 0, 100);
  json["Umidade"] = percentValue;
  serializeJson(json, Serial);
  Serial.println();
  //Serial.print("\nValor: ");
  //Serial.print(percentValue);
  //Serial.print("%");
  lcd.setCursor(0, 0);
  lcd.print("Umidade do solo");
  
  lcd.setCursor(0, 1);  
  lcd.print("Percentual: ");
  lcd.print(percentValue);
  lcd.print("%");
  delay(1000);
  lcd.clear();
}
