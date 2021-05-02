#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){


int num;

scanf("%d", &num);


if(num > 0){


float base = log10(num);

printf("%f", base);
}else{

printf("Numero invalido");

}




return 0;
}
