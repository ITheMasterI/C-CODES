#include <stdio.h>
#include <stdlib.h>



int main(){


int Km, l;
float consumo;


scanf("%d %d", &km, &l);



consumo = (km / l);


if(consumo < 8){

    printf("Venda o carro");

}else if(consumo >= 8 && consumo <= 14){

printf("Economico");

}else{

printf("Super economico");

}





return 0;
}

