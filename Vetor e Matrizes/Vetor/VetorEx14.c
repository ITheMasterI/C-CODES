#include <stdio.h>
#include <stdlib.h>


int main(){


int vetor[10], i;


for(i = 1; i <= 10; i++){

    printf("Num[%d]: ", i);
    scanf("%d", &vetor[i]);

}



for(i = 1; i <= 10; i++){ //comeca na posicao 1
  for(int j = i + 1; j <= 10; j++){ //comeca na posicao 2

    if(vetor[i] == vetor[j]){ // se o vetor[1] == vetor[2]

         printf("\nRepetidos: %d", vetor[i]);
    }
  }
}




return 0;
}


