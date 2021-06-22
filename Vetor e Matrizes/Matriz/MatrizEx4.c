#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "");


int matriz[4][4], i, j;


for(i = 1; i <= 4; i++){
    for(j = 1; j <= 4; j++){

        printf("Matriz[%d][%d]: ", i,  j);

        scanf("%d", &matriz[i][j]);
    }
}




int valor;

valor = matriz[1][1];

int posicaoLinha, posicaoColuna;


for(i = 1; i <= 4; i++){
    for(j = 1; j <= 4; j++){

        if(matriz[i][j] > valor){

            matriz[i][j] = valor;
            posicaoLinha = i;
            posicaoColuna = j;

        }
    }
}








   printf("\nO maior valor est‡ localizado na linha %d e na coluna %d", posicaoLinha, posicaoColuna);







return 0;
}
