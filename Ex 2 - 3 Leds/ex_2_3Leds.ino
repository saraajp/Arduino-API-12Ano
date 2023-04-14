int ledvermelho = 12;
int ledamarelo = 11;
int ledverde = 10;


void setup() {
  // put your setup code here, to run once:
  pinMode (ledvermelho,OUTPUT);
  pinMode (ledamarelo,OUTPUT);
  pinMode (ledverde,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:


  digitalWrite (ledverde,HIGH);
  digitalWrite (ledamarelo,LOW);
  digitalWrite (ledvermelho,LOW);
    delay (1000);

  digitalWrite (ledamarelo,LOW);
  delay (300);
  digitalWrite (ledamarelo,HIGH);
  delay (300);
  digitalWrite (ledamarelo,LOW);
  delay (300);
  digitalWrite (ledamarelo,HIGH);
  delay (300);
  digitalWrite (ledamarelo,LOW);
  delay (1000); 
 
  
  digitalWrite (ledverde,LOW);
  digitalWrite (ledamarelo,HIGH);
  digitalWrite (ledvermelho,LOW);
    delay (1000);
  


 
  digitalWrite (ledverde,LOW);
  digitalWrite (ledamarelo,LOW);
  digitalWrite (ledvermelho,HIGH);
    delay (1000);
}