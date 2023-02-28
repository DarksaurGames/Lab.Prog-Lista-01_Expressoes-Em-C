#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

    float valor1,valor2,valor3,media_aritmetica,media_geom1,media_geomdef;

    printf("Digite o PRIMEIRO VALOR: ");
    scanf("%f",&valor1);
    printf("Digite o SEGUNDO VALOR: ");
    scanf("%f",&valor2);
    printf("Digite o TERCEIRO VALOR: ");
    scanf("%f",&valor3);

    media_aritmetica = (valor1 + valor2 + valor3) / 3;
    media_geom1 = (valor1 * valor2 * valor3);
    media_geomdef = pow(media_geom1, 1.0/3.0);

    printf("MEDIA ARITMETICA: %.2f\n",media_aritmetica);
    printf("MEDIA GEOMETRICA: %.2f",media_geomdef);


}