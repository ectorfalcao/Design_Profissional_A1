# 📉 Ordenação e Análise com Bubble Sort

> **Status:** ✔️ Concluído | **Linguagem:** C

## 📄 Sobre o Projeto
Este programa foi desenvolvido para a disciplina de **Algoritmos e Pensamento Computacional** com o objetivo de estudar algoritmos de ordenação e métricas de desempenho.

O código implementa o método **Bubble Sort** para ordenar os dígitos de um **RGM** (Registro Geral de Matrícula) de 8 dígitos. Além de ordenar, o programa instrumenta o código para medir:
1.  **Tempo de Execução:** Quanto tempo a CPU levou para processar.
2.  **Esforço Computacional:** Quantas trocas (swaps) foram necessárias para chegar ao resultado final.

## ⚙️ Funcionalidades
*   **Entrada de Dados:** Recebe uma string numérica de 8 dígitos (RGM).
*   **Ordenação:** Organiza os dígitos em ordem crescente (ASCII/Numérica).
*   **Benchmarking:** Utiliza a biblioteca `<time.h>` para calcular o tempo preciso de processamento (`clock_t`).
*   **Contagem de Passos:** Variável contadora que registra cada vez que uma troca de posição é realizada.
*   **Saída CSV:** O resultado é impresso no formato `Método, RGM_Ordenado, Tempo, Passos`, facilitando a exportação para planilhas (Excel) para geração de gráficos.

## 🧠 Lógica do Algoritmo

O **Bubble Sort** é um algoritmo simples, porém ineficiente para grandes conjuntos de dados.
*   **Complexidade:** $O(N^2)$ (Quadrática).
*   **Funcionamento:** Ele percorre o vetor várias vezes. A cada passagem, compara o elemento atual com o próximo (`j` com `j+1`). Se estiverem fora de ordem, eles trocam de lugar.

### Por que usar char[] e não int?
Neste código, optou-se por tratar o RGM como um vetor de caracteres (`char rgm[9]`). Isso facilita a manipulação dígito a dígito sem precisar de cálculos matemáticos de divisão/resto para separar os números.

## 💻 Trecho do Código (O "Core" da Ordenação)

```c
// Loop aninhado característico do Bubble Sort
for(i = 0; i < 8; i++){
    for(j = 0; j < 8 - 1; j++){
        // Compara caracteres ASCII
        if(rgm[j] >= rgm[j+1]){
            // Realiza a troca (Swap)
            placeholder = rgm[j];
            rgm[j] = rgm[j+1];
            rgm[j+1] = placeholder;
            
            steps++; // Incrementa o contador de esforço
        }
    }
}
````
# 🛠️ Tecnologias Utilizadas
* Linguagem C
* Biblioteca <time.h>: Fundamental para a medição de ciclos de clock (CLOCKS_PER_SEC).
* Biblioteca <string.h>: Para manipulação básica do vetor de caracteres.
# 🚀 Como Compilar e Executar
* Baixe o arquivo main.c.
* Abra o terminal na pasta.
* Compilar:
* code
* Bash
* gcc main.c -o bubblesort
* Executar:
* Windows: bubblesort.exe
* Linux/Mac: ./bubblesort
* Exemplo de Uso:
* Insira um RGM (ex: 84291053).
* O programa retornará: Bubble,01234589,0.000005,18 (exemplo hipotético).
# Desenvolvido por Ector Carvalho
