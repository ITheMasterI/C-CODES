#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "");


int i, j, matriz[3][3];
int soma = 0;


for(i = 1; i <= 3; i++){
    for(j = 1; j <= 3; j++){

        printf("matriz[%d][%d]: ", i, j);
        scanf("%d", &matriz[i][j]);
    }
}





for(i = 1; i <= 3; i++){
    for(j = 1; j <= 3; j++){

        if(i < j){

           soma = soma + matriz[i][j];
        }
    }
}


printf("\nSoma: %d", soma);




return 0;
}

