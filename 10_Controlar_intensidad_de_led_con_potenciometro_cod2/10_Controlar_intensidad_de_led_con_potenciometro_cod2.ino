
//Controla la intensidad de led con potenciometro , para los valores usa la funcion map, mapa de valores
int led = 46;// PIN 46 como salida del led
int brillo; // para la intensidad
int pot = 0; //potenciometro 
int pinpot = A1; // pin del potenciometro


void setup() {
  // put your setup code here, to run once:
pinMode (led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
pot = analogRead (pinpot); // LECTURA DEL VALOR DEL POTENCIÓMETRO
brillo = map (pot, 0,1023, 0, 255); //ESCALAR LOS VALORES DEL POTENCIÓMETRO CON EL BRILLO DEL LED.
analogWrite (led,brillo);
}
//Esquema de conexión ver link https://github.com/RafaelLandy/Aprendiendo_arduino/tree/master/10_Controlar_intensidad_de_led_con_potenciometro_cod2
