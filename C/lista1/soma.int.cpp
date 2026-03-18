#include <stdio.h>

int main()
{
    int num1, num2, soma;
    printf("Digite o valor de num1: ");
	scanf("%i", &num1); 

	printf("Digite o valor de num2: ");
	scanf("%i", &num2);
	
	soma = num1 + num2;
	printf("Soma = %i", soma);
	
	return 0;
}