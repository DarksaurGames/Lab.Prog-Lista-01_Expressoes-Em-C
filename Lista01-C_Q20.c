#include <stdio.h>

int main(void){
    int numero;

    printf("Digite um numero: ");
    scanf("%d",&numero);

    switch(numero % 2)
    {
        case 0:
            printf("O valor e PAR.");
            break;
        default:
            printf("O valor e IMPAR.");
            break;
    }
}