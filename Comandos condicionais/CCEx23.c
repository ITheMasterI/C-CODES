#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(){

setlocale(LC_ALL, "");

int ano;

scanf("%d", &ano);



if((ano % 400 == 0 || ano % 4 == 0) && ano % 100 != 0) {


printf("é ano bissexto");

}else{

printf("Nao é bissexto");

}




return 0;
}

