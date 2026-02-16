#include <stdio.h>

# define LINHAS 10
# define COLUNAS 10

int main() {
    

    char linha[LINHAS] = {'A','B','C','D','E','F','G','H','I','J'};    
    int tabuleiro[LINHAS][COLUNAS] = {0}; 
    int navioHorizontal[3] = {3,3,3};
    int navioVertical[3] = {3,3,3};
    int diagonal1[3] = {3,3,3};
    int diagonal2[3] = {3,3,3};

    // Coordenadas iniciais
    int linhaH = 6, colunaH = 6; 
    int linhaV = 5, colunaV = 1;
    int linhaD1 = 0, colunaD1 = 0;
    int linhaD2 = 0, colunaD2 = 9;
    
    // Diagonal principal 
    for (int i=0; i<3; i++) {
        tabuleiro[linhaD1+i][colunaD1+i] = diagonal1[i];
    }

    // Diagonal inversa
    for (int i=0; i<3; i++) {
        tabuleiro[linhaD2+i][colunaD2-i] = diagonal2[i];
    }

    // Horizontal
    for(int i = 0; i < 3; i++) {
        tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
    }
    // Vertical
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
    return 0;
}
