int ledamarelo = 13;


void setup() {
  // put your setup code here, to run once:
  pinMode (ledamarelo,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (ledamarelo,HIGH);
  delay (1000);
  digitalWrite (ledamarelo,LOW);
  delay (1000);
}