// Nível Novato - Movimentação das Peças
// Implementação de Movimentação do Bispo

#include <stdio.h>

int main(){
    //Declarando a variável
    int mover = 0;

    //Utilizando "do-while" para mover 5 vezes o Bispo para diagonal ("Cima, Direita").

    do {
        printf("Cima Direita\n"); //Exibição do movimento indicado
        mover++; //Área da Incrementação
    } while (mover <= 4); //Área da condição
    


    return 0;
}