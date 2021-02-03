
//Aufgabe 2


void setup() {

pinMode(7, OUTPUT) //LED 1 (blau)
pinMode(8, OUTPUT)  // LED 2 (blau)
 
}


void loop() {

digitalWrite(7, HIGH);
delay(1000);
digitalWrite(7, LOW);
digitalWrite(8, HIGH);
delay(1000);
digitalWrite(8, LOW);


}


