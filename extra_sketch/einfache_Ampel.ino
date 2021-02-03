
//Extra Aufgabe


void setup() {

 pinMode(7, OUTPUT); //roteLED
  pinMode(9, OUTPUT); //orangeLED
   pinMode(8, OUTPUT); //grüneLED

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



}