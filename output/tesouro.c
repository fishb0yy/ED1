#include <stdio.h>

int main(){
    //declarando e inicializando as variaveis e ponteiros
    int tesouro_local = 0;
    int *plataforma_secreta = &tesouro_local;
    
    //imprimindo o valor do tesouro
    printf("O tesouro ainda nao apareceu. Valor:%d", tesouro_local);

    //atribuindo o valor a variavel pelo ponteiro
    *plataforma_secreta = 1;

    //imprimindo o valor atual
    printf("O personagem pisou na plataforma secreta! O tesouro apareceu! Valor:%d", tesouro_local);


    return 0;
}