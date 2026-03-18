#include <stdio.h>

int main () {
    float price, discount;

    printf("Digite o preço: ");
    scanf("%f", &price);

    if (price > 100) {
        discount = price - (price * 0.10);
        printf("Total a pagar: %.2f", discount);
    } else {
        printf("Total a pagar: %.2f", price);
    }

    return 0;
}