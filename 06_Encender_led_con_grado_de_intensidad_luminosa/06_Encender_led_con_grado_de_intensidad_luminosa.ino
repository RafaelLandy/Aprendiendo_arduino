int led= 3; //se asigna led a pin 3
void setup() {
 pinMode (led,OUTPUT);  // se asigna que led es una salida

}

void loop() {
analogWrite(led,255);  // enciende led con itensidad luminica 255= 5V, por tanto 0=0v, 127= 2,5 V

}
