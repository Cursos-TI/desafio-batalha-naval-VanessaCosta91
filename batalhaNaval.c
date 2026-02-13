#include <stdio.h>

int main() {
    

    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};    
    int tabuleiro[10][10] = {0}; 
    int navioHorizontal[3] = {3,3,3};
    int navioVertical[3] = {3,3,3};

    // Posição dos navios

    int linhaH = 2, colunaH = 4; 
    int linhaV = 5, colunaV = 1; 

    for(int i = 0; i < 3; i++) {
        tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
    }

     for(int i = 0; i < 3; i++) {
        tabuleiro[linhaV + i][colunaV] = navioVertical[i];
    }

    // Motra tabuleiro
    printf("TABULEIRO BATALHA NAVAL\n\n");
    printf("  ");
    for (int j=0; j<10; j++){
        printf("%c ", linha[j]);
    }
    printf("\n");
    for(int i = 1; i < 11; i++) {
        printf("%d ", i);
    
        for (int j=0; j<10; j++) {
        printf("%d ", tabuleiro[i-1][j]);
            }

        printf("\n");
    }
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
