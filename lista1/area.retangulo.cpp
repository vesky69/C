#include <stdio.h>

int main()
{
    float base, height, area;
    printf("Base do retângulo: ");
    scanf("%f", &base);

    printf("Altura do retângulo: ");
    scanf("%f", &height);

    area = base * height;
    printf("Área do retângulo: %f", area);
    return 0;
}