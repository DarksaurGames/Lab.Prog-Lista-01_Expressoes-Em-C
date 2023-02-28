#include <stdio.h>

int main(void){

    int valor,sucessor,antecessor;

    printf("Digite um valor: ");
    scanf("%d",&valor);
    antecessor = valor - 1;
    sucessor = valor + 1;
    printf("Antecessor: %d\n",antecessor);
    printf("Sucessor: %d",sucessor);
}