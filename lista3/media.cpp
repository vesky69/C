#include <stdio.h>

int main () {
    int num1, num2, average;

    printf("Digite a primeira nota: ");
    scanf("%i", &num1);

    printf("Digite a segunda nota: ");
    scanf("%i", &num2);

    average = (num1 + num2) / 2;
    if (average >= 6) {
        printf("Aprovado.");
    } else {
        printf("Reprovado.");
    }
    return 0;
}