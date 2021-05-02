#include <stdio.h>
#include <stdlib.h>


int main(){


int vetor[10];
int i, x;


for(i = 1; i <= 10; i++){

    printf("vetor[%d]: ", i);
    scanf("%d", &vetor[i]);
}



printf("Insira um valor inteiro para x: ");
scanf("%d", &x);



for(i = 1; i <= 10; i++){

  if(vetor[i] % x == 0){

    printf("\nMultiplos de %d = %d", x, vetor[i]);
  }
}


return 0;
}


