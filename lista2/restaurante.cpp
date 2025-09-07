#include <stdio.h>

int main()
{
    float bill, tax, service, total;
    
    printf("Valor consumido: ");
    scanf("%f", &bill);
    
    tax = bill * 0.08;
    service = bill * 0.10;
    total = bill + service + tax;
    
    printf("Total a pagar: %.2f", total);
    return 0;
}