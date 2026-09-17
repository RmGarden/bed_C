### 💻 Código Completo do Jogo

```c

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
    // Variáveis do jogo (guardadas na RAM)
    int cofre_A = 10;
    int cofre_B = 50;
    int tesouro_oculto = 999;

    // Criar o ponteiro (o mapa que guarda a localização do tesouro)
    int *ponteiro_scanner = NULL;
    int escolha;
    int novo_valor;
    int jogoAtivo = 1;

    while (jogoAtivo) {
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif

        printf("====================================================\n");
        printf(" 🕵️ DETETIVE DA RAM: INSPECIONADOR DE PONTEIROS     \n");
        printf("====================================================\n");
        printf(" [1] Cofre A         | Valor: %d  | Endereço RAM: %p\n", cofre_A, (void*)&cofre_A);
        printf(" [2] Cofre B         | Valor: %d  | Endereço RAM: %p\n", cofre_B, (void*)&cofre_B);
        printf(" [3] Tesouro Oculto  | Valor: %d | Endereço RAM: %p\n", tesouro_oculto, (void*)&tesouro_oculto);
        printf("====================================================\n\n");

        if (ponteiro_scanner != NULL) {
            printf("🎯 PONTEIRO ATUALMENTE A APONTAR PARA: %p\n", (void*)ponteiro_scanner);
            printf("💎 VALOR ENCONTRADO ATRAVÉS DO PONTEIRO (*): %d\n\n", *ponteiro_scanner);
        } else {
            printf("⚠️ O teu ponteiro está NULO (NULL). Precisas de apontar para um endereço!\n\n");
        }

        printf("O que queres fazer?\n");
        printf("1. Apontar ponteiro para o Cofre A\n");
        printf("2. Apontar ponteiro para o Cofre B\n");
        printf("3. Apontar ponteiro para o Tesouro Oculto\n");
        printf("4. 🔓 Alterar valor na memória usando o PONTEIRO\n");
        printf("5. 🚪 Sair do Terminal\n");
        printf("Escolha: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                ponteiro_scanner = &cofre_A; // Aponta para o endereço de cofre_A
                break;
            case 2:
                ponteiro_scanner = &cofre_B; // Aponta para o endereço de cofre_B
                break;
            case 3:
                ponteiro_scanner = &tesouro_oculto; // Aponta para o tesouro
                break;
            case 4:
                if (ponteiro_scanner == NULL) {
                    printf("\n❌ Erro! Não podes alterar a memória com um ponteiro NULO!\n");
                } else {
                    printf("\nIntroduce o novo valor para injetar diretamente na RAM: ");
                    scanf("%d", &novo_valor);
                    *ponteiro_scanner = novo_valor; // Altera o valor na memória real
                    printf("\n✨ Sucesso! Memória sobrescrita diretamente via ponteiro.\n");
                }
                break;
            case 5:
                printf("\nA fechar o terminal de hackers...\n");
                jogoAtivo = 0;
                break;
            default:
                printf("\nOpção inválida!\n");
        }

        if (jogoAtivo) {
            printf("\nPressiona Enter para continuar...");
            getchar();
            getchar();
        }
    }

    return 0;
}
