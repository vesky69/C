#include <stdio.h>

int main () {
    int age;

    printf("Digite sua idade: ");
    scanf("%i", &age);

    if (age >= 60) {
        printf("Idoso.");
    } else if (age >= 30) {
        printf("Adulto.");
    } else if (age >= 18) {
        printf("Jovem adulto.");
    } else if (age >= 13) {
        printf("Adolescente.");
    } else {
        printf("Criança.");
    }

    return 0;
}
