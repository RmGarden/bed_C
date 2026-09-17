## 🔍 Módulo 4: Caça-Terrors da Memória

> [!NOTE]
> **Conceito:** Os ponteiros costumam assustar quem está a começar em C, mas o conceito é simples: a memória RAM é como um grande prédio cheio de "gavetas" numeradas (endereços). Um ponteiro é apenas um papel onde apontas o número de uma dessas gavetas!

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
