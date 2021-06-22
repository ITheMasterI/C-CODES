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



int X;

printf("\nDigite um valor para X: ");
scanf("%d", &X);







int posicaoLinha, posicaoColuna;


for(i = 1; i <= 5; i++){
    for(j = 1; j <= 5; j++){

        if(X == matriz[i][j]){

            posicaoLinha = i;
            posicaoColuna = j;

            printf("Esta na linha: %d, coluna: %d", posicaoColuna, posicaoColuna);

        }else {

        printf("Valor n‹o encontrado");

        }

    }
}



return 0;
}

