#include <stdio.h>
#include <stdlib.h>


int main(){


int vetor[10], i;


for(i = 1; i <= 10; i++){

    printf("vetor[%d]: ", i);

    scanf("%d", &vetor[i]);
}




int maiorValor;

maiorValor = vetor[1];

for(i = 1; i <= 10; i++){

    if(vetor[i] > maiorValor){

        maiorValor = vetor[i];


    }
}


int menorValor;

menorValor = vetor[1];

for(i = 1; i <= 10; i++){

    if(vetor[i] < menorValor){

        menorValor = vetor[i];


    }
}




printf("Maior valor: %d\n", maiorValor);

printf("Menor valor: %d\n", menorValor);




return 0;
}

