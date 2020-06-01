//Practica de la función IF -ELSE prende un led con un pulsante
void setup() {
pinMode(2,INPUT); // Se definde el pin 2 como entrada y solo puede ser alto o bajo o prendido o apagado 0V o 5V)
pinMode(3,OUTPUT);// Se definde el pin 3 como salida que es un led y se apagara o prendera el led al activar el pulsante
}

void loop() {
  if (digitalRead(2)==HIGH){//lee la entrada del pin 2 y compara (==) si es igual a alto 5V ejecuta la siguiente linea en caso contrario se dirige a ELSE
    digitalWrite(3,HIGH); 
  }
else {
  digitalWrite(3,LOW); //de no cumplir la condicion anterior realiza esta acción apaga el pin 3 o envia un valor bajo LOW 0V
}
}
// Esquema de conexión ver el siguinte link https://github.com/RafaelLandy/Aprendiendo_arduino/tree/master/03_Entrada_y_salida
