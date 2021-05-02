#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){


float a;

scanf("%f", &a);




if(a > 0){

a = sqrt(a);

printf("Raiz quadrada: %f", a);

}else{

a = pow(a, 2);

printf("Numero ao quadrado : %f", a);

}








return 0;
}
