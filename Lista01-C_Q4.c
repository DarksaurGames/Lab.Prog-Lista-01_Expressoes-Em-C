#include <stdio.h>

int main(void){

    float valor;

    printf("Digite o valor: ");
    scanf("%f",&valor);
    printf("\nTriplo: %.1f",valor*3);
    printf("\nQuadrado: %.1f",valor * valor);
    printf("\nMeio: %.1f",valor/2);

    return 0;
}