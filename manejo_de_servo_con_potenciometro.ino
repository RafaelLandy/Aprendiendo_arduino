
// permite controlar un servo de giro 180° mediante el unso de un potenciometro
#include <Servo.h>//inicializa la libriria servo
Servo servo1;
int PINSERVO=2;
int PULSOMIN=750;//cero grados, estos datos se debe graduar conectado el 
int PULSOMAX=1350;//giro de 180
int VALORPOT=A0; //potenciometro designado al pin analogico A0
int ANGULO; //variable para que se asigne valores leidos de acurdo a la posicion del potenciometro
int POT=0;//valor inicial del potenciometro

void setup(){
  servo1.attach(PINSERVO,PULSOMIN,PULSOMAX); //asigna las variables al servo
}

void loop(){
  VALORPOT=analogRead(POT);// lee los valores del potenciometro
  ANGULO=map (VALORPOT,0,1023,0,180);// asigna rango valor del potenciometro de  0 a 1023 y su correspondencia con lo angulos de 0 a 180
  servo1.write (ANGULO);//escribe o envía el valor leido en el servo
  delay(20);// tiempo de espera entre pulso
}
//https://www.youtube.com/watch?v=6bPVZg17vKc (ver explicacion y esqyema de conexion en este video)
//diagrama de conexion ver en https://github.com/RafaelLandy/Aprendiendo_arduino/blob/master/Servo%20controlado%20con%20potenciometro.png
