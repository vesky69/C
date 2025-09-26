#include <stdio.h>

int main () {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%i", &num);

    if (num > 0) {
        printf("%i é um numero positivo.", num);
    } else if (num < 0) {
        printf("%i é um numero negativo.", num);
    } else {
        printf("Zero.");
    }
    return 0;
}