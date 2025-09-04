#include <stdio.h>

int main()
{
    int age, days;
    printf("Idade: ");
    scanf("%i", &age);
    
    days = age * 365;
    printf("Sua idade em dias: %i", days);
    return 0;
}