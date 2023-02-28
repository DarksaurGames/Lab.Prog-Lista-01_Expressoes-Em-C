#include<stdio.h>

int main(void){

    int A,B,reserva;

    printf("Digite o valor de A: ");
    scanf("%d",&A);
    printf("Digite o valor de B: ");
    scanf("%d",&B);

    reserva = A;
    A = B;
    B = reserva;

    printf("Agora, o valor de A e: %d\n",A);
    printf("Agora, o valor de B e: %d\n",B);

}