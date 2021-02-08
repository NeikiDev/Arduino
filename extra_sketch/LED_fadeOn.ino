// Fade in LED (langsames Faden bis Helligkeit = 255 (AN))


int LED=9;
int helligkeit=0;
int fadeschritte=5;

void setup()  {

pinMode(LED, OUTPUT);


}


void loop() {

    analogWrite(LED, helligkeit);
    helligkeit=helligkeit + fadeschritte;
    delay(100);
    
    if(helligkeit== 255) 
    {
        fadeschritte= 0;
    }

}