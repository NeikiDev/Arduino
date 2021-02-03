int LEDblau=6;
int taster=7;
int tasterstatus=0;


void setup() {
    
  
    pinMode(LEDblau, OUTPUT); //(Pin 6)  Ausgang.
    pinMode(taster, INPUT); // (Pin 7)  Eingang.

    /* 

    Andere Schreibweise:
    
    
        pinMode(6, OUTPUT); //pin 6 blaue LED
        pinMode(7, INPUT); //pin 7 taster

    
    */

    }


    void loop() {
      
        tasterstatus=digitalRead(taster);

        if (tasterstatus == HIGH)

        {

            digitalWrite(LEDblau, HIGH);
            delay(5000);
            digitalWrite(LEDblau, LOW);

        }
        else
        {
        digitalWrite(LEDblau, LOW);
        }
    }



    /*

    Andere Schreibweise:

  tasterstatus=digitalRead(7);

        if (tasterstatus == HIGH)

        {

            digitalWrite(6, HIGH);
            delay(5000);
            digitalWrite(6, LOW);

        }
        else
        {
        digitalWrite(6, LOW);
        }




    */