#include <stdio.h>
#include <stdlib.h>


int main(){


int vetor[10], i;


for(i = 1; i <= 10; i++){

printf("vetor[%d]: ", i);
scanf("%d", &vetor[i]);

}


for(i = 1; i <= 10; i++){

if(vetor[i] < 0){

  vetor[i] = 0;
}

}



for(i = 1; i <= 10; i++){

printf("\nvetor[%d]: %d", i, vetor[i]);
}





return 0;
}


