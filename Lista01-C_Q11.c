#include<stdio.h>

int main(void){
    float real,cotacao,dolar;

printf("|--------------------------|\n");
printf("|* CONVERSOR  DE  DOLARES *|\n");
printf("|--------------------------|\n");

printf("Digite a COTACAO ATUAL do dolar: ");
scanf("%f",&cotacao);
printf("Digite o valor em REAL para converter: ");
scanf("%f",&real);
dolar = (real / cotacao);
printf("Valor em DOLAR: %.2f",dolar);
}