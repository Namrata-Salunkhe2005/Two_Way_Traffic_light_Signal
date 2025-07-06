int Red_A = 0;
int Yellow_A =1;
int Green_A =2;

int Red_B =3;
int Yellow_B =4;
int Green_B =5;

void setup()
{
  pinMode(Red_A, OUTPUT);
  pinMode(Yellow_A, OUTPUT);
  pinMode(Green_A, OUTPUT);
  pinMode(Red_B, OUTPUT);
  pinMode(Yellow_B, OUTPUT);
  pinMode(Green_B, OUTPUT);
}
 
void loop()
{
  digitalWrite(Red_B,LOW);
  digitalWrite(Green_A,LOW);
  digitalWrite(Yellow_A,LOW);
  digitalWrite(Yellow_B,LOW);
  digitalWrite(Red_A,HIGH);
  digitalWrite(Green_B,HIGH);
  for (int i=10; i>0; i--)
  delay(3000);
  
  digitalWrite(Red_B,LOW);
  digitalWrite(Green_A,LOW);
  digitalWrite(Green_B,LOW);
  digitalWrite(Red_A,HIGH);
  digitalWrite(Yellow_B,HIGH);
  digitalWrite(Yellow_A,LOW);
  for (int i=5; i>0; i--)
    delay(1000);
  
  digitalWrite(Red_A,LOW);
  digitalWrite(Yellow_A,LOW);
  digitalWrite(Yellow_B,LOW);
  digitalWrite(Green_A,HIGH);
  digitalWrite(Red_B,HIGH);
  digitalWrite(Green_B,LOW);
  for (int i=0; i<10; i++)
    delay(3000);
 
  digitalWrite(Yellow_B,LOW);
  digitalWrite(Red_A,LOW);
  digitalWrite(Green_B,LOW);
  digitalWrite(Green_A,LOW);
  digitalWrite(Red_B,HIGH);
  digitalWrite(Yellow_A,HIGH);
  for (int i=0; i<5; i++)
    delay(1000);
}
  