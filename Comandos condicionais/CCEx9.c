#include <stdio.h>
#include <stdlib.h>



int main(){


float salario, prestacao;

scanf("%f %f", &salario, &prestacao);


salario = (0.2 * salario);


if(prestacao > salario){

printf("Emprestimo nao concedido");

}else{

printf("Emprestimo concedido");

}




return 0;
}
