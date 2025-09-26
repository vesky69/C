#include <stdio.h>

int main () {
    int grade;

    printf("Digite sua nota: ");
    scanf("%i", &grade);

    if (grade >= 9) {
        printf("Excelente.");
    } else if (grade >= 7) {
        printf("Bom.");
    } else if (grade >= 5) {
        printf("Regular.");
    } else {
        printf("Insuficiente.");
    }

    return 0;
}
