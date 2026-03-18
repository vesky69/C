#include <stdio.h>

int main () {
    int age;

    printf("Digite sua idade: ");
    scanf("%i", &age);

    if (age <= 0 || age > 130) {
        printf("Idade invalida.");
    } else if (age >= 18) {
        printf("Adulto.");
    } else if (age >= 13) {
        printf("Juvenil.");
    } else {
        printf("Infantil.");
    }

    return 0;
}