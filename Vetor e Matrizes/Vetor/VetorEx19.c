#include <stdio.h>
#include <stdlib.h>


int main(){


int vetor[10];
int i, x;


for(i = 1; i <= 50; i++){

vetor[i] = (i + 5 * i) % (i + 1);
}


for(i = 1; i <= 50; i++){

printf("\nvetor[%d]: %d", i, vetor[i]);
}











return 0;
}


