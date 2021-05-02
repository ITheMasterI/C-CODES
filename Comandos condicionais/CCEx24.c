#include <stdio.h>
#include <stdlib.h>



int main(){

float valor, imposto;
char estado;

printf("Digite o valor: ");
scanf("%d", &valor);



printf("\nDigite o estado: ");
scanf(" %c", &estado);




if(estado == 'MG'){


imposto = 0.07 * valor;

imposto = imposto + valor;


printf("%f", valor);

}else if(estado == 'SP'){


imposto = 0.12 * valor;

imposto = imposto + valor;


printf("%f", valor);





}else if(estado == 'RJ'){



imposto = 0.15 * valor;

imposto = imposto + valor;


printf("%f", valor);





}else if(estado == 'MS'){



imposto = 0.08 * valor;

imposto = imposto + valor;


printf("%f", valor);






}else{

printf("Estado Invalido");


}




return 0;
}

