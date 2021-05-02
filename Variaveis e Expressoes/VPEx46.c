#include <stdio.h>
#include <stdlib.h>

int main(){


int numero, u, d, c;


scanf("%d", &numero);

c = numero / 100;
numero = numero % 100;


d = numero / 10;
numero = numero % 10;


u = numero / 1;
numero = numero % 1;

printf("%d%d%d", u, d, c);


return 0;
}


