#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

int num1, num2, num3, op;
float aritimetica, geometrica, harmonica, ponderada;


printf("Insira os valores dos numeros: ");

scanf("%d %d %d", &num1, &num2, &num3);


printf("\nAgora escolha uma das opcoes abaixo: ");

printf("\nDigite 1 para media geometrica");
printf("\nDigite 2 para media ponderada");
printf("\nDigite 3 para media harmonica");
printf("\nDigite 4 para media aritimetica");
printf("\n");
scanf("%d", &op);



switch(op){

case 1:

geometrica = cbrt(num1 * num2 * num3);

printf("Media Geometrica: %f", geometrica);

break;



case 2:

ponderada = (num1 + (2 * num2) + (3 * num3)) / 6;

printf("Media Ponderada: %f", ponderada);

break;



case 3:


harmonica = 1.0 / ((1.0 / num1) + (1.0 / num2) + (1.0 / num3));


printf("Media Harmonica: %f", harmonica);

break;





case 4:

aritimetica = (num1 + num2 + num3) / 3;

printf("Media aritimetica: %f", aritimetica);



break;

}



return 0;
}

