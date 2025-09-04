#include <stdio.h>
#include <math.h>

int main()
{
    float area, radius;
    double PI = M_PI; //M_PI ajuda na recisão do valor PI

    printf("Raio do círculo: ");
    scanf("%f", &radius);

    area = PI * radius * 2;
    printf("Circunferência do círculo: %.2f", area);
    return 0;
}