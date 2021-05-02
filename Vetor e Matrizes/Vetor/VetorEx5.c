#include <stdio.h>
#include <stdlib.h>


int main(){


int vetor[10], i;


for(i = 1; i <= 10; i++){

    printf("vetor[%d]: ", i);

    scanf("%d", &vetor[i]);
}



int aux = 0;

for(i = 1; i <= 10; i++){

    if(vetor[i] % 2 == 0){

        aux++;



    }
}

printf("\nPossui %d valores pares", aux);








return 0;
}

