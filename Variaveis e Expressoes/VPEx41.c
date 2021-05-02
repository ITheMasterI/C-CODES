#include <stdio.h>
#include <stdlib.h>

int main(){

//leia o valor da hora de trabalhado e a quantidade de horas trabalhadas, imprima o resultado acrescentando 10% sobre o valor


int ValorHora, HorasTrabalhadas;


printf("Insira o valor das horas trabalhadas: ");
scanf("%d", &ValorHora);




printf("\nAgora insira a quantidade de horas trabalhadas: ");
scanf("%d", &HorasTrabalhadas);



int preco = ValorHora * HorasTrabalhadas;



float Pagar = preco + (preco * 0.1);


printf("\nValor a ser pago: %.2f", Pagar);

return 0;
}

