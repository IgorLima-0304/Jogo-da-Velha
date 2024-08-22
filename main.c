#include <stdio.h>

void inicializaMatriz(char matriz[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = ' ';
        }
    }
}

void imprimeMatriz(char matriz[3][3]) {
    printf("   0   1   2\n");
    for (int i = 0; i < 3; i++) {
        printf("%d", i);
        for (int j = 0; j < 3; j++) {
            printf(" %c ", matriz[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  --|---|--\n");
    }
}

int coordenadaValida(char matriz[3][3], int linha, int coluna) {
    if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2) {
        printf("Posição fora do tabuleiro. Tente novamente.\n");
        return 0;
    } else if (matriz[linha][coluna] != ' ') {
        printf("Posição já ocupada. Tente novamente.\n");
        return 0;
    }
    return 1;
}

int main(void) {
    char nome1[20], nome2[20];
    char tabuleiro[3][3];
    char jogadorAtual = 'X';
    int linha, coluna;
    int jogadas = 0;
    int vencedor = 0;

    inicializaMatriz(tabuleiro);

    printf("Bem-vindo ao JOGO DA VELHA\n");

    printf("Informe o nome do jogador 1: ");
    scanf("%s", nome1);
    printf("Informe o nome do jogador 2: ");
    scanf("%s", nome2);

    printf("\n***J O G O  D A  V E L H A***\n");
    printf("******************************\n");
    printf("Nome do Jogador 1: %s\n", nome1);
    printf("Nome do Jogador 2: %s\n", nome2);
    printf("\nBoa sorte, jogadores %s e %s!\n", nome1, nome2);
    printf("******************************\n");

    while (vencedor == 0 && jogadas < 9) {
        imprimeMatriz(tabuleiro);

        printf("Jogador %c, insira a linha e a coluna (0, 1 ou 2): ", jogadorAtual);
        scanf("%d %d", &linha, &coluna);

        if (coordenadaValida(tabuleiro, linha, coluna)) {
            tabuleiro[linha][coluna] = jogadorAtual;
            jogadas++;

            for (int i = 0; i < 3; i++) {
                if (tabuleiro[i][0] == jogadorAtual && tabuleiro[i][1] == jogadorAtual && tabuleiro[i][2] == jogadorAtual) {
                    vencedor = 1;
                }
            }
            for (int j = 0; j < 3; j++) {
                if (tabuleiro[0][j] == jogadorAtual && tabuleiro[1][j] == jogadorAtual && tabuleiro[2][j] == jogadorAtual) {
                    vencedor = 1;
                }
            }
            if ((tabuleiro[0][0] == jogadorAtual && tabuleiro[1][1] == jogadorAtual && tabuleiro[2][2] == jogadorAtual) ||
                (tabuleiro[0][2] == jogadorAtual && tabuleiro[1][1] == jogadorAtual && tabuleiro[2][0] == jogadorAtual)) {
                vencedor = 1;
            }
            if (vencedor == 0) {
                jogadorAtual = (jogadorAtual == 'X') ? 'O' : 'X';
            }
        }
    }

    imprimeMatriz(tabuleiro);

    return 0;
}
