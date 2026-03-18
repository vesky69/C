#include <stdio.h>

int main()
{
    int num1, num2, num3, result;
    printf("Digite o valor de num1: ");
	scanf("%i", &num1); 

    printf("Digite o valor de num2: ");
	scanf("%i", &num2); 

	printf("Digite o valor de num3: ");
	scanf("%i", &num3);

    result = num1 * num2 * num3;
    printf("O produto é: %i", result);
    return 0;
}