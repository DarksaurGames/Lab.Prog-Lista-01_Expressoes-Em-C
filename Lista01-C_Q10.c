#include <stdio.h>

int main(void){

    float comprimento,largura,altura;

    printf("Digite o COMPRIMENTO da caixa retangular: ");
    scanf("%f",&comprimento);
    printf("Digite a LARGURA da caixa retangular: ");
    scanf("%f",&largura);
    printf("Digite a ALTURA da caixa retangular: ");
    scanf("%f",&altura);

    printf("O VOLUME da caixa retangular e: %.1f",comprimento * largura * altura);
}   
