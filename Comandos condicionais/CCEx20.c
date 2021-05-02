#include <stdio.h>
#include <stdlib.h>



int main(){

int A, B, C;

scanf("%d %d %d", &A, &B, &C);



if(A > B + C || B > A + C || C > A + B){


printf("Nao existe triangulo");

}else{

if(A == B & A == C && B == C){

    printf("Triangulo equilatero");

}else if(A == B || A == C || B == C){


printf("Triangulo Isosceles");

}else{

printf("Triangulo escaleno");

}



}



return 0;
}

