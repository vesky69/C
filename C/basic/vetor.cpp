#include <stdio.h>

int main()
{
    int tab[10]; //vetor de 10 posições

    for(int i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%i", &tab[i]);
    }

    for(int i = 9; i >= 0; i--){
        printf("%i\n", tab[i]);
    }
    return 0;
}