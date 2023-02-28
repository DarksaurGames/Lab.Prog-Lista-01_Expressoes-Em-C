#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//SB = Salário Bruto
//SL = Salário Líquido

int main(){
    float hora_aula, INSS, SB, SL, desconto;
    int horas_trabalhadas, hora_trab_mes;

    printf("Informe o valor da hora aula: \n");
    scanf("%f", &hora_aula);
    printf("Informe o total de horas trabalhadas por dia: \n");
    scanf("%d", &horas_trabalhadas);
    printf("Informe o percentual de disconto do INSS\n");
    scanf("%f", &INSS);

    hora_trab_mes = (horas_trabalhadas*30);

    printf("O total de horas trabalhadas por mes e: %d\n", hora_trab_mes);

    SB = hora_trab_mes*hora_aula;

    desconto = ((INSS*SB)/100);

    SL = SB - desconto;

    printf("\nO seu salario bruto e de: %.2f", SB);
    printf("\nO seu salario liquido e de: %.2f", SL);

    return 0;
}