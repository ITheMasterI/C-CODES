#include <stdio.h>
#include <stdlib.h>

int main(){


//Receba o salario base sabendo que o funcionario tem gratificacao de 5% e paga 7% de imposto sobre o salario base


float SalarioBase;

printf("Insira o salario base: ");
scanf("%f", &SalarioBase);



//Recebendo 5% de gratificacao

float gratificacao = SalarioBase + (SalarioBase * 0.05);



//Descontando 7% do salario base



float desconto = gratificacao - (gratificacao * 0.07);




printf("\nSalario: %.2f", desconto);


return 0;
}

