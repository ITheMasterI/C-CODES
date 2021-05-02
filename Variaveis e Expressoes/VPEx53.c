#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){


float c, l, p, total;

printf("Insira o comprimento: ");
scanf("%f", &c);


printf("\nInsira a largura: ");
scanf("%f", &l);


printf("\nInsira o preco do material: ");
scanf("%f", &p);




total = (p * c) + (p * l);




printf("\nTotal a pagar: %f", total);

return 0;
}


