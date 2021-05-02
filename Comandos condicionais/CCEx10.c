#include <stdio.h>
#include <stdlib.h>



int main(){


float altura, peso;
char sexo;


printf("Insira a altura: ");
scanf("%f", &altura);




printf("Insira o sexo, digite H para homem e M para mulher: ");
scanf(" %c", &sexo);



if(sexo == 'H'){

peso = (72.7 * altura) - 58;

printf("Peso: %f", peso);



}else if(sexo == 'M'){

peso = (62.1 * altura) - 44.7;

printf("Peso: %f", peso);
}







return 0;
}
