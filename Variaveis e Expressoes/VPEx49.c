#include <stdio.h>
#include <stdlib.h>

int main(){

int horaInicial, minutoInicial, segundoInicial, duracao;

float horaFinal, minutoFinal, segundoFinal;


//Inicio Experiencia biologica

printf("Hora Inicial: ");
scanf("%d", &horaInicial);



printf("\nMinuto Inicial: ");
scanf("%d", &minutoInicial);



printf("\nSegundo Inicial: ");
scanf("%d", &segundoInicial);



//Duracao em segundos

printf("\nDuracao em segundos: ");
scanf("%d", &duracao);



horaFinal = duracao / 3600;

minutoFinal =  duracao / 60;

segundoFinal = duracao;



printf("\nHora final: %f", horaFinal);

printf("\nMinuto Final: %f", minutoFinal);

printf("\nSegundo Final: %f", segundoFinal);


return 0;
}


