#include <stdio.h>

int main() {

float numero, horas, minutos, segundos;

scanf("%f", &numero);



horas = numero / 3600;

minutos = numero / 60;

segundos = numero;


printf("%f horas", horas);
printf("\n%f minutos", minutos);
printf("\n%f segundos", segundos);


return 0;
}
