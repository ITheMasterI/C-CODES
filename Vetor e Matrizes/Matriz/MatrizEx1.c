#include <stdio.h>
#include <stdlib.h>


int main(){


int matriz[4][4], i, j;


for(i = 1; i <= 4; i++){
    for(j = 1; j <=4; j++){


        printf("Matriz[%d][%d]: ", i, j);
        scanf("%d", &matriz[i][j]);


    }
}

int aux = 0;

for(i = 1; i <= 4; i++){
    for(j = 1; j <=4; j++){

    if(matriz[i][j] > 10){

        aux++;

    }

    }
}




printf("\nPossui %d maiores que 10", aux);







return 0;
}
