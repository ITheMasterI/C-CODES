#include <stdio.h>
#include <stdlib.h>


int main(){


int vetorA[10], vetorB[10], i;



for(i = 1; i <= 10; i++){

printf("vetorA[%d]: ", i);
scanf("%d", &vetorA[i]);

}

printf("\n");


for(i = 1; i <= 10; i++){

printf("vetorB[%d]: ", i);
scanf("%d", &vetorB[i]);

}


int vetorC[10];


for(i = 1; i <= 10; i++){

vetorC[i] = vetorA[i] - vetorB[i];

}


for(i = 1; i <= 10; i++){

printf("\nvetorC[%d]: %d", i, vetorC[i]);

}




return 0;
}
