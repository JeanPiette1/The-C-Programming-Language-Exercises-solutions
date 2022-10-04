#include <stdio.h>

int main(void)
{
    int step, celsius, fahr; // i use int and not float for usual view of temperature

    step = 10;
    celsius = -30;
    printf ("Celsius :   equivalent fahrenheit :\n");
    printf("------------------------------------\n");
    while (celsius <= 60)
    {
        fahr = (celsius * 1.8) + 32;
        printf("\t  %6d\t\t\t\t\t %3d\n", celsius, fahr);
        celsius += step;
    }
}