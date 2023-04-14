int valorsensor=0; //esta ligado a porta 0
int led=2;

void setup() {
  pinMode(A0,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  {
     valorsensor = analogRead(A0);
    Serial.println(valorsensor);
    
      if (valorsensor>930) {
        digitalWrite(led,LOW);
      }
    
    else{
        digitalWrite(led,HIGH);
        }
  
  }
}
