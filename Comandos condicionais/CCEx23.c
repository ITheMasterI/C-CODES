#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(){

setlocale(LC_ALL, "");

int ano;

scanf("%d", &ano);



if((ano % 400 == 0 || ano % 4 == 0) && ano % 100 != 0) {


printf("� ano bissexto");

}else{

printf("Nao � bissexto");

}




return 0;
}

