#include <stdio.h>

int main () {
    int age;

    printf("Digite sua idade: ");
    scanf("%i", &age);

    if (age <= 0 || age > 130) {
        printf("Idade invalida.");
    } else if (age >= 18) {
        printf("Maior de idade.");
    } else {
        printf("Menor de idade");
    }
    return 0;
}