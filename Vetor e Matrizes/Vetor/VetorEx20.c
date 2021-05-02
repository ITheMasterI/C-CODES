#include <stdio.h>
#include <stdlib.h>


int main(){


int vetorA[10], i;

for(i = 1; i <= 10; i++){

printf("vetorA[%d]: ", i);
scanf("%d", &vetorA[i]);

}



int vetorB[10];


for(i = 1; i <= 10; i++){

    if(vetorA[i] % 2 != 0){

        vetorB[i] = vetorA[i];

    }else{
    vetorB[i] = -1;
    }

}



printf("vetorA: %d", vetorA[1]);
printf("vetorB: %d", vetorB[1]);

printf("\nvetorA: %d", vetorA[2]);
printf("vetorB: %d", vetorB[2]);


printf("\nvetorA: %d", vetorA[3]);
printf("vetorB: %d", vetorB[3]);


printf("\nvetorA: %d", vetorA[4]);
printf("vetorB: %d", vetorB[4]);


printf("\nvetorA: %d", vetorA[5]);
printf("vetorB: %d", vetorB[5]);


printf("\nvetorA: %d", vetorA[6]);
printf("vetorB: %d", vetorB[6]);


printf("\nvetorA: %d", vetorA[7]);
printf("vetorB: %d", vetorB[7]);


printf("\nvetorA: %d", vetorA[8]);
printf("vetorB: %d", vetorB[8]);


printf("\nvetorA: %d", vetorA[9]);
printf("vetorB: %d", vetorB[9]);


printf("\nvetorA: %d", vetorA[10]);
printf("vetorB: %d", vetorB[10]);







return 0;
}


