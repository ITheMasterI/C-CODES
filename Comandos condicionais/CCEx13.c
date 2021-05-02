#include <stdio.h>
#include <stdlib.h>



int main(){


float m1, m2, m3, mp;

scanf("%f %f %f", &m1, &m2, &m3);



mp = (1 * m1) + (1 * m2) + (2 * m3) / (1 + 1 + 2);





 if(mp >= 60){

printf("Aluno aprovado com media: %f", mp);

 }else{

printf("Aluno reprovado com media: %f", mp);

 }



return 0;
}

