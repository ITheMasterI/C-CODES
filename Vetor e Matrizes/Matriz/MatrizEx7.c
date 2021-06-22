#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){

setlocale(LC_ALL, "");


int A[10][10], i, j;




for(i = 1; i <= 10; i++){
    for(j = 1; j <= 10; j++){

        		if(i < j) {

			A[i][j] = (2 * i) - (7 * j) - 2;

			}else if(i == j) {

			A[i][j] =  (3 * Math.pow(i, 2)) - 1;

			}else {

			A[i][j] = (4 * Math.pow(i, 3)) - (5 * Math.pow(i, 2)) + 1;

			}

    }
}





for(i = 1; i <= 10; i++){
    for(j = 1; j <= 10; j++){

			printf("%d", A[i][j]);

		}
		printf("\n");
	}







return 0;
}

