//Esto es una modificacin simple de led intermitente, se hace con 2 leds
void setup(){// se realiza los ajustes y definicion de variables
  pinMode(13,OUTPUT);//se define el pin 13 como salida alli se va a conectar que se prenda y apague
  pinMode(12,OUTPUT);//se define el pin 13 como salida alli se va a conectar que se prenda y apague
}
void loop(){
  digitalWrite(13,HIGH);// se define con que valor va a ser la salida HIGH= 5V que equivale a led prendido
  delay(1000); // es un tiempo en mili segundos 1000= 1 segundo, para que se vea lo prendido
  digitalWrite(12,HIGH);// se define con que valor va a ser la salida HIGH= 5V que equivale a led prendido
  delay(1000); // es un tiempo en mili segundos 1000= 1 segundo, para que se vea lo prendido
  digitalWrite(12,LOW);// se define con que valor va a ser la salida LOW= 0 , en este caso se apaga
  delay(1000); // es un tiempo en mili segundos 1000= 1 segundo, para que se vea lo apagado
  digitalWrite(13,LOW);// se define con que valor va a ser la salida LOW= 0 , en este caso se apaga
  delay(1000); // es un tiempo en mili segundos 1000= 1 segundo, para que se vea lo apagado
}
