#include <stdio.h>
#include <stdlib.h>


int main(){

int vetor[10], i;


for(i = 1; i <= 10; i++){

    printf("vetor[%d]: ", i);

    scanf("%d", &vetor[i]);
}


int maiorValor, posicao;

maiorValor = vetor[1];


for(i = 1; i <= 10; i++){

    if(vetor[i] > maiorValor){

        maiorValor = vetor[i];

         posicao = i;
    }
}


for(i = 1; i <= 10; i++){

    printf("\nVetor[%d]: %d", i, vetor[i]);
}


printf("\n");

printf("\nMaior valor: %d \nPosicao: %d", maiorValor, posicao);



return 0;
}

