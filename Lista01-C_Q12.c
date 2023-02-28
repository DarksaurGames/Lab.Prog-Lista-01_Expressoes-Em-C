#include<stdio.h>

int main(void){
    int valor1,valor2;
    float numero1,numero2;
    char opcao;

    printf("Deseja calcular valores INTEIROS ou DECIMAIS?(I/D) ");
    scanf(" %c",&opcao);

    if(opcao == 'I'){
        printf("Digite o VALOR 1: ");
        scanf("%d",&valor1);
        printf("Digite o VALOR 2: ");
        scanf("%d",&valor2);
        printf("SOMA: %d\n",valor1 + valor2);
        printf("DIFERENCA: %d\n",valor1 - valor2);
        printf("PRODUTO: %d\n",valor1 * valor2);
        printf("QUOCIENTE: %d\n",valor1 / valor2);
        printf("RESTO DA DIVISAO: %d",valor1 % valor2);

    } else if(opcao == 'D'){
        printf("Digite o VALOR 1: ");
        scanf("%f",&numero1);
        printf("Digite o VALOR 2: ");
        scanf("%f",&numero2);
        printf("SOMA: %.2f\n",numero1 + numero2);
        printf("DIFERENCA: %.2f\n",numero1 - numero2);
        printf("PRODUTO: %.2f\n",numero1 * numero2);
        printf("QUOCIENTE: %.2f\n",numero1 / numero2);

    }

    
}