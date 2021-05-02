#include <stdio.h>
#include <stdlib.h>



int main(){


int idade, tempoServico;

scanf("%d %d", &idade, &tempoServico);




if((idade >= 65) || (tempoServico >= 30) || (idade >= 60 && tempoServico >= 25)){


printf("pode se aposentar");


}else{

printf("Nao pode se aposentar");

}






return 0;
}

