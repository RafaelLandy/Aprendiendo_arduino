/*MODIFICACION SENCILLA DE ALARMA con time alarms y con el modulo ds1302, esta rutina salo se ejecuta si ya eta configurada la hora del reloj, muestra la hora en el monnitor serial
 */
 #include <Servo.h>
 #include <Time.h>
#include <TimeAlarms.h>
#include <TimeLib.h>
#include <virtuabotixRTC.h> //libreria de reloj modulo DS1302

Servo servo1;//ASIGNA UN NOMBRE AL SERVO
int PINSERVO=2;//pin donde se conecta el servo 
int PULSOMIN=750;//cero grados, estos datos se debe graduar conectado el 
int PULSOMAX=1350;//giro de 180

virtuabotixRTC myRTC(6, 7, 8);// Determina los pines ligados al modulo del reloj_ myRTC(clock, data, rst)


void setup()
{
  Serial.begin(9600);// incica el monitor seral de arduino

   myRTC.updateTime();
  setTime(myRTC.hours,29,0,1,1,11); // Ajusta el tiempo myRTC.hours hora del reloj, 29 min 0 seg , el 1 de enero del 2011 ---el conteo empieza cuando se conecta la placa arduino, se puede poner todos los datos del reloj
  
  // Creacion de alarmas
  Alarm.alarmRepeat(8,29,30, Comidapeces);  // AQUI SE CREA LA ALARMA , SE EJECUTA LA FUNCIÓN Comidapeces TODOS LOS DIAS A LAS 8H30 

 //AJUSTE INCIA EL SERVO
 servo1.attach(PINSERVO,PULSOMIN,PULSOMAX); //asigna las variables al servo // 
 servo1.write(0);//COLOCA COMO POSICION INICIAL EL SERVO EN O GRADOS
}

void  loop(){  
  digitalClockDisplay();
  Alarm.delay(1000); // Espera un segundo para el reloj en el serial monitor
}

// Funciones a ejecutarse cuando la alrma se activa
void Comidapeces(){// ejecuta la funcion Comidapeces esta funcion hace que funcione el servo

servo1.write(0);
  delay(100);

servo1.write(90);
  delay(1000);

servo1.write(0);
  delay(500);

servo1.write(180);
  delay(500);

  servo1.write(0);
  delay(500);
}


void digitalClockDisplay()
{
  // digital clock display of the time
  Serial.print(hour());
  printDigits(minute());
  printDigits(second());
  Serial.println(); 
}

void printDigits(int digits)
{
  Serial.print(":");
  if(digits < 10)
    Serial.print('0');
  Serial.print(digits);
}
