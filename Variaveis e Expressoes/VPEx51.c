#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){


float x, y, xOrigem = 0, yOrigem = 0, distancia;


printf("Insira X: ");
scanf("%f", &x);



printf("Insira Y: ");
scanf("%f", &y);


distancia = sqrt(pow(x - xOrigem,2) + pow(y - yOrigem ,2));


printf("\nDistancia: %.1f", distancia);


return 0;
}


