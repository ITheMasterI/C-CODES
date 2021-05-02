#include <stdio.h>
#include <stdlib.h>

int main(){

//Ajude vendedores. A partir do valor total lido:


float valor;

scanf("%f", &valor);



//Total a pagar com 10% de deconsto

float desconto = valor - (valor * 0.1);




printf("\nTotal com desconto: %.2f", desconto);


//O valor de cada parcela, no parcelamento de 3x sem juros


float parcela = valor / 3;


printf("\nTotal de cada parcela: %.2f", parcela);

//A comissao do vendedor, no case a venda seja a vista(5% do valor com desconto)


float comissaoD = desconto * 0.05;


printf("\nComissao com desconto: %.2f", comissaoD);


//a comissao do vendedor, no caso da venda ser parcelada(5% sobre o valor total)



float comissaoT = valor * 0.05;



printf("\nComissao do valor total: %.2f", comissaoT);

return 0;
}

