#include <stdio.h>
#include <stdlib.h>


int main() {

//a
int A[6] = {1, 0, 5, -2, -5, 7};

//b

A[0] = 4;
A[1] = 10;
A[5] = 30;

int soma = A[0] + A[1] + A[5];

printf("\nSoma: %d", soma);

//c

A[4] = 100;

//d

printf("\n%d", A[0]);
printf("\n%d", A[1]);
printf("\n%d", A[2]);
printf("\n%d", A[3]);
printf("\n%d", A[4]);
printf("\n%d", A[5]);








return 0;
}
