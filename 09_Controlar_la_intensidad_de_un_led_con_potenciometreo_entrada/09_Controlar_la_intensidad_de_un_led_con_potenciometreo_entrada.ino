
//Controla la intensidad de un led con potenciometro - uso de entrada analogica y salida PWM
// ESTE CODIGO SE HA INCREMETADO PARA QUE SE MUESTRE LOS DATOS EN EL PUERTO SERIE
int led= 46; //se asigna led a pin 3
int brillo; //definimos la varilable brillo 
int pot=0;// define potenciometro en valor cero
int pinpot = A1; // pin del potenciometro

void setup() {
 pinMode (led,OUTPUT);  // se asigna que led es una salida // las entradas analogicas no require inicializacion por eso no se pone

  Serial.begin(9600); // esto es para ver los valores en el monitor serial, essta es una funciòn o sentencia
}

void loop(){

pot=analogRead(pinpot); //lee el valor del potenciometro
brillo = pot/4; //el valor de brillo tomára lo que el potenciometro envía, se pone divido para 4 porque anlogred lee de 0 a 1023 (1023/255)
analogWrite(led,brillo); // ennciende el led con un brillo de acuerdo al valor del potenciometro

Serial.println(brillo); // Muestra lo valores de la variable brillo en el monitor serial y tambien la grafica en serial ploter

}
//Ver esquema de conexion https://github.com/RafaelLandy/Aprendiendo_arduino/tree/master/09_Controlar_la_intensidad_de_un_led_con_potenciometreo_entrada_
