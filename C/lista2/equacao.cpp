#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, x1, x2, delta;
    printf("A: ");
    scanf("%lf", &a);
    
    printf("B: ");
    scanf("%lf", &b);
    
    printf("C: ");
    scanf("%lf", &c);
    
    delta = b * b - 4 * a * c;
    printf("Delta: %.2f", delta);
    
    if (delta < 0) {
        printf("\nA equacao nao possui raizes reais (Delta < 0)\n"); 
    } else if (delta == 0) {
        // Equação com uma raiz real
        x1 = -b / (2 * a);
        printf("\nA equacao possui uma raiz real: x1 = %.2lf\n", x1); 
    } else {
        // Equação com duas raízes reais
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a); 
        printf("A equacao possui duas raizes reais: \n");
        printf("x1 = %.2lf\n", x1); 
        printf("x2 = %.2lf\n", x2); 
    }
    
    return 0;
}