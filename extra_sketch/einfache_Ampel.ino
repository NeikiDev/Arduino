
//Extra Aufgabe


void setup() {

  pinMode(7, OUTPUT); //rote LED
  pinMode(9, OUTPUT); //orange LED
  pinMode(8, OUTPUT); //grüne LED

 /*
   

   So auch möglich:

   int roteLED=7;

   pinMode(roteLED, OUTPUT);
  
 
  */
 
}


void loop() {

digitalWrite(7, HIGH);
delay(5000);
digitalWrite(9, HIGH);
delay(3000);
digitalWrite(7, LOW);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
delay(3000);
digitalWrite(9, HIGH);
delay(2000);
digitalWrite(8, LOW);
digitalWrite(7, HIGH);
delay(2000);
digitalWrite(9, LOW);
delay(100);


}