#include <stdio.h>

int main() {
    int year;

    printf("Digite um ano: ");
    scanf("%i", &year);

    if (year % 400 == 0) {
        printf("Ano bissexto.");
    } else if (year % 100 == 0) {
        printf("Ano não bissexto.");
    } else if (year % 4 == 0) {
        printf("Ano bissexto.");
    } else {
        printf("Ano não bissexto.");
    }

    return 0;
}