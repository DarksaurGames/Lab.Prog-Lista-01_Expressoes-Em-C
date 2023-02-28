#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){
    int valor1,valor2;

    printf("Digite um valor: ");
    scanf("%d",&valor1);
    valor2 = abs(valor1);
    printf("Valor Absoluto de %d: %d",valor1,valor2);

}