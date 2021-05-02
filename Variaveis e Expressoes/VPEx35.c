#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){


//calcular o valor da hipotenusa

int a, b;

scanf("%d %d", &a, &b);



int hipotenusa = sqrt(pow(a,2) + pow(b,2));




printf("Hipotenusa: %d", hipotenusa);


return 0;
}

