#include <stdio.h>
#include <stdlib.h>



int main(){


float nota1, nota2;

scanf("%f %f", &nota1, &nota2);


if((nota1 < 0 || nota1 > 10) || (nota2 < 0 || nota2 > 10)){


    printf("Nota invalida");

}else{

float media = (nota1 + nota2) / 2;

printf("Media: %f", media);

}




return 0;
}
