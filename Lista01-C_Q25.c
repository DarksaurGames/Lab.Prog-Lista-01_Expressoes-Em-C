#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

        int segundos,horas,minutos,segunds;

        printf("Digite um tempo em SEGUNDOS: ");
        scanf("%d",&segundos);
        minutos = segundos / 60;
        horas = minutos / 60;
        segunds = horas * 3600;
        printf("Tempo em HORAS: %d\n",horas);
        printf("Tempo em MINUTOS: %d\n",minutos);
        printf("Tempo em SEGUNDOS: %d",segunds);
    
}