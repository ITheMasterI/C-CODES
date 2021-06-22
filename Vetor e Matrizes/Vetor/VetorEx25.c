#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int n = 10;
int i, v[n];




for(i = 1; i <= n; i++){ // n = 10;

    printf("vetor[%d]: ", i);
    scanf("%d", &v[i]);
}


//Calculando media


float media, soma = 0;



for(i = 1; i <= n; i++){


soma+=v[i];

}

media = soma / n;




//Calculando DP

float somatorio;


for(i = 1; i <= n; i++){

somatorio = somatorio + pow(v[i] - media, 2);

}


float DP;

for(i = 1; i <= n; i++){


DP = sqrt(somatorio / (n - 1));

}


printf("Desvio Padrao: %.1f", DP);






return 0;
}

