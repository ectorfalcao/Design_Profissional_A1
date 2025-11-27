# 🌟 Projeto Destaque: Calculadora Científica & Persistência

> **Categoria/Disciplina:** Algoritmos e Pensamento Computacional
> **Linguagem:** C

## 📌 Contexto deste Projeto no Portfólio
Este projeto foi selecionado para compor a seção de **Portfólio Profissional** como evidência prática de competência em programação.

Embora este código tenha sido desenvolvido originalmente para a disciplina de *Algoritmos e Pensamento Computacional* (estando também disponível no repositório da respectiva matéria), uma cópia foi incluída neste diretório para atender ao requisito da **Avaliação A1** que solicita a demonstração explícita de *"pelo menos 1 projeto"* estruturado dentro da pasta de Portfólio.

Ele representa o ápice do meu aprendizado técnico do 1º semestre, combinando lógica matemática, gestão de memória e manipulação de arquivos.

Além disto, foi selecionado também por representar minha maior afinidade dentro da área: a lógica.

---

## 📄 Sobre o Software
Trata-se de uma **Calculadora Científica Avançada** capaz de realizar 27 tipos de operações, variando desde aritmética básica até álgebra linear com matrizes.

O grande diferencial deste software é sua arquitetura robusta. Diferente de calculadoras simples que perdem os dados ao fechar, este sistema implementa um **Log de Histórico Persistente**, salvando todas as operações realizadas em um arquivo físico (`.csv`), simulando um banco de dados local.

---
## 🛠️ Competências Demonstradas

Abaixo, os conceitos técnicos aplicados neste código que comprovam domínio sobre a linguagem C:

### 1. Estruturas de Dados (Structs)
Utilização de `typedef struct` para criar objetos complexos na memória, armazenando não apenas o resultado, mas o contexto da operação (tipo, inputs e ID).

```c
typedef struct {
    char tipo[50];
    double a, b;
    double resultado;
    int id;
} historico;
```
### 2. Persistência de Dados

Implementação de leitura e escrita em arquivos. O sistema gera automaticamente um arquivo CSV (Comma Separated Values), permitindo que o 

histórico de cálculos seja aberto posteriormente em softwares como Excel.

### 3. Alocação Dinâmica de Memória

Uso de ponteiros e da função malloc para criar arrays de tamanho variável em tempo de execução, otimizando o uso da memória RAM do 
computador.

code
C

// Exemplo: Criando um array do tamanho exato que o usuário precisa
```code
array = (double *) malloc(tamanho * sizeof(double));
```
### 4. Matemática Computacional

Implementação de algoritmos complexos utilizando a biblioteca <math.h>:

Trigonometria (Seno, Cosseno, Tangente com conversão de Radianos).

Álgebra Linear (Soma e Multiplicação de Matrizes 3x3).

Equações Quadráticas (Bhaskara com tratamento de Delta).

---

# 🚀 Como Executar este Projeto

Baixe o arquivo main.c presente nesta pasta.

Utilize um compilador GCC (ou IDE como VS Code/Dev-C++).

Compile o código (no Linux/Terminal, lembre-se da flag -lm):

code

Bash

gcc main.c -o calculadora_portfolio -lm

Ao executar, o programa criará automaticamente o arquivo historico.csv na mesma pasta.

Desenvolvido por Ector Carvalho Alves Falcão
