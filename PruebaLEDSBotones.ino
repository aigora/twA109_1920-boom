void setup() {
  
  Serial.begin(9600);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  pinMode(7,INPUT);
}

void loop()
{
  int boton1,boton2,boton3,boton4;
  boton1==digitalRead(7);
  boton2==digitalRead(6);
  boton3==digitalRead(5);
  boton4==digitalRead(4);
  
  digitalWrite(10, HIGH); // enciende el LED (temporizador)
  delay(600); // espera 1 segundo
  digitalWrite(10, LOW); // apaga el LED.
  delay(600); 

  Serial.print("El valor del puerto es ");
  Serial.println(boton1);

if  (boton1==HIGH || boton2==HIGH || boton3==HIGH){
digitalWrite(9,HIGH); // LED verde (puede continuar el juego)
}
else { 
if  (boton4==HIGH){
digitalWrite(10,HIGH); // LED rojo (explota la bomba)
}
delay(500);
}
}
