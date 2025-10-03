#include <stdio.h>

int main () {
    int num1, num2, num3;

    printf("Digite o valor de num1: ");
    scanf("%i", &num1);

    printf("Digite o valor de num2: ");
    scanf("%i", &num2);

    printf("Digite o valor de num3: ");
    scanf("%i", &num3);

    if (num1 > num2 && num1 > num3) {
        printf("%i é maior.", num1);
    } else if (num2 > num1 && num2 > num3) {
        printf("%i é maior.", num2);
    } else {
        printf("%i é maior.", num3);
    }

    return 0;
}