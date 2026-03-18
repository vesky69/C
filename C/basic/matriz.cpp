#include <stdio.h>
#define LIN 4
#define COL 5

int main()
{
    int m [LIN][COL];

    for(int i = 0; i < LIN; i++){
        printf("Digite um valor: ");
        scanf("%i", &m[i][i]);
    }
    return 0;
}