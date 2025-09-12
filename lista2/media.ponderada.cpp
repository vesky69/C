#include <stdio.h>

int main()
{
    float weight, num1, num2, num3, weightedAverage;

    printf("Digite o valor de num1 (peso 1): ");
    scanf("%f", &num1);

    printf("Digite o valor de num2 (peso 2): ");
    scanf("%f", &num2);

    printf("Digite o valor de num3 (peso 3): ");
    scanf("%f", &num3);

    weightedAverage = ((num1 * 1) + (num2 * 2) + (num3 * 3)) / (1 + 2 + 3);
    printf("Média ponderada: %.2f", weightedAverage);
    return 0;
}