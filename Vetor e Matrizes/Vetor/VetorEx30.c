#include <stdio.h>
#include <stdlib.h>


int main(){


int v1[10], v2[10], i, j;



for(i = 1; i <= 10; i++){

printf("v1[%d]: ", i);

scanf("%d", &v1[i]);

}


printf("\n");


for(i = 1; i <= 10; i++){


printf("v2[%d]: ", i);

scanf("%d", &v2[i]);

}




int vInterseccao[10];



for(i = 1; i <= 10; i++){


    if(v1[i] == v2[i]){


       vInterseccao[i] = v1[i];

    }
}





for(i = 1; i <= 10; i++){

printf("\nVInterssecao[%d]: %d", i, vInterseccao[i]);

}









return 0;
}

