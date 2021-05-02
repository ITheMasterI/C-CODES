#include <stdio.h>
#include <stdlib.h>


int main(){

int vetor[5], i;


for(i = 1; i <= 15; i++){

    printf("num[%d]: ", i);
    scanf("%d", &vetor[i]);
}



float media = 0, aux = 0;

for(i = 1; i <= 15; i++){


media = media + vetor[i];

}



printf("\nMedia: %.1f", media / 15);


return 0;
}

