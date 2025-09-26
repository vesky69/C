#include <stdio.h>

int main () {
    int num1, num2;

    printf("Digite o valor de num1: ");
    scanf("%i", &num1);

    printf("Digite o valor de num2: ");
    scanf("%i", &num2);

    if (num1 > num2) {
        printf("%i é maior.", num1);
    } else if (num1 == num2) {
        printf("Iguais.");
    } else {
        printf("%i é maior.", num2);
    }
    
    return 0;
}