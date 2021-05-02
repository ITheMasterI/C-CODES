#include <stdio.h>
#include <stdlib.h>



int main(){

int num;



scanf("%d", &num);



if(num % 2 == 0){

 for(int i = 0; i <= num; i = i + 2){

printf("\n%d", i);

}


}else{

printf("valor invalido");

}






return 0;
}
