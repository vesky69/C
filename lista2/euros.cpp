#include <stdio.h>

int main()
{
    float real, dollarExRate, dollar, euro;
    printf("Valor em reais: ");
    scanf("%f", &real);

    printf("Cotação do dólar: ");
    scanf("%f", &dollarExRate);

    dollar = real / dollarExRate;
    printf("Valor em dólares: %.2f", dollar);
    
    euro = dollar / 1.1;
    printf("\nValor em euros: %.2f", euro);

    return 0;
}