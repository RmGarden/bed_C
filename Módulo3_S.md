### 💻 Código Completo do Jogo

```c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Definir a estrutura do Bichinho
typedef struct {
    char nome[20];
    int fome;      // 0 = Satisfeito | 100 = Fome Extrema
    int energia;   // 100 = Cheio de energia | 0 = Exausto
} Pet;

// Função para alimentar (passagem por ponteiro para alterar o valor real)
void alimentar(Pet *p) {
    p->fome -= 30;
    if (p->fome < 0) p->fome = 0;
    p->energia -= 5;
    printf("\n🍖 %s comeu! Fome reduzida.\n", p->nome);
}

// Função para brincar
void brincar(Pet *p) {
    if (p->energia < 20) {
        printf("\n😴 %s está demasiado cansado para brincar!\n", p->nome);
        return;
    }
    p->fome += 20;
    p->energia -= 25;
    if (p->fome > 100) p->fome = 100;
    if (p->energia < 0) p->energia = 0;
    printf("\n⚽ Brincaste com %s! Ficou mais cansado e com mais fome.\n", p->nome);
}

// Função para dormir
void dormir(Pet *p) {
    p->energia += 40;
    if (p->energia > 100) p->energia = 100;
    p->fome += 10;
    if (p->fome > 100) p->fome = 100;
    printf("\n💤 %s dormiu uma sesta e recuperou energia!\n", p->nome);
}

int main() {
    setlocale(LC_ALL,"Portuguese");
    
    Pet meuPet = {"Biter", 40, 80};
    int opcao;
    int jogoAtivo = 1;

    while (jogoAtivo) {
        // Limpar ecrã
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif

        // Mostrar Estado
        printf("=======================================\n");
        printf(" 👾 TAMAGOTCHI EM C: %s\n", meuPet.nome);
        printf("=======================================\n");
        printf(" 🍕 Fome    : %d / 100\n", meuPet.fome);
        printf(" ⚡ Energia : %d / 100\n", meuPet.energia);
        printf("=======================================\n");

        // Verificar condições críticas (Derrota)
        if (meuPet.fome >= 100) {
            printf("\n💥 GAME OVER! %s ficou com fome a mais e fugiu de casa!\n", meuPet.nome);
            break;
        }
        if (meuPet.energia <= 0) {
            printf("\n💥 GAME OVER! %s desmaiou de cansaço!\n", meuPet.nome);
            break;
        }

        // Menu de Opções
        printf("\nO que queres fazer?\n");
        printf("1. 🍖 Alimentar\n");
        printf("2. ⚽ Brincar\n");
        printf("3. 💤 Dormir\n");
        printf("4. 🚪 Sair do Jogo\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                alimentar(&meuPet);
                break;
            case 2:
                brincar(&meuPet);
                break;
            case 3:
                dormir(&meuPet);
                break;
            case 4:
                printf("\nAté à próxima!\n");
                jogoAtivo = 0;
                break;
            default:
                printf("\nOpção inválida!\n");
        }

        if (jogoAtivo && opcao != 4) {
            printf("\nPressiona Enter para continuar...");
            getchar(); // Captura o Enter pendente do scanf
            getchar(); // Aguarda o utilizador pressionar Enter
        }
    }

    return 0;
}
