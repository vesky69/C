#include <stdio.h>

int main() {

    int age, conTime;

    printf("Digite sua idade: ");
    scanf("%i", &age);

    printf("Tempo de contribuição: ");
    scanf("%i", &conTime);

    if (age >= 65 || conTime >= 35) {
        printf("Homem: Pode aposentar."
            "\nMulher: Pode aposentar.");
    } else if (age >= 60 || conTime >= 30) {
        printf("Homem: Não pode aposentar."
            "\nMulher: Pode aposentar.");
    } else {
        printf("Não pode aposentar.");
    }

    return 0;
}