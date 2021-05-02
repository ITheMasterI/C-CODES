#include <stdio.h>

int main() {


int alturaDegrau, alturaAlcancar, qntDegrau;


printf("Insira a altura a alcancar: ");
scanf("%d", &alturaAlcancar);


printf("\nInsira a altura do degrau: ");
scanf("%d", &alturaDegrau);



qntDegrau = (alturaAlcancar / alturaDegrau);




printf("\nSubira %d degraus", qntDegrau);





return 0;
}
