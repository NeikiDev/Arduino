
/*

 Alle Pins können auch nur mit den Input und outputs angegeben werden. ZB:

 pinMode(7, OUTPUT);

 */


int piezo=5;
int bewegung=7;
int bewegungsstatus=0;


void setup() {
    
    pinMode(piezo, OUTPUT); //Piezo (Pin 5) Ausgang.
    pinMode(bewegung, INPUT); // Bewegungsmelder (Pin 7) Eingang.

    }


void loop() {

bewegungsstatus=digitalRead(bewegung);

if (bewegungsstatus == HIGH)

{
    
digitalWrite(piezo, HIGH);
Delay(5000);
digitalWrite(piezo, LOW);

}
 else   
{
digitalWrite(piezo, LOW);
}
}