//Aufgabe 5

int LEDblau = 3;
int LEDrot = 5;
int LEDgruen=6;


int p=1000;


int brightness1a = 150;
int brightness1b = 150;
int brightness1c = 150;


int dunkel = 0;


void setup(){
     
    pinMode(LEDblau, OUTPUT);
    pinMode(LEDgruen, OUTPUT);
    pinMode(LEDrot, OUTPUT);


    /* 

    Andere Varianten:

    pinMode(3, OUTPUT); //blau
    pinMode(5, OUTPUT); // rot
    pinMode(6, OUTPUT); // grün
    
    */
    
    
    }


    void loop(){
        
        analogWrite(LEDblau, brightness1a); //blau einschalten
        delay(p); //pause
        analogWrite(LEDblau, dunkel); //blau ausschalten
        analogWrite(LEDrot, brightness1b); //rot einschalten
        delay(p); //pause
        analogWrite(LEDrot, dunkel); //rotausschalten
        analogWrite(LEDgruen, brightness1c); //gruen einschalten
        delay(p); //pause
        analogWrite(LEDgruen, dunkel); //gruenausschalten}




    /*

    Oder:


        analogWrite(3, 150);
        delay(p); 
        analogWrite(3, 0);
        analogWrite(5, 150);
        delay(p);
        analogWrite(5, 0); 
        analogWrite(6, 150); 
        delay(p);
        analogWrite(6, 0);




    */




    }