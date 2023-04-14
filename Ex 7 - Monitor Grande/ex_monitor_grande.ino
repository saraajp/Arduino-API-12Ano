#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);
int tmpPin= A0;
int valorsensor= A1;

int tmp;
float tensao,temp;

int led_azul=13;
int led_verde=10;
int led_amarelo=9;
int led_vermelho=8;
int led_branco=7;

void setup() {
  pinMode(led_azul,OUTPUT);
  pinMode(led_verde,OUTPUT);
  pinMode(led_amarelo,OUTPUT);
  pinMode(led_vermelho,OUTPUT);
 
  pinMode(A1,INPUT);
  pinMode(led_branco,OUTPUT);
  Serial.begin(9600);
  
      
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
  
  
  
  //Led branco
    {
     valorsensor = analogRead(A1);
    Serial.println(valorsensor);
    
      if (valorsensor>930) {
        digitalWrite(led_branco,LOW);
      }
    
    else{
        digitalWrite(led_branco,HIGH);
        }
  
  }
  
  
  
  
    //Ligar led azul
  if(temp<0){
    digitalWrite(led_azul,HIGH);
	digitalWrite(led_verde,LOW);
 	digitalWrite(led_amarelo,LOW);
	digitalWrite(led_vermelho,LOW);
  
  } 
  
  //Ligar led verde
  if((temp>1) && (temp<=25)){
    digitalWrite(led_azul,LOW);
	digitalWrite(led_verde,HIGH);
 	digitalWrite(led_amarelo,LOW);
	digitalWrite(led_vermelho,LOW); 
  } 
 
   //Ligar led amarelo
  if((temp>26) && (temp<=35)){
    digitalWrite(led_azul,LOW);
	digitalWrite(led_verde,LOW);
 	digitalWrite(led_amarelo,HIGH);
	digitalWrite(led_vermelho,LOW);
  
  } 
  
  
    //Ligar led vermelho
  if(temp>35){
    digitalWrite(led_azul,LOW);
	digitalWrite(led_verde,LOW);
 	digitalWrite(led_amarelo,LOW);
	digitalWrite(led_vermelho,HIGH);
  
  } 
  
  
}