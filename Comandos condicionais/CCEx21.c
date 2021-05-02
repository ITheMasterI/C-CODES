#include <stdio.h>
#include <stdlib.h>



int main(){

int valor1, valor2, opcao;



printf("Escolha uma das opcoes abaixo: ");
printf("\nDigite 1 para soma");
printf("\nDigite 2 para subtracao");
printf("\nDigite 3 para multiplicacao");
printf("\nDigite 4 para divisao");
printf("\n");
scanf("%d", &opcao);


printf("\nValor1: ");
scanf("%d", &valor1);

printf("\nValor2: ");
scanf("%d", &valor2);



switch(opcao){


case 1:
printf("\nSoma: %d", valor1 + valor2);

break;

case 2:
printf("\nSubtracao: %d", valor1 - valor2);

break;

case 3:
printf("\nMultiplicacao: %d", valor1 * valor2);

break;

case 4:
printf("\nDivisao: %d", valor1 / valor2);

break;

default:
printf("\nOpcao Invalida");
break;
}


return 0;
}

