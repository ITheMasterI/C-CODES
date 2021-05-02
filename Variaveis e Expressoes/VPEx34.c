#include <stdio.h>
#include <stdlib.h>

int main(){

//calcular a area do circulo

float pi = 3.141592;
int raio;

scanf("%d", &raio);


float area = pi * pow(raio, 2);



printf("Area: %f", area);

return 0;
}
