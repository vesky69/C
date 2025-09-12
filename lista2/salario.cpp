#include <stdio.h>

int main()
{
    float salary, raise, discount;

    printf("Digite seu salário: ");
    scanf("%f", &salary);

    raise = salary + (salary * 0.15);
    printf("Aumento: %.2f", raise);

    discount = salary - (salary * 0.10);
    printf("Desconto: %.2f", discount);
    return 0;
}