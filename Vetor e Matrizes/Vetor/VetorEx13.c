#include <stdio.h>
#include <stdlib.h>


int main(){

int vetor[5], i;


for(i = 1; i <= 5; i++){

    printf("Num[%d]: ", i);
    scanf("%d", &vetor[i]);

}

//Maior posicao

int maiorValor = vetor[1], maiorPosicao;


for(i = 1; i <= 5; i++){

if(vetor[i] > maiorValor){

    maiorValor = vetor[i];

    maiorPosicao = i;
}



}









//Menor posicao

int menorValor = vetor[1], menorPosicao;

for(i = 1; i <= 5; i++){

    if(vetor[i] < menorValor){

        menorValor = vetor[i];

        menorPosicao = i;

    }
}








printf("\nMaior posicao: %d", maiorPosicao);

printf("\nMenor posicao: %d", menorPosicao);


return 0;
}


