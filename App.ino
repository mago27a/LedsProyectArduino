/*
led1=2; led2=3...led9=10;
*/

int seriesLed[3][9] = {
    {2, 3, 4, 5, 6, 7, 8, 9, 10},
    {3, 5, 7, 9, 0, 0, 0, 0, 0},
    {2, 4, 6, 8, 10, 0, 0, 0, 0},
    {2, 4, 10, 8, 7, 0, 0, 0, 0},
    {2, 8, 7, 3, 10, 7, 9, 4, 6},
};

void setup()
{
    setMatrizToOutput(seriesLed);
}

void loop()
{

    illunimateSerieLed();
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

int obtener_valor_aleatorio()
{
    int indice = random(9);
    return valores[indice];
}

void serie1()
{
    int i = 0;

    for (int i = 0; i < sizeof(ledPin); i++)
    {
        // digitalWrite(ledPin[i], HIGH);
        // delay(500);
        // digitalWrite(ledPin[i], LOW);
        // delay(500);

        onLed(i, 500);
        offLed(i, 500);
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
            onLed(pin, 1000);
            offLed(pin, 1000);
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
