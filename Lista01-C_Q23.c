#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int A,B,C,reserva;

    printf("Digite um NUMERO de 3 DIGITOS: ");
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    printf("O numero e: %d %d %d\n",A,B,C);
    reserva = A;
    A = C;
    C = reserva;
    printf("Agora, o numero e: %d %d %d",A,B,C);
}