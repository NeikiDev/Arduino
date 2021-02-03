
//Aufgabe 3


//WIE AUF DEM ARBEITSBLATT =

int LED=9;                           // LED = wert 9 (steckpin)
int helligkeit=0;                    // = start wert 0 
int fadeschritte=5;                  // = geschwindigkeit des "fadens"

void setup() {

    pinMode(LED, OUTPUT);

}


void loop() {

analogWrite(LED, helligkeit);
helligkeit=helligkeit + fadeschritte;
delay(25);
if(helligkeit== 0 || helligkeit== 255)
{
    fadeschritte= -fadeschritte
}

}
