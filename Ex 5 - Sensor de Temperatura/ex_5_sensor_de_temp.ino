
int tmpPin= A0;
int tmp;
float tensao,temp;
  
void setup()
{
  pinMode(tmpPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
	tmp=analogRead(tmpPin);
  	Serial.print("Sensor: ");
    Serial.println(tmp);
  
  	tensao = ((tmp/1024.0) * 5.0);
  	Serial.print(" Tensao: ");
    Serial.print(tensao);
    temp=((tensao - 0.5)* 100);
    Serial.print(" Temperatura: ");
    Serial.println(temp);
}