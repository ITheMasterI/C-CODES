#include <stdio.h>
#include <stdlib.h>



int main(){


int a, b;

scanf("%d %d", &a, &b);


if(a > b){

  printf("a eh maior que b: %d ... diferenca entre eles: %d", a, a - b);

}else{

 printf("b eh maior que a: %d ... diferenca entre eles: %d", b, b - a);

}




return 0;
}
