#include <stdio.h>
//cirando a funcao void e os ponteiros 
void aplicar_powerup_pontuacao_dupla(int *pp){
    *pp = 2 *  (*pp);
}
//criando a funcao main
int main(){
    int pontuacao_jogador = 1500;
    //imprimindo pontuacao
    printf("pontuacao atualizada!! agora a pontuacao e de:\n %d", pontuacao_jogador);

    //chamando a funcao
    aplicar_powerup_pontuacao_dupla(&pontuacao_jogador);
    
    //imprimindo nova pontuacao
    printf("pontuacao atualizada!! agora a pontuacao e de: %d", pontuacao_jogador);
}