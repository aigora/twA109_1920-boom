#define LED 3
#define BOTON 2

#define LED2 5
#define BOTON2 4

#define LED3 7
#define BOTON3 6

#define LED4 9
#define BOTON4 8

#define TEMPORIZADOR 10

int BOTON_NUM1 = 0;
int BOTON_NUM2 = 0;
int BOTON_NUM3 = 0;
int BOTON_NUM4 = 0;

void setup()
{
  pinMode(LED,OUTPUT);
  pinMode(BOTON,INPUT_PULLUP);
  pinMode(LED2,OUTPUT);
  pinMode(BOTON2,INPUT_PULLUP);
  pinMode(LED3,OUTPUT);
  pinMode(BOTON3,INPUT_PULLUP);
  pinMode(LED4,OUTPUT);
  pinMode(BOTON4,INPUT_PULLUP);

  Serial.begin(300);
}

void loop()
{
  ScanBOTON();
  ScanBOTON2();
  ScanBOTON3();
  ScanBOTON4();
  
  digitalWrite(TEMPORIZADOR, HIGH); // enciende el LED (temporizador)
  delay(600); // espera 1 segundo
  digitalWrite(TEMPORIZADOR, LOW); // apaga el LED.
  delay(600); // espera 1 segundo
}

//boton 1
void ScanBOTON()
{
  BOTON_NUM1 = 0;
  
  if(digitalRead(BOTON)==LOW)
  {
    delay(20);
    if(digitalRead(BOTON)==LOW)
    {
      BOTON_NUM1 = 1;
      while(digitalRead(BOTON)==LOW);
    }
    Serial.println(digitalRead(LED));
  }
  
  if(BOTON_NUM1 == 1)
  {
    digitalWrite(LED,!digitalRead(LED));
  }
}

//boton 2
void ScanBOTON2()
{
  BOTON_NUM2 = 0;
  
  if(digitalRead(BOTON2)==LOW)
  {
    delay(20);
    if(digitalRead(BOTON2)==LOW)
    {
      BOTON_NUM2 = 1;
      while(digitalRead(BOTON2)==LOW);
    }
    Serial.println(digitalRead(LED2));
  }
  
  if(BOTON_NUM2 == 1)
  {
    digitalWrite(LED2,!digitalRead(LED2));
  }
}

//boton 3
void ScanBOTON3()
{
  BOTON_NUM3 = 0;
  
  if(digitalRead(BOTON3)==LOW)
  {
    delay(20);
    if(digitalRead(BOTON3)==LOW)
    {
      BOTON_NUM3 = 1;
      while(digitalRead(BOTON3)==LOW);
    }
    Serial.println(digitalRead(LED3));
  }
  
  if(BOTON_NUM3 == 1)
  {
    digitalWrite(LED3,!digitalRead(LED3));
  }
}

//boton 4
void ScanBOTON4()
{
  BOTON_NUM4 = 0;
  
  if(digitalRead(BOTON4)==LOW)
  {
    delay(20);
    if(digitalRead(BOTON4)==LOW)
    {
      BOTON_NUM4 = 1;
      while(digitalRead(BOTON4)==LOW);
    }
    Serial.println(digitalRead(LED4));
  }
  
  if(BOTON_NUM4 == 1)
  {
    digitalWrite(LED4,!digitalRead(LED4));
  }
}
