#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

float pi = 3.141592, raio, altura, volume;



printf("Digita o raio: ");
scanf("%f", &raio);


printf("\nAltura: ");
scanf("%f", &altura);



volume = pi * pow(raio, 2) * altura;

printf("\nVolume: %f", volume);

return 0;
}

