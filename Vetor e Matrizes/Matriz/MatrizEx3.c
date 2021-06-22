#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "");


int matriz[4][4], i, j;


for(i = 1; i <= 4; i++){

    for(j = 1; j <= 4; j++){



        matriz[i][j] = i * j;

    }
}





for(i = 1; i <= 4; i++){

    for(j = 1; j <= 4; j++){


       printf("%d", matriz[i][j]);


    }

    printf("\n");
}










return 0;
}

