## 🔍 Módulo 4: Caça-Terrors da Memória

> [!NOTE]
> **Conceito:** Os ponteiros costumam assustar quem está a começar em C, mas o conceito é simples: a memória RAM é como um grande prédio cheio de "gavetas" numeradas (endereços). Um ponteiro é apenas um papel onde apontas o número de uma dessas gavetas!
> [!NOTE]
> ### 🎯 Qual é o Objetivo Deste Jogo?
> 
> Neste jogo, não jogas com personagens nem te moves num mapa visual: **o teu campo de jogo é a própria memória RAM do computador**!
> 
> * **O Teu Papel:** És um detetive/hacker a operar um terminal de inspeção de memória.
> * **A Tua Missão:** Usar o **ponteiro** (`ponteiro_scanner`) como uma "lupa" para inspecionar os endereços hexadecimais da RAM (`0x...`).
> * **O Desafio Final:** Conseguir alterar o valor de uma variável ultra-secreta (**Tesouro Oculto**) modificando diretamente o seu endereço de memória, demonstrando na prática como os ponteiros funcionam "por baixo do capô" da linguagem C.
```text
 ┌─────────────────────────────────────────────────────────┐
 │               MEMÓRIA RAM (TERMINAL HACKER)             │
 ├───────────────────┬───────────────────┬─────────────────┤
 │ Endereço (RAM)    | Variavel          | Valor Guardado  │
 ├───────────────────┼───────────────────┼─────────────────┤
 │ 0x7ffd...         | tesouro           | [ 100 ]         │
 │ 0x7ffe...         | *mapaDoTesouro    | [ 0x7ffd... ] ──┼──> Aponta para o tesouro
 └───────────────────┴───────────────────┴─────────────────┘

📌 Tópicos
📍 Operador de Endereço (&): Descobrir em que "gaveta" da RAM está guardada uma variável.

🎯 Ponteiros (*): Criar variáveis especiais que guardam endereços de memória.

🗝️ Desreferenciação (*): Aceder e modificar o valor dentro de uma variável usando diretamente o seu endereço.

💡 Dicas Importantes
[!CAUTION]
Ponteiros Nulos (NULL): Tentar aceder ao valor de um ponteiro que aponta para NULL (ex: *ponteiro_scanner quando este é nulo) provoca um erro chamado Segmentation Fault (Crashe do programa). Garante sempre que o ponteiro tem um endereço válido antes de usar o *!

[!TIP]

Operador & (E comercial): Significa "Dá-me o endereço de memória desta variável".

Operador * (Asterisco no ponteiro): Significa "Dá-me o valor que está guardado dentro do endereço para onde estou a apontar".

❓ Questões & Desafio Prático
[ ] 1. Identificar Endereços: Executa o programa duas vezes seguidas. Os endereços de memória exibidos são exatamente os mesmos ou mudaram? Porquê?

[ ] 2. Hack da Memória: Usa a opção 4 para alterar o valor do tesouro_oculto para 9999 sem tocar diretamente na variável tesouro_oculto.

[ ] 3. Desafio do Troca-Valores (Swap): Cria uma função void trocar(int *a, int *b) que recebe dois ponteiros e troca os valores de duas variáveis entre si!

[!IMPORTANT]
Precisas de ajuda?

Se o conceito de ponteiros ainda parecer um bocado confuso, abre uma Issue no repositório com a tua dúvida! 🚀
