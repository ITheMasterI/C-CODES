#include <stdio.h>
#include <stdlib.h>


int main(){


float vetor[5], maiorValor, menorValor, media;
int i;

for(i = 1; i <= 5; i++){

    printf("Num[%d]: ", i);
    scanf("%f", &vetor[i]);

}


//Maior valor

maiorValor = vetor[1];

for(i = 1; i <= 5; i++){

    if(vetor[i] > maiorValor){

        maiorValor = vetor[i];

    }
}


//Menor valor

menorValor = vetor[1];

for(i = 1; i <= 5; i++){

    if(vetor[i] < menorValor){

        menorValor = vetor[i];

    }
}


// Media

for(i = 1; i <= 5; i++){

media = media + vetor[i];
}



printf("\nMaior: %f", maiorValor);
printf("\nMenor: %f", menorValor);
printf("\nMedia: %f", media / 5);

return 0;
}

