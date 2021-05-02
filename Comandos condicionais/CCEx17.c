#include <stdio.h>
#include <stdlib.h>



int main(){


float baseMaior, baseMenor, altura, area;

scanf("%f %f %f", &baseMaior, &baseMenor, &altura);



if(baseMaior > 0 && baseMenor > 0){


area = ((baseMaior + baseMenor) * altura) / 2;


printf("Area: %f", area);

}else{


printf("bases invalidas");

}







return 0;
}

