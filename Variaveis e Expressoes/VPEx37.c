#include <stdio.h>
#include <stdlib.h>

int main(){

//leia um valor e calcule 12% de desconto


float valor;

scanf("%f", &valor);

float desconto = 0.12 * valor;


printf("Valor com desconto: %.2f", valor - desconto);

return 0;
}

