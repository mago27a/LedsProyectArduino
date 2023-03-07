const int ledPin[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
const int seriesLed[10][] = {
    {2, 3, 4, 5, 6, 7, 8, 9, 10},
    {3, 5, 7, 9},
    {2, 4, 6, 8, 10},
    {}}

void
setup()
{
    for (int i = 0; i < sizeof(seriesLed); i++)
    {
        for (int j = 0; j < sizeof(seriesLed[i]); j++)
        {
        }
    }
}

void loop()
{
    pinMode(ledPin, OUTPUT);
}

/*Metodos*/
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
        onLed(i,500);
        offLed(i,500);
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

void onLed(int indice, int msTime)
{
    digitalWrite(ledPin[indice], HIGH);
    delay(msTime);
}
void offLed(int indice, int msTime)
{
    digitalWrite(ledPin[indice], LOW);
    delay(msTime);
}
