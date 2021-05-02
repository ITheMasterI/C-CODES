#include <stdio.h>
#include <stdlib.h>

int main(){

//calcular quanto sera pago para um encanador que ganha 30 reais/dia sabendo que sao descontados 8% para o IR


int ValorDia = 30, QntDias;



printf("Informe a quantidade de dias trabalhados: ");
scanf("%d", &QntDias);



int precoTotal = ValorDia * QntDias;

float precoDesconto = precoTotal - (precoTotal * 0.08);


printf("\nValor ja descontado: %.2f", precoDesconto);

return 0;
}

