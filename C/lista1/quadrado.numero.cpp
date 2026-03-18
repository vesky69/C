#include <stdio.h>
#include <math.h> //biblioteca de matematica

int main()
{
    int num;
    double squareRoot;

    printf("Digite um número: ");
    scanf("%i", &num);

    squareRoot = sqrt(num); //função que calcula raiz quadrada, retorna o valor em double
    printf("Raiz quadrada: %.2f", squareRoot);
    return 0;
}