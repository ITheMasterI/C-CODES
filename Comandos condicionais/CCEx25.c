#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int a, b, c, delta, raiz;
float x1, x2;


scanf("%d %d %d", &a, &b, &c);


delta = pow(b, 2) - 4 * a * c;


if(delta < 0){

    printf("Nao existe real");


}else if(delta == 0){


x1 = (-b + sqrt(delta)) / (2 * a);

printf("x1 = x2 = %f", x1);

}else{

x1 = (-b + sqrt(delta)) / (2 * a);

x2 = (-b - sqrt(delta)) / (2 * a);


printf("x1: %f", x1);

printf("\nx2: %f", x2);
}








return 0;
}

