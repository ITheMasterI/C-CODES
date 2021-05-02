#include <stdio.h>
#include <stdlib.h>


int main(){

int vetor[6], i;


for(i = 1; i <= 6; i++){

    printf("vetor[%d]: ", i);

    scanf("%d", &vetor[i]);
}




for(i = 1; i <= 6; i++){


    printf("\n%d", vetor[i]);

}








return 0;
}

