#include <stdio.h>
#include <stdlib.h>


int main(){

float vetor[10];
int i;


for(i = 1; i <= 10; i++){

    printf("Num[%d]: ", i);
    scanf("%f", &vetor[i]);

}


int aux = 0, soma = 0;

for(i = 1; i <= 10; i++){

    if(vetor[i] < 0){

    aux++;

    }/* else if(vetor[i] > 0){

    soma = soma + vetor[i];

    }
*/
}


for(i = 1; i <= 10; i++){

    if(vetor[i] > 0){

    soma = soma + vetor[i];

    }

}

printf("\nPossui %d valores negativos", aux);
printf("\nSoma dos positivos: %d", soma);


return 0;
}

