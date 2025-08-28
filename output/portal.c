#include <stdio.h>
int main(){
    //declarando variavel e ponteiro
    float coordenada_x;
    float *ponteiro_x;

    //ponteiro apontando para a variavel
    ponteiro_x = &coordenada_x;

    //usuario fornecendo o valor da coordenada x
    printf("insira a coordenada X:");
    scanf("%f", &coordenada_x);

    //mostrando o valor fornecido 
    printf("Posicao do portal no eixo X:%f\n", coordenada_x);

    //mostrando onde a coordenada esta armazenada
    printf("Endereco do portal para teletransporte: %p", ponteiro_x);

    return 0;
}