
//Aufgabe 1


void setup() {

pinMode(13, OUTPUT); // LED steck pin
 
 
}


void loop() {


digitalWrite(13, HIGH);
delay(1000);
digitalWrite(13, LOW);
delay(1000);


}


// Aufgabe 1 b)

/* 

Delay ändern


BSP:

digitalWrite(13, HIGH);
delay(200);
digitalWrite(13, LOW);
delay(200);


*/