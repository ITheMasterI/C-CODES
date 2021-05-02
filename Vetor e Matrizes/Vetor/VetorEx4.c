#include <stdio.h>
#include <stdlib.h>


int main(){

int vetor[8], i;

for(i = 1; i <= 8; i++){

    printf("vetor[%d]: ", i);

    scanf("%d", &vetor[i]);
}



int X, Y;


X = vetor[4];

Y = vetor[2];


printf("\nSoma: %d", X + Y);




return 0;
}

