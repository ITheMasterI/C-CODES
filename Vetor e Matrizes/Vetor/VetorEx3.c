#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

int vetor[10], i, vetorB[10];


for(i = 1; i <= 10; i++){

    printf("vetor[%d]: ", i);

    scanf("%d", &vetor[i]);
}




for(i = 1; i <= 10; i++){


vetorB[i] = pow(vetor[i], 2);

}


for(i = 1; i <= 10; i++){


printf("\n%d", vetorB[i]);

}





return 0;
}

