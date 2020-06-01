//Este codigo hace que suba y baje lentamente la intensidad de un led
int led= 3; //se asigna led a pin 3
int brillo; //definimos la varilable brillo 


void setup() {
 pinMode (led,OUTPUT);  // se asigna que led es una salida

}

void loop() {

for (brillo=0;brillo<256;brillo++){ //esta función ejecuta lo que esta dentro del parentesis empieza desde brillo=0 hasta llegar a < 256 , brillo++ significa que incrmenta de 1 en 1

analogWrite(led,brillo);  // enciende led con itensidad luminica empenzando de 0 hasta < 256
delay(10); //demora 10 milisegundos por cada valor es decir aqui se calibra la velocidad de pasar de 0 a 255
}
for (brillo=255;brillo>=0;brillo--){ //esta función ejecuta lo que esta dentro del parentesis empieza desde brillo=0 hasta llegar a < 256 , brillo++ significa que incrmenta de 1 en 1

analogWrite(led,brillo);  // enciende led con itensidad luminica empenzando de 0 hasta < 256
delay(10); //demora 10 milisegundos por cada valor es decir aqui se calibra la velocidad de pasar de 255 a 0
}


}
// Esquema de conexión ver link https://github.com/RafaelLandy/Aprendiendo_arduino/tree/master/08_Hacer_de_led_suba_y_baje_la_intensidad_solo
