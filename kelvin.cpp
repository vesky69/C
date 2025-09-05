#include <stdio.h>

int main()
{
    float celsius, fahrenheit, kelvin;
    printf("Temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5) + 32;
    printf("Temperatura em Fahrenheit: %.2f", fahrenheit);
    
    kelvin = (5/9 * (fahrenheit - 32)) + 273,15;
    printf("\nTemperatura em Kelvin: %.2f", kelvin);
    return 0;
}

