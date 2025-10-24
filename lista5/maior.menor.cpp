#include <stdio.h>

int main()
{
    float lowest, highest, value;

    for(int i = 0; i < 10; i++){
        printf("Digite um número: ");
        scanf("%f", &value);
        
        if(i == 0){  
            highest = value;
            lowest = value;
        } else {
            if(value > highest){
                highest = value;
            }
            if(value < lowest){
                lowest = value;
            }
        }
    }

    printf("Maior: %.2f \nMenor: %.2f", highest, lowest); 
    
    return 0;
}

/* #include <stdio.h>            EXEMPLO DO PROFESSOR

int main()
{
    float lowest, highest, value;
    
    printf("Digite um número: ");
    scanf("%f", &value);

    highest = value;
    lowest = value;

    for(int i = 1; i < 10; i++){
        printf("\nDigite um número: ");
        scanf("%f", &value);
        
        if(value > highest){
            highest = value;
        } else if (value < lowest){
            lowest = value;
        }
    }

    printf("Maior: %.2f \nMenor: %.2f", highest, lowest);
            
    return 0;
} */