    #include <stdio.h>

# define LINHAS 10
# define COLUNAS 10

int main() {
    

    char linha[LINHAS] = {'A','B','C','D','E','F','G','H','I','J'};    
    int tabuleiro[LINHAS][COLUNAS] = {0}; 
    int navioCone[3][5] = {{0,0,1,0,0}, {0,1,1,1,0}, {1,1,1,1,1}} ;
    int navioCruz[3][5] = {{0,0,1,0,0}, {1,1,1,1,1}, {0,0,1,0,0}};
    int navioOctaedro[3][5] = {{0,0,1,0,0}, {0,1,1,1,0}, {0,0,1,0,0}};

    // Coordenadas iniciais
    int linhaCone = 2, colunaCone = 4; 
    int linhaCruz= 6, colunaCruz = 2;
    int linhaOctaedro = 0, colunaOctaedro = 0;
    
    //  Navio Cone
    for (int i=0; i<3; i++) {
        for (int j=0; j<5; j++) {
            if (navioCone[i][j]==1) {
            tabuleiro[linhaCone+i][colunaCone+j] = 5;
            }
        }
    }

    //  Navio Cruz
    for (int i=0; i<3; i++) {
        for (int j=0; j<5; j++) {
            if (navioCruz[i][j]==1) {
            tabuleiro[linhaCruz+i][colunaCruz+j] =  5;
            }
        }
    }

    //  Navio Octaedro
    for (int i=0; i<3; i++) {        
        for (int j=0; j<5; j++) {
            if (navioOctaedro[i][j] == 1) {
            tabuleiro[linhaOctaedro+i][colunaOctaedro+j] =  5;
            }
        }
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
