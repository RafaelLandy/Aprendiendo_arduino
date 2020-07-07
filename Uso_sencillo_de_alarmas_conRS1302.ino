//PROGRAMA ALARMA SENCILLO QUE USA EL MODULO CON EL CHIP RELOJ DS1302
 
 #include <Servo.h>//LIBRERIA DEL SERVO

#include <virtuabotixRTC.h> //libreria de reloj modulo DS1302

Servo servo1;//ASIGNA UN NOMBRE AL SERVO
int PINSERVO=2;//pin donde se conecta el servo 
int PULSOMIN=750;//cero grados, estos datos se debe graduar conectado el notor 
int PULSOMAX=1350;//giro de 180


// PARA CONFIGURAR EL RELOJ SE DEBE USAR UNA RUTINA O CODIGO SOLO PARA ESO

virtuabotixRTC myRTC(6, 7, 8);// Determina los pines ligados al modulo del reloj_ myRTC(clock, data, rst) pines 6 clk, 7data,8 rst, alimentar con 5v




void setup()
{
  Serial.begin(9600);// incica el monitor seral de arduino, en esta practica no esta nada configurado para ver en pantalla

 //AJUSTE INCIA DEL SERVO
 servo1.attach(PINSERVO,PULSOMIN,PULSOMAX); //asigna las variables al servo // 
 servo1.write(0);//COLOCA COMO POSICION INICIAL EL SERVO EN O GRADOS
}

void  loop(){  
 
 myRTC.updateTime();//se de be poner esto para que lea el tiempo sino no funciona
 
 if (myRTC.hours==23 && myRTC.minutes==44 && myRTC.seconds==00) {    //compara la hora del reloj se ejecuta el servo a las 23H44m 0segundos

servo1.write(0);
  delay(100);

servo1.write(90);
  delay(1000);

servo1.write(0);
  delay(500);

servo1.write(180);
  delay(500);

  servo1.write(0);
  delay(80000);
}
  
else {
  digitalWrite(3,LOW); //esto es la consdicion caso cntrario, yo solo puse esto en realidad apagaria un led del pin3
}
}
