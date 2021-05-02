#include <stdio.h>
#include <stdlib.h>


int main(){


int nAluno[10], i;
float altura[10];



for(i = 1; i <= 10; i++){

printf("Insira o numero do aluno[%d]: ", i);
scanf("%d", &nAluno[i]);

}


printf("\n");

for(i = 1; i <= 10; i++){

printf("Insira a altura do aluno[%d]: ", i);
scanf("%f", &altura[i]);


}



//mais baixo e seu numero

float maisBaixo = altura[1];
int numeroBaixo;

for(i = 1; i <= 10; i++){

if(altura[i] < maisBaixo){

    maisBaixo = altura[i];
    numeroBaixo = nAluno[i];

}


}




//mais alto

float maisAlto = altura[1];
int numeroAlto;

for(i = 1; i <= 10; i++){

if(altura[i] > maisAlto){

    maisAlto = altura[i];
    numeroAlto = nAluno[i];
}


}



printf("\nMais Baixo: %.2f Numero: %d", maisBaixo, numeroBaixo);

printf("\nMais Alto: %.2f Numero: %d", maisAlto, numeroAlto);


return 0;
}

