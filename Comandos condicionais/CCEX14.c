#include <stdio.h>
#include <stdlib.h>



int main(){

float Nl, Nas, Nef, MP;

scanf("%f %f %f", &Nl, &Nas, &Nef);


MP = ((2 * Nl) + (3 * Nas) + (5 * Nef)) / (2 + 3 + 5);



if(MP >= 5){

printf("Aluno aprovado");

}

if(MP >= 3 && MP <= 4.9){


printf("Aluno de recuperacao");

}else if(MP >= 0 && MP <= 2.9){


printf("aluno reprovado");

}





return 0;
}

