#include <stdio.h>

int main () {
    int key;

    printf("Digite sua senha: ");
    scanf("%i", &key);

    if (key == 1234) {
        printf("Acesso permitido.");
    } else {
        printf("Acesso negado.");
    }

    return 0;
}