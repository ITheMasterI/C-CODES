#include <stdio.h>

int main() {

int numero, primeiro = 0, segundo = 0, terceiro = 0, quarto = 0;

scanf("%d", &numero);

primeiro = numero / 1000;
numero = numero % 1000;


segundo = numero / 100;
numero = numero % 100;


terceiro = numero / 10;
numero = numero % 10;

quarto = numero / 1;
numero = numero % 1;


printf("%d", primeiro);
printf("\n%d", segundo);
printf("\n%d", terceiro);
printf("\n%d", quarto);







return 0;
}
