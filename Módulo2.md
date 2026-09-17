## ⚔️ Módulo 2: ASCII Dungeon Crawler

> [!NOTE]
> **Conceito:** Uma matriz 2D em C não precisa de ser apenas uma tabela de números numa aula de matemática, pode ser o mapa interativo de um jogo RPG no teu terminal! 
> O teu objetivo é guiar o herói (`@`) pelo labirinto até ao tesouro (`X`), evitando as armadilhas escondidas (`*`).
---

### 📌 Tópicos
* 📐 **Arrays Bidimensionais:** Matrizes `char mapa[LINHAS][COLUNAS]`
* 🔄 **Loops:** Estrutura `while(jogoAtivo)` para o ciclo de jogo
* 🎮 **Lógica de Input:** Leitura de movimentos com `W`, `A`, `S`, `D`
* 💥 **Condições de Vitória/Derrota:** Estrutura condicional `if/else` aplicada a colisões

---
💡 Dicas Importantes
[!TIP]

A instrução system("cls") ou system("clear") serve para "apagar" o texto do ecrã antes de desenhar o mapa atualizado. Isso dá a ilusão de animação fluida no terminal!

Para incluir as funções do sistema (system), precisas da biblioteca <stdlib.h>.

❓ Questões & Desafio Prático
1. Aumentar o Desafio: Consegues alterar as constantes LINHAS e COLUNAS para 10 e desenhar um mapa maior com mais caminhos?

2. Mecânica de Pontuação: Consegues adicionar uma variável int passos = 0; que conta quantos movimentos o jogador fez até encontrar o tesouro?

3. Colisão com Paredes: Repara que neste código o jogador ignora as paredes internas (#). Consegues adicionar uma verificação para não permitir que o jogador ande para cima de um #?

> [!IMPORTANT]
> **Precisas de ajuda?**  
> Se ficares preso a tentar adicionar as colisões de paredes ou a contagem de passos, entra em contacto! 🚀
