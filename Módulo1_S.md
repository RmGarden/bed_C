### 💻 Código Completo do Jogo

```c
#include <stdio.h>
#include <locale.h>

int main() {
    int codigo_segredo = 42;
    int tentativa;
    
    setlocale(LC_ALL,"Portuguese");

    printf("=== TERMINAL DE SEGURANÇA ===\n");
    printf("Adivinha a combinação secreta (1 a 100): ");
    scanf("%d", &tentativa);

    if (tentativa == codigo_segredo) {
        printf("[ACESSO CONCEDIDO] Cofre desbloqueado!\n");
    } else if (tentativa < codigo_segredo) {
        printf("[ACESSO NEGADO] Código demasiado BAIXO.\n");
    } else {
        printf("[ACESSO NEGADO] Código demasiado ALTO.\n");
    }

    return 0;
}
