#include <stdio.h>

int main(void){

    float celsius,fahrenheit;

printf("|------------------------------|\n");
printf("|* CONVERSOR  DE  TEMPERATURA *|\n");
printf("|------------------------------|\n");

printf("Digite o valor em CELSIUS a ser convertido: ");
scanf("%f",&celsius);
fahrenheit = (9 * celsius + 160) / 5;
printf("Valor em FAHRENHEIT: %.1f",fahrenheit);
}