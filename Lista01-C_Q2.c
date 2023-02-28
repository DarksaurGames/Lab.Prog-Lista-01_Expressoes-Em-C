#include <stdio.h>

int main(void){

    int valor;

    printf("Digite o valor: ");
    scanf("%d",&valor);
    printf("Hexadecimal: %X\n",valor);
    printf("Octal: %o",valor);

    return 0;

}