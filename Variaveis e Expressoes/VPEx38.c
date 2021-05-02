#include <stdio.h>
#include <stdlib.h>

int main(){


//Ler um salario e calcular um aumento de 25%


float salario;


scanf("%f", &salario);



float aumento = 0.25 * salario;







printf("novo salario com aumento: %.2f", salario + aumento);


return 0;
}

