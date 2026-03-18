#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    printf("Temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5) + 32;
    printf("Temperatura em Fahrenheit: %f", fahrenheit);
    return 0;
}