#include<stdio.h>

int main(void){

    int dias_trabalhados;
    float salario,desconto;

    printf("Qual a sua quantidade de dias trabalhados? ");
    scanf("%d",&dias_trabalhados);

    if(dias_trabalhados <= 10){
        salario = dias_trabalhados * 50.25;
        printf("Salario a receber: %.2f",salario - ((salario * 10) / 100));

    } else if(dias_trabalhados > 10 && dias_trabalhados <= 20){
        //desconto = 50.25 - ((50.25 * 10) / 100);
        salario = ((dias_trabalhados * 50.25) + ((50.25 * 20) / 100));
        printf("Salario a receber: %.2f",salario - ((salario * 10) / 100));

    } else if(dias_trabalhados > 20){
        //desconto = 50.25 - ((50.25 * 10) / 100);
        salario = ((dias_trabalhados * 50.25) + ((50.25 * 30) / 100));
        printf("Salario a receber: %.2f",salario - ((salario * 10) / 100));
    }
}