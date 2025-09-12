#include <stdio.h>

int main ()
{
	float balance;
	
	printf("Digite o saldo: ");
	scanf("%f", &balance);
	
	if(balance >= 20){
		printf("Eba, eu vou ao cinema!");	
		balance = balance - 20;
		printf("\nSaldo final: %.2f", balance);
	} else {
		printf("POBRE");
	}
	
	return 0;
}
