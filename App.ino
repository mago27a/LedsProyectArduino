/*
led1=2; led2=3...led9=10;
*/

int seriesLed[5][9] = {
    {2, 3, 4, 5, 6, 7, 8, 9, 10},
    {3, 5, 7, 9, 0, 0, 0, 0, 0},
    {2, 4, 6, 8, 10, 0, 0, 0, 0},
    {2, 4, 10, 8, 7, 0, 0, 0, 0},
    {2, 8, 7, 3, 10, 7, 9, 4, 6},
};

int speedsDelay[] = {300, 600, 900, 1200, 1500, 1800, 2100, 2400};

void setup()
{
    setMatrizToOutput(seriesLed);
}

void loop()
{
  illunimateSerieLed(seriesLed);
}

/*Metodos*/

/*iniciar serie loop*/
/*reiniciar serie*/
/*pasar al asiguiente serie */
/*retroceder serie*/
/*deterner apagar*/

/*setMatrizSeries*/
void setMatrizToOutput(int arr[5][9])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            int value = arr[i][j];
            pinMode(value, OUTPUT);
        }
    }
}


void illunimateSerieLed(int arr[][9])
{
    int pin;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 9; i++)
        {
            pin = arr[i][j];
            onLed(pin, velocityDelayLeds(speedsDelay));
            offLed(pin, velocityDelayLeds(speedsDelay));
        }
    }
}

// void serieRandom()
// {

//     int i = 0;

//     for (int i = 0; i < sizeof(ledPin); i++)
//     {
//         onLed(i, 500);
//         offLed(i, 500);
//     }
// }

void onLed(int pin, int msTime)
{
    if (pin == 0)
        return;
    digitalWrite(pin, HIGH);
    delay(msTime);
}
void offLed(int pin, int msTime)
{
    if (pin == 0)
        return;
    digitalWrite(pin, LOW);
    delay(msTime);
}

int velocityDelayLeds(int arr[])
{
    int longArr = sizeof(arr);
    int index=0;
    int currentValue=arr[index];  

    return currentValue;
     
}
