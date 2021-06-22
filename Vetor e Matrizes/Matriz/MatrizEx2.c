#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "");


int matriz[5][5], i, j;



for(i = 1; i <= 5; i++){
    for(j = 1; j <= 5; j++){

        printf("Matriz[%d][%d]: ", i,  j);

        scanf("%d", &matriz[i][j]);
    }
}




for(i = 1; i <= 5; i++){
    for(j = 1; j <= 5; j++){

        if(i == j){

            matriz[i][j] = 1;

        }else{

            matriz[i][j] = 0;

        }
    }
}




for(i = 1; i <= 5; i++){
    for(j = 1; j <= 5; j++){

      printf("%d", matriz[i][j]);
    }

    printf("\n");
}










return 0;
}
