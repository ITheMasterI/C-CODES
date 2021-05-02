#include <stdio.h>
#include <stdlib.h>

int main(){


//Um valor ser‡ dividido entre 3 pessoas, calcule a quantia que ser‡ dividida entre as 3 pessoas

int premio = 780000;

//primeiro ganhara 46%
float primeiro = 0.46 * premio;

printf("O Primeiro ganhara: %.2f", primeiro);



//o segundo ganhara 32%

float segundo = 0.32 * premio;



printf("\nO Segundo ganhara: %.2f", segundo);


// o terceiro ganhara o restante


float terceiro = 0.22 * premio;




printf("\nO terceiro ganhara: %.2f", terceiro);


return 0;
}

