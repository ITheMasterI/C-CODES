#include <stdio.h>
#include <stdlib.h>


int main(){


int vetor[20], i;


for(i = 1; i <= 20; i++){

    printf("Num[%d]: ", i);
    scanf("%d", &vetor[i]);

}





for(i = 1; i <= 20; i++){
  for(int j = i + 1; j <= 20; j++){

    if(vetor[i] == vetor[j]){

      vetor[i] = -1;
    }
  }
  printf("\nvetor[%d]: %d", i, vetor[i]);
}




return 0;
}


