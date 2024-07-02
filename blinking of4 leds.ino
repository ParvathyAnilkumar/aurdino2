// C++ code
//
int LED1=13,LED2=11,LED3=7,LED4=3;
void setup()
{
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4,OUTPUT);
}

void loop()
{
  digitalWrite(LED1, HIGH);
  delay(3000);
  digitalWrite(LED1, LOW);
  digitalWrite(LED4, HIGH);
  delay(18000);
  digitalWrite(LED4, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3,HIGH);
  delay(3000);  
  digitalWrite(LED3,LOW);
  delay(3000);
  

  
}