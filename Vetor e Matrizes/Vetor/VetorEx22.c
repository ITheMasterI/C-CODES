#include <stdio.h>
#include <stdlib.h>


int main(){


int A[10], B[10], i;


for(i = 1; i <= 10; i++){

printf("A[%d]: ", i);
scanf("%d", &A[i]);

}




for(i = 1; i <= 10; i++){

printf("B[%d]: ", i);
scanf("%d", &B[i]);

}


int vetor[10];




for(i = 1; i <= 10; i++){

    if(i % 2 == 0){

        vetor[i] = A[i];

    }else{

    vetor[i] = B[i];

    }

}



for(i = 1; i <= 10; i++){


    printf("\nvetor[%d]: %d", i, vetor[i]);
}








return 0;
}

