void setup() {
pinMode(2,INPUT); // Se definde el pin 2 como entrada y solo puede ser alto o bajo o prendido o apagado 0V o 5V)
pinMode(3,INPUT);// Se definde el pin 3 como entrada y solo puede ser alto o bajo o prendido o apagado 0V o 5V)
}

void loop() {
  if (digitalRead(2)==LOW){//lee la entrada del pin 2 y compara (==) si es igual a alto 5V ejecuta la siguiente linea en caso contrario se dirige a ELSE
    digitalWrite(3,LOW); 
  }
else {
  digitalWrite(3,HIGH); //de no cumplir la condicion anterior realiza esta acción apaga el pin 3 o envia un valor bajo LOW 0V
}
}
