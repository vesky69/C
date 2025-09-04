#include <stdio.h>

int main()
{
    float time, distance, aSpeed;
    printf("Distância percorrida em KM: ");
    scanf("%f", &distance);

    printf("Tempo gasto em horas: ");
    scanf("%f", &time);

    aSpeed = distance / time;

    if (time || distance <= 0)
    {
        printf("Erro: Insira valores positivos meiores que 0.");
    } else {
        printf("Velocidade média: %.2f KM/H", aSpeed);
    }
    return 0;
}