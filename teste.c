
int main(){
//variavel da vida
int vida_jogador = 100;

//ponteiro da vida
int *ponteiro_vida;

//sofreu dano
vida_jogador = 50;

//mostrando o dano sofrido
printf("nosso personagem sofreu um dano!! vida atual: %d \n", vida_jogador);

//conectando o ponteiro
ponteiro_vida = &vida_jogador;

//coletando o power-up
*ponteiro_vida = 100;

//imprimindo a restauracao de vida
printf("power-up coletado e vida restaurada!! %d", vida_jogador);

    return 0;
}