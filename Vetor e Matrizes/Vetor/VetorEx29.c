#include <stdio.h>
#include <stdlib.h>


int main(){


int vetor[6], i;


for(i = 1; i <= 6; i++){

    printf("vetor[%d]: ", i);

    scanf("%d", &vetor[i]);
}





//Numeros pares digitados

for(i = 1; i <= 6; i++){

    if(vetor[i] % 2 == 0){

        printf("\nNumeros pares: %d", vetor[i]);
    }
}

printf("\n");






//Soma dos numeros pares digitados

int soma = 0;


for(i = 1; i <= 6; i++){

    if(vetor[i] % 2 == 0){

      soma = soma + vetor[i];
    }
}

printf("\nSoma dos numeros pares: %d", soma);


printf("\n");




//Numeros impares


for(i = 1; i <= 6; i++){

    if(vetor[i] % 2 != 0){

        printf("\nNumeros impares: %d", vetor[i]);
    }
}




printf("\n");





//Quantidade de numeros impares


int aux = 0;

for(i = 1; i <= 6; i++){

  if(vetor[i] % 2 != 0){

    aux++;
  }
}

printf("\nPossui %d impares", aux);



return 0;
}

