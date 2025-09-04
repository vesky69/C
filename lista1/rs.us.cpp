#include <stdio.h>

int main()
{
    float real, dollarExRate, dollar;
    printf("Valor em reais: ");
    scanf("%f", &real);

    printf("Cotação do dólar: ");
    scanf("%f", &dollarExRate);

    dollar = real / dollarExRate;
    printf("Valor em dólares: %f", dollar);

    return 0;
}