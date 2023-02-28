#include <stdio.h>

int main(void){

    float conta_restaur, pagamento_total;

    printf("Digite o valor da sua conta no restaurante: ");
    scanf("%f",&conta_restaur);
    pagamento_total = conta_restaur + ((conta_restaur * 10) / 100);
    printf("O total a se pagar pelo seu pedido e de: %.2f",pagamento_total);

}