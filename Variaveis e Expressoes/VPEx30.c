#include <stdio.h>
#include <stdlib.h>

int main(){


//Leia um valor em real e a cotação do dolar, imprima o valor em dolar


float real, dolares;

printf("Digite o valor em reais: ");

scanf("%f", &real);



printf("\nDigite o valor da cotacao do dolar: ");
scanf("%f", &dolares);



dolares = real * 5.79;





printf("%.2f dolares", dolares);



return 0;
}

