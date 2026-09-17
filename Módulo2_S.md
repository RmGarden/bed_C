#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define LINHAS 5
#define COLUNAS 5

int main() {
    setlocale(LC_ALL,"Portuguese");

    // Adicionar uma armadilha '*' para criar a possibilidade de derrota
    char mapa[LINHAS][COLUNAS] = {
        {'#', '#', '#', '#', '#'},
        {'#', '@', ' ', ' ', '#'},
        {'#', ' ', '#', '*', '#'},
        {'#', ' ', ' ', 'X', '#'},
        {'#', '#', '#', '#', '#'}
    };

    int playerX = 1, playerY = 1;
    char movimento;
    int jogoAtivo = 1; // Controlo do loop do jogo

    while (jogoAtivo) {
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif

        // Renderizar o mapa
        for (int i = 0; i < LINHAS; i++) {
            for (int j = 0; j < COLUNAS; j++) {
                printf("%c ", mapa[i][j]);
            }
            printf("\n");
        }

        printf("\nLegenda: @ (Tu) | X (Tesouro) | * (Armadilha)\n");
        printf("Mover (W/A/S/D) ou Q para sair: ");
        scanf(" %c", &movimento);

        if (movimento == 'q' || movimento == 'Q') {
            printf("\nJogo cancelado pelo jogador.\n");
            break;
        }

        // 1. Calcular a futura posição
        int novoX = playerX;
        int novoY = playerY;

        if ((movimento == 'w' || movimento == 'W') && playerY > 1) novoY--;
        if ((movimento == 's' || movimento == 'S') && playerY < LINHAS - 2) novoY++;
        if ((movimento == 'a' || movimento == 'A') && playerX > 1) novoX--;
        if ((movimento == 'd' || movimento == 'D') && playerX < COLUNAS - 2) novoX++;

        // 2. Verificar o que está na nova posição
        char destino = mapa[novoY][novoX];

        if (destino == 'X') {
            // CONDIÇÃO DE VITÓRIA
            mapa[playerY][playerX] = ' ';
            mapa[novoY][novoX] = '@';
            
            #ifdef _WIN32
                system("cls");
            #else
                system("clear");
            #endif

            // Mostrar o mapa final
            for (int i = 0; i < LINHAS; i++) {
                for (int j = 0; j < COLUNAS; j++) printf("%c ", mapa[i][j]);
                printf("\n");
            }
            
            printf("\n🏆 PARABÉNS! Encontraste o tesouro e ganhaste o jogo!\n");
            jogoAtivo = 0; // Encerra o ciclo
            
        } else if (destino == '*') {
            // CONDIÇÃO DE DERROTA
            printf("\n💥 GAME OVER! Caíste numa armadilha!\n");
            jogoAtivo = 0; // Encerra o ciclo
            
        } else {
            // MOVIMENTO NORMAL (Caminho livre ' ')
            mapa[playerY][playerX] = ' ';
            playerX = novoX;
            playerY = novoY;
            mapa[playerY][playerX] = '@';
        }
    }

    return 0;
}
