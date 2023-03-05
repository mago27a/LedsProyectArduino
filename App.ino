const int ledPin[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};

void setup()
{
}

void loop()
{
    pinMode(ledPin,OUTPUT);
}

/*Metodos*/

void serie1()
{
    int i = 0;
   

    for (int i = 0; i < sizeof(ledPin); i++)
    {
        digitalWrite(ledPin[i], HIGH);
        delay(500);
        digitalWrite(ledPin[i], LOW);
        delay(500);
    }
}

void serieRandom();
