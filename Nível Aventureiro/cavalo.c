// Nível Aventureiro - Movimentação do Cavalo
// Implementação de Movimentação do Cavalo

#include <stdio.h>

int main(){
    
    int mover1 = 1; //Declarando a variavel do loop externo

    while(mover1 < 2) //Condição do loop externo
    {
        for(int mover2 = 0; mover2 < 2; mover2++) //Variavel do loop interno / Condição = / Incremento =
        {
            printf("Baixo\n"); //Exibição do movimento interno indicado
        }
        mover1++; //Incremento externo
        printf("Esquerda\n"); //Exibição do movimento externo indicado
    }



    return 0;
}