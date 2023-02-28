#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){
    float raio,pi = 3.14159;

    printf("Digite o RAIO do Circulo: ");
    scanf("%f",&raio);
    printf("DIAMETRO do Circulo: %.1f\n",raio * 2);
    printf("CIRCUNFERENCIA do Circulo: %.1f\n",2 * pi * raio);
    printf("AREA do Circulo: %.1f",pi * (raio * raio));
}