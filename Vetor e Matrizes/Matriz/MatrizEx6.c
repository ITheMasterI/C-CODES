#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "");


int matrizA[4][4], matrizB[4][4], i, j;



for(i = 1; i <= 4; i++){
    for(j = 1; j <=4; j++){


        printf("MatrizA[%d][%d]: ", i, j);
        scanf("%d", &matrizA[i][j]);


    }
}



for(i = 1; i <= 4; i++){
    for(j = 1; j <=4; j++){


        printf("\nMatrizB[%d][%d]: ", i, j);
        scanf("%d", &matrizB[i][j]);


    }
}



int matrizFinal[4][4];




for(i = 1; i <= 4; i++){
    for(j = 1; j <=4; j++){


            if(matrizA[i][j] > matrizB[i][j]){

                matrizFinal[i][j] = matrizA[i][j];

            }else{

                matrizFinal[i][j] = matrizB[i][j];

            }

        printf("\nMatrizFinal[%d][%d]: %d", i, j, matrizFinal[i][j]);

    }
}







return 0;
}

