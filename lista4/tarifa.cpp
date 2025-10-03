#include <stdio.h>

int main () {
    int age, studant;

    printf("Digite sua idade: ");
    scanf("%i", &age);

    printf("Você é um estudante?"
        "\n Digite 1 para sim ou 2 para não: ");
    scanf("%i", &studant);

    if (age >= 60) {
        printf("Meia tarifa.");
    } else if (age < 6) {
        printf("Gratuito.");
    } else if (age <= 25 && studant == 1) {
        printf("Meia tarifa.");
    } else {
        printf("Tarifa cheia.");
    }

    return 0;
}
