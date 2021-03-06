/*
  Capitulo 46 de Arduino desde cero en Español.
  Programa que enciende LED rojo y apaga el mismo al recibir el numero 1 y
  enciende LED verde por 5 segundos y apaga al recibir el numero 2.
  Ver: Capitulo46-Programa2-Emisor.txt  
  Requiere instalar libreria RadioHead.h

  Autor: bitwiseAr  

*/


//// Programa 2 lado Receptor ////

#include <RH_ASK.h>   // incluye libreria RadioHead.h
#include <SPI.h>    // incluye libreria SPI necesaria por RadioHead.h

RH_ASK rf_driver;   // crea objeto para modulacion por ASK

#define LEDROJO 2   // reemplaza ocurrencia de LEDROJO por el numero 2
#define LEDVERDE 3    // reemplaza ocurrencia de LEDVERDE por el numero 3
#define   rf_driver 11 //define pin receptor de data RF

void setup(){
    pinMode(LEDROJO, OUTPUT); // pin 2 como salida
    pinMode(LEDVERDE, OUTPUT);  // pin 3 como salida
    pinMode(rf_driver, INPUT);
    rf_driver.init();   // inicializa objeto con valores por defecto
}
 
void loop(){
    uint8_t buf[1];     // espacio para mensaje recibido de 1 caracter
    uint8_t buflen = sizeof(buf); // longitud de buffer
    
    if (rf_driver.recv(buf, &buflen)) // si se recibieron datos correctos
    {
      if((char)buf[0]=='1')   // si el caracter es el numero 1
        {
            digitalWrite(LEDROJO, !digitalRead(LEDROJO));// aplica valor opuesto al leido
        }            // del estado del LED rojo
        else if((char)buf[0]=='2')  // si el caracter es el numero 2
        {
            digitalWrite(LEDVERDE, HIGH);   // enciende LED verde
            delay(5000);        // demora de 5 segundos
            digitalWrite(LEDVERDE, LOW);    // apaga LED verde
        }               
    }
}
