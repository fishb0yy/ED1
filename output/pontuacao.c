#include <stdio.h>

int main(){
    //criando a variavel e o ponteiro
    int pontuacao = 0;
    int *ponteiro_pontuacao;

    //ponteiro apontando para a variavel

    ponteiro_pontuacao = &pontuacao;

    printf("pontuacao inicial: %d \n", *ponteiro_pontuacao);

    for(int i= 0; i < 3 ; i++){
        *ponteiro_pontuacao += 10;
       
    }
     printf("pontuacao atual: %d \n", *ponteiro_pontuacao);


return 0;

}