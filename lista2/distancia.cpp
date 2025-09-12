#include <stdio.h>           //d = √((xB - xA)² + (yB - yA)²)
#include <math.h>

int main()
{
    double xA, xB, yA, yB, distance;

    printf("Digite a coordenada A: ");
    scanf("%lf", &xA);
    scanf("%lf", &yA);

    printf("Digite a coordenada B: ");
    scanf("%lf", &xB);
    scanf("%lf", &yB);

    distance = sqrt(((xB - xA) * (xB - xA)) + ((yB - yA) * (yB - yA)));
    printf("Distancia: %.2f", distance);

    return 0;
}