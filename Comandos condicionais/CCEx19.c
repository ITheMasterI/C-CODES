#include <stdio.h>
#include <stdlib.h>



int main(){



int num;

scanf("%d", &num);


if(num % 3 == 0 && num % 5 == 0){

    printf("Null");

}else{

if(num % 3 == 0){


printf("Divisivel por 3");

}else if(num % 5 == 0){


printf("Divisivel por 5");

}


}






return 0;
}

