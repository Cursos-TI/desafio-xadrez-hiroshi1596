#include <stdio.h>

// --- FUNÇÕES RECURSIVAS ---

// Movimentação da Torre: Move-se para a Direita
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1); // Chamada recursiva diminuindo o contador
    }
}

// Movimentação da Rainha: Move-se para a Esquerda
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1); // Chamada recursiva diminuindo o contador
    }
}

// Movimentação do Bispo: Combina recursividade com loops aninhados
void moverBispo(int casas) {
    if (casas > 0) {
        // Loop Externo: Representa a componente Vertical (Cima)
        for (int vertical = 1; vertical <= 1; vertical++) {
            // Loop Interno: Representa a componente Horizontal (Direita)
            for (int horizontal = 1; horizontal <= 1; horizontal++) {
                printf("Cima\n");
                printf("Direita\n");
            }
        }
        moverBispo(casas - 1); // Próxima casa da diagonal
    }
}

int main() {
    // --- MOVIMENTAÇÃO DA TORRE ---
    printf("Movimentação da Torre:\n");
    moverTorre(5);
    printf("\n");

    // --- MOVIMENTAÇÃO DO BISPO ---
    printf("Movimentação do Bispo:\n");
    moverBispo(5);
    printf("\n");

    // --- MOVIMENTAÇÃO DA RAINHA ---
    printf("Movimentação da Rainha:\n");
    moverRainha(8);
    printf("\n");

    // --- MOVIMENTAÇÃO DO CAVALO (LOOPS COMPLEXOS) ---
    printf("Movimentação do Cavalo:\n");
    
    // Loop com variáveis múltiplas e condições múltiplas
    // O Cavalo move 2 para cima e 1 para a direita
    for (int i = 1, j = 0; i <= 3; i++) {
        
        // Condição para os dois primeiros passos (Vertical)
        if (i <= 2) {
            printf("Cima\n");
            continue; // Pula para a próxima iteração do loop i
        }
        
        // Condição para o último passo (Horizontal) utilizando variável j
        if (j == 0) {
            printf("Direita\n");
            j++; // Incrementa para sinalizar que o movimento lateral ocorreu
            break; // Finaliza o movimento em L
        }
    }

    return 0;
}
