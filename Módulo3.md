## 🐾 Módulo 3: Tamagotchi em C

> [!NOTE]
> **Conceito:** Variáveis soltas como `fome`, `energia` e `nome` podem tornar o teu código confuso. Com as **`structs`**, consegues agrupar todas essas características numa única entidade e criar um bichinho virtual que reage às tuas ações!

```text
 /\_/\  
( o.o )  <- Biter
 > ^ <   [🍕 Fome: 40/100 | ⚡ Energia: 80/100]
```
>
> ---

### 📌 Tópicos
* 📦 **Estruturas:** `struct` e `typedef` para agrupar dados do bichinho
* ⚙️ **Funções:** Organização do código e divisão de tarefas
* 📌 **Ponteiros:** Passagem por referência (`Pet *p`) para alterar os dados reais na memória
* 🔀 **Menu Interativo:** Ciclo de decisões com `switch/case` ou `if/else`

---

💡 Dicas Importantes
[!TIP]

O operador -> (Seta): Quando passas um ponteiro de uma struct para uma função (Pet *p), usas p->fome em vez de p.fome para aceder aos valores.

Passagem por Referência (&): Ao chamar alimentar(&meuPet);, estás a passar a morada da memória do teu pet. Sem o &, a função alteraria apenas uma cópia e o teu pet real continuaria com fome!

❓ Questões & Desafio Prático
[ ] 1. Nome Personalizado: Consegues alterar o código no início do main() para permitir que o utilizador escolha o nome do seu bichinho com scanf?

[ ] 2. Novo Atributo: Adiciona uma nova variável int felicidade; dentro da struct Pet. Atualiza o menu para incluir uma opção de "Fazer Festas" que aumenta a felicidade!

[ ] 3. Níveis de Alerta: Consegues adicionar um aviso no ecrã (ex: ⚠️ AVISO: O teu pet está com muita fome!) se a fome passar dos 70?

[!IMPORTANT]
Precisas de ajuda?

Se tiveres dúvidas sobre o operador -> ou como passar structs para funções, abre uma Issue no repositório! 🚀
