#include <stdio.h>
#include <math.h>

int main()
{
    float area, radius, perimeter;
    double PI = M_PI; //M_PI ajuda na precisão do valor PI

    printf("Raio do círculo: ");
    scanf("%f", &radius);

    perimeter = PI * radius * 2;
    area = PI * (radius * radius);
    printf("Circunferência do círculo: %.2f \nÁrea do círculo: %.2f", perimeter, area);
    return 0;
}