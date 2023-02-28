#include<stdio.h>

int main(void){

    int horas,minutos,segundos,segundos_tot;

printf("Digite a hora: ");
scanf("%d",&horas);
printf("Digite os minutos: ");
scanf("%d",&minutos);
printf("Digite os segundos: ");
scanf("%d",&segundos);

segundos_tot = (horas * 3600) + (minutos * 60) + segundos;

printf("Total de Segundos: %d",segundos_tot);
}