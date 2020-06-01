 // Práctica encender LED con botón pulsador y luego apagar LED con el mismo
//boton pulsador

//Esto es otra forma de apagar y prender un led con un  pulsante
const int LED =3;
const int BOTON = 2;
int val = 0; //val se emplea para almacenar el estado del boton
int state = 0; // 0 LED apagado, mientras que 1 encendido
int old_val = 0; // almacena el antiguo valor de val



void setup(){  // definir si la variable es de entrada // o salida.
 pinMode(LED,OUTPUT); // establecer que el pin digital es una señal de salida
 pinMode(BOTON,INPUT); // y BOTON como señal de entrada
}
void loop() {       // loop = realice un lazo continuamente
val= digitalRead(BOTON); // lee el estado del Boton
if ((val == HIGH) && (old_val == LOW)){
state=1-state;
delay(10);
}
old_val = val; // valor del antiguo estado
if (state==1){
 digitalWrite(LED, HIGH); // enciende el LED
}
else{
 digitalWrite(LED,LOW); // apagar el LED
}
}
//Esquema de conexión ver el link https://github.com/RafaelLandy/Aprendiendo_arduino/tree/master/05_Otra_forma_de_apagar_y_prender_led_con_pulsante
