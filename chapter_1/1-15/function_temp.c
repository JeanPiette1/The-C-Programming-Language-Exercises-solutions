#include <stdio.h>

void    fahr_to_celsius(int max, int lower)
{
    int fahr, step;
    float celsius;

    step = 20;
    fahr = lower;
    printf("Farhenheit : 0 equivalent Celsius : -17.8\n");
    fahr += step;
    while (fahr <= max)
    {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("\t\t   %3d\t\t\t\t\t  %6.1f\n", fahr, celsius);
        fahr += step;
    }
}

int main(void)
{
    int max, lower;

    max = 300;
    lower = 0;
    fahr_to_celsius(max, lower);
    return (0);
}