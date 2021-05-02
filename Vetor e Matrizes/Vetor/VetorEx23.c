#include <stdio.h>
#include <stdlib.h>


int main(){


float X[5], Y[5];
int i;


for(i = 1; i <= 5; i++){

    printf("X[%d]: ", i);
    scanf("%f", &X[i]);
}



for(i = 1; i <= 5; i++){

    printf("Y[%d]: ", i);
    scanf("%f", &Y[i]);
}


float PEscalar;




PEscalar = (X[1] * Y[1]) + (X[2] * Y[2]) + (X[3] * Y[3]) + (X[4] * Y[4]) + (X[5] * Y[5]);



printf("\nProduto Escalar: %.1f", PEscalar);


return 0;
}

