#include <stdio.h>
#include <stdlib.h>


int main(){


float vetor[5];
int i;


// codigo = 0 ... finalize
// codigo = 1 ... mostrar vetor na ordem direta
// codigo = 2 ... mostrar vetor na ordem inversa


for(i = 1; i <= 5; i++){

    printf("vetor[%d]: ", i);
    scanf("%f", &vetor[i]);
}


int codigo;

printf("\nDigite 0 para finalizar o programa");
printf("\nDigite 1 para imprimir o vetor");
printf("\nDigite 2 para imprimir o vetor na ordem inversa");
printf("\nDigite o codigo");
printf("\n");
scanf("%d", &codigo);


switch(codigo){

case 0:
printf("Finalizando ... ");
break;


case 1:

for(i = 1; i <= 5; i++){

 printf("\nvetor[%d]: %.1f", i, vetor[i]);
}
break;



case 2:

for(i = 5; i >= 1; i--){

printf("\nvetor[%d]: %.1f", i, vetor[i]);
}
break;



default:

printf("Codigo invalido");
break;

}




return 0;
}


