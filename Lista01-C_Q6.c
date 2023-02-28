#include<stdio.h>

int main(void){

    float altura,peso_ideal;
    char sexo;

    puts("Digite o valor de sua altura (em metros): ");
    scanf("%f",&altura);
    printf("Digite qual o seu sexo: (M/F)");
    scanf(" %c",&sexo);

    if(sexo == 'M'){
        peso_ideal = ((72.7 * altura) - 58);
        printf("Peso Ideal: %.1f\n",peso_ideal);
    } else {
        peso_ideal = ((62.1 * altura) - 44.7);
        printf("Peso Ideal: %.1f\n",peso_ideal);
    }

}