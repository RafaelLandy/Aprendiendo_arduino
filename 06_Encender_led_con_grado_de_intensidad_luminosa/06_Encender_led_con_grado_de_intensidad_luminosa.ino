
//Enciende el led con un grado de luminosidad
int led= 3; //se asigna led a pin 3
void setup() {
 pinMode (led,OUTPUT);  // se asigna que led es una salida

}

void loop() {
analogWrite(led,255);  // enciende led con itensidad luminica 255= 5V, por tanto 0=0v, 127= 2,5 V

}
//Diagrama de conexión ver en https://github.com/RafaelLandy/Aprendiendo_arduino/tree/master/06_Encender_led_con_grado_de_intensidad_luminosa
