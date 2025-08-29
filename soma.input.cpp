#include <stdio.h>

int main()
{
	int soma, num1, num2;				
	
	scanf("%i", &num1); //funciona como o prompt, '&' obrigatório
	scanf("%i", &num2);
	
	soma = num1 + num2;
	printf("Soma = %i", soma);
	
	return 0;
}
