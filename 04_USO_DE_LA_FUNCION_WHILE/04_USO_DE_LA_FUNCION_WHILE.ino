//Esta practica es el uso de la función while , este codigo prende y apaga el led con un pulsante
int PULSADOR = 2; 
int LED=3; 
int ESTADO=LOW; 

void setup(){ 

pinMode(PULSADOR, INPUT); 
pinMode(LED, OUTPUT); 
digitalWrite(LED, LOW);

 } 

void loop (){ 

while(digitalRead(PULSADOR) == LOW){   // espera infinitamente hasta que se presione el pulsador
 }

ESTADO = digitalRead(LED);    // leo estado del LED para saber si esta encendido o apagado
digitalWrite(LED, !ESTADO);     // escribo en la salida el valor opuesto al leido con anterioridad

while(digitalRead(PULSADOR) == HIGH){   // espera como funcion antirebote simple
 }

}

//Esquema de conexión ver el link https://github.com/RafaelLandy/Aprendiendo_arduino/tree/master/04_USO_DE_LA_FUNCION_WHILE
