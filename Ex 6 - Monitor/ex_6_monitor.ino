#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);
int tmpPin= A0;
int tmp;
float tensao,temp;



void setup() {
  lcd.begin(16,2);    
  
  pinMode(tmpPin, INPUT);
  Serial.begin(9600);
  
  }



void loop (){
  
  	tmp=analogRead(tmpPin);
  	Serial.print("Sensor: ");
    Serial.println(tmp);
  
  	tensao = ((tmp/1024.0) * 5.0);
  	Serial.print(" Tensao: ");
    Serial.print(tensao);
    temp=((tensao - 0.5)* 100);
    Serial.print(" Temperatura: ");
    Serial.println(temp);
  
  
  lcd.setCursor(0,0);
  lcd.print("Temperatura");
  lcd.setCursor(0,1);
  lcd.print(temp);
  lcd.setCursor(7,1);
  lcd.print("C");
  
}