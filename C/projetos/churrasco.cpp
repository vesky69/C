#include <stdio.h>
#include <math.h>   //ceil() arredonda pra cima

int calcularPacotes(float quantidade_necessaria, int itens_por_pacote) {
    if ((int)(quantidade_necessaria * 10) % (itens_por_pacote * 10) == 0) {     //multiplicar por 10 pra evitar erro flutuante
        return (int)(quantidade_necessaria / itens_por_pacote);
    } else {
        return (int)(quantidade_necessaria / itens_por_pacote) + 1;
    }
}

int main()
{
    int homem, mulher, crianca;
    float batata, linguica, frango, costela, fraudinha;
    int paoAlho, refri, farofa, queijo, picole;

    //Entrada
    printf("Quantas mulheres terá no seu churrasco? ");
    scanf("%i", &mulher);

    printf("Quantos homens terá no seu churrasco? ");
    scanf("%i", &homem);

    printf("Quantas crianças terá no seu churrasco? ");
    scanf("%i", &crianca);
    
    //Processamento
    
    //Kilos
    batata    = homem * 0.2 + mulher * 0.15 + crianca * 0.1;
    linguica  = homem * 0.25 + mulher * 0.2 + crianca * 0.15;
    frango    = homem * 0.3 + mulher * 0.25 + crianca * 0.2;
    costela   = homem * 0.4 + mulher * 0.3 + crianca * 0.2;
    fraudinha = homem * 0.35 + mulher * 0.25 + crianca * 0.15;

    //Pacotes
    paoAlho = calcularPacotes(homem * 1 + mulher * 1 + crianca * 0.5, 6);

    queijo = calcularPacotes(homem * 0.5 + mulher * 0.5 + crianca * 0.3, 6);

    farofa = calcularPacotes(homem * 0.1 + mulher * 0.1 + crianca * 0.05, 1);
 
    //Refrigerante
    int total_ml = homem * 600 + mulher * 500 + crianca * 500;
    refri = ceil(total_ml / 2000.0); // garrafas de 2L

    //Unidade
    picole = crianca * 2;

    //Saída
    printf("Pão de alho: %i pacotes"                                   
        "\nRefrigerante: %i garrafas"                                         
        "\nBatata doce: %.1fkg"                                           
        "\nFarofa: %i pacotes"                                         
        "\nLinguiça temperada: %.1fkg"                                   
        "\nFrango: %.1fkg"                                                
        "\nCostela: %.1fkg"                                               
        "\nFraudinha: %.1fkg"                                             
        "\nQueijo coalho: %i pacotes"                                   
        "\nPicolé: %i unidades",                                        
    
        paoAlho, refri, batata, farofa, linguica, 
        frango, costela, fraudinha, queijo, picole);                                       

    return 0;
}