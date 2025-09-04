#include <stdio.h>

int main()
{
    float num1, num2, num3, arithmeticMean;
    printf("Digite o valor de num1: ");
	scanf("%f", &num1); 

    printf("Digite o valor de num2: ");
	scanf("%f", &num2); 

	printf("Digite o valor de num3: ");
	scanf("%f", &num3);
	
	arithmeticMean = num1 + num2 + num3 / 3;
	printf("Média Aritmética = %f", arithmeticMean);
	
	return 0;
}