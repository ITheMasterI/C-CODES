#include <stdio.h>
#include <stdlib.h>

int main(){


char minusculo, maiusculo;

printf("Insira a letra em Maiusculo: ");
scanf(" %c", &maiusculo);


minusculo = maiusculo + 32;


printf("\n %c", minusculo);

return 0;
}


