/*
led1=2; led2=3...led9=10;
*/

/*btn1es*/
int btn1 = 12;

int seriesLed[5][9] = {
    {2, 3, 4, 5, 6, 7, 8, 9, 10},
    {3, 5, 7, 9, 0, 0, 0, 0, 0},
    {2, 4, 6, 8, 10, 0, 0, 0, 0},
    {2, 4, 10, 8, 7, 0, 0, 0, 0},
    {2, 8, 7, 3, 10, 7, 9, 4, 6},
};

int speedsDelay[] = {300, 600, 900, 1200, 1500, 1800, 2100, 2400};
/*currentSerie*/
int currentSerie = 0;
int longArr = 5;

void setup()
{
    pinMode(btn1, INPUT);
    setMatrizToOutput(seriesLed);
}

void loop()
{
    if (digitalRead(btn1) == HIGH)
    {
        currentSerie++;

        if (i >= longArr)
        {
            i = 0;
        }
    }
    illunimateSerieLed(seriesLed, currentSerie);
    delay(200);
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

/*
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
*/

void illunimateSerieLed(int arr[][9], int currentSerie)
{

    // Si se presiona el botón, avanzamos al siguiente valor del arreglo
    /* if (digitalRead(btn1) == HIGH)
     {
         i++;

         if (i >= longArr)
         {
             i = 0;
         }
     }
 */
    for (int j = 0; j < 9; j++)
    {
        pin = arr[currentSerie][j];
        onLed(pin, 1000);
        offLed(pin, 1000);
    }
    delay(100);
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
    int index = 0;
    int currentValue = arr[index];

    return currentValue;
}
