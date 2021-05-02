#include <stdio.h>
#include <stdlib.h>

int main(){

int anoNascimento, idade, anoAtual;


printf("Insira o ano atual: ");
scanf("%d", &anoAtual);


printf("\ninsira a sua idade: ");
scanf("%d", &idade);


anoNascimento = anoAtual - idade;


printf("\nAno de nascimento: %d", anoNascimento);

return 0;
}


