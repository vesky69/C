#include <stdio.h>

int main()
{
    int hours, minutes, seconds, secondsLeft;
    
    printf("Quantidade em segundos: ");
    scanf("%i", &seconds);
    
   // Calcula as horas
    hours = seconds / 3600;
    // Calcula os minutos restantes
    minutes = (seconds % 3600) / 60;
    // Calcula os segundos restantes 
    secondsLeft = seconds % 60;
    
    printf("%i:%i:%i", hours, minutes, secondsLeft);
    return 0;
}