#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){


int num, raiz, quadrado;

scanf("%d", &num);


if(num > 0){

raiz = sqrt(num);
quadrado = pow(num, 2);

printf("Num ao quadrado: %d", quadrado);
printf("\nRaiz: %d", raiz);

}




return 0;
}
