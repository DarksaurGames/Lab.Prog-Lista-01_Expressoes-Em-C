#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int valor1,valor2;

int main(void){

printf("Digite o PRIMEIRO VALOR: ");
scanf("%d",&valor1);
printf("Digite o SEGUNDO VALOR: ");
scanf("%d",&valor2);

switch(valor1 % valor2)
{
    case 0:
        printf("O valor %d E MULTIPLO do valor %d.\n",valor1,valor2);
        break;
    default:
    printf("O valor %d NAO E MULTIPLO do valor %d.\n",valor1,valor2);
    break;
}
}