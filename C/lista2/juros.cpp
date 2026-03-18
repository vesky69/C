#include <stdio.h>

int main()
{
    float capital, rate, time, simple, compound;
    printf("Capital: ");
    scanf("%f", &capital);
    
    printf("Taxa: ");
    scanf("%f", &rate);
    
    printf("Tempo: ");
    scanf("%f", &time);
    
    simple = capital * rate * time;
    printf("Juros simples: %.2f", simple);
    
    compound = capital * ((1 + rate) * time);
    printf("\nJuros compostos: %.2f", compound);
    
    return 0;
}