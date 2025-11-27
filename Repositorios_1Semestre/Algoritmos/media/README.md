# 🧮 Algoritmo: Calculadora de Média em C

> **Status:** ✔️ Concluído

## 📄 Sobre o Projeto
Este é um algoritmo desenvolvido na disciplina de **Algoritmos e Pensamento Computacional**. O objetivo foi criar um programa em **Linguagem C** capaz de receber as notas de um aluno, calcular a média aritmética e determinar sua situação acadêmica.

Este projeto serviu para fixar os conceitos de **declaração de variáveis**, **tipos de dados (float)**, **entrada/saída (scanf/printf)** e **estruturas condicionais**.

## ⚙️ Funcionalidades
*   **Entrada de Dados:** Leitura de notas via teclado.
*   **Processamento:** Cálculo da média simples `(N1 + N2) / 2`.
*   **Lógica Condicional:**
    *   Média >= 7.0: **Aprovado** 🟢
    *   Média entre 5.0 e 6.9: **Recuperação** 🟡
    *   Média < 5.0: **Reprovado** 🔴

## 🛠️ Tecnologias Utilizadas

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)

*   **Linguagem:** C (Standard C99)
*   **Compilador:** GCC (MinGW ou Linux)
*   **IDE:** VS Code / Code::Blocks / Dev-C++
*   **Conceitos:** Programação Estruturada, Tipagem Estática.

## 💻 Exemplo de Código
Abaixo, a lógica principal implementada em C:

```c
#include <stdio.h>

int main() {
    float nota1, nota2, media;

    // Entrada de Dados
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    // Processamento
    media = (nota1 + nota2) / 2;

    // Saída Formatada (2 casas decimais)
    printf("Sua media final e: %.2f\n", media);

    // Lógica Condicional
    if (media >= 6.0) {
        printf("Situacao: APROVADO\n");
    } else if (media >= 5.0) {
        printf("Situacao: RECUPERACAO\n");
    } else {
        printf("Situacao: REPROVADO\n");
    }

    return 0;
}
```
# 🧠 Fluxograma Lógico

Para desenvolver este código, segui o seguinte raciocínio:

* Início (Função main)
* Declarar variáveis do tipo Real (float).
* Ler Nota 1 e Nota 2 (scanf).
* Calcular Média e armazenar na variável.
* Se Média >= 7 -> Imprimir "Aprovado".
* Senão Se Média >= 5 -> Imprimir "Recuperação".
* Senão -> Imprimir "Reprovado".
* Fim (return 0).

# 🚀 Como Compilar e Executar
* Como a linguagem C é compilada, você precisa transformar o código fonte em um executável.
* Certifique-se de ter um compilador (como GCC) instalado.
* Baixe o arquivo main.c deste repositório.
* Abra o terminal na pasta do arquivo.
* Para Compilar:
* code
* Bash
* gcc main.c -o media
* Para Executar:
* Windows: media.exe
* Linux/Mac: ./media
