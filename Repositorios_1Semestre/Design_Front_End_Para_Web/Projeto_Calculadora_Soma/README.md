# ➕ Calculadora de Soma em JavaScript

> **Status:** ✔️ Concluído
> **Foco:** Lógica de Programação e Manipulação de Dados

## 📄 Sobre o Projeto
Este projeto consiste em uma aplicação web simples desenvolvida para praticar a interação entre HTML (estrutura), CSS (estilo) e JavaScript (comportamento).

O objetivo é capturar dois valores numéricos inseridos pelo usuário, realizar a operação matemática de adição e exibir o resultado dinamicamente na página, tratando possíveis erros de entrada.

## ⚙️ Funcionalidades
*   **Conversão de Tipos:** Uso de `parseFloat()` para garantir que os dados sejam tratados como números decimais e não como texto.
*   **Validação de Dados:** Verificação automática com `isNaN()` para impedir cálculos inválidos (caso o usuário não digite nada).
*   **Limpeza de Campos:** Botão dedicado para resetar o formulário e o resultado.
*   **Layout Centralizado:** Uso de Flexbox no CSS para manter a calculadora centralizada verticalmente e horizontalmente na tela.

## 📂 Estrutura de Arquivos

```text
Projeto_Calculadora_Soma/
├── index.html           # Interface do usuário
├── css/
│   └── estilos.css      # Design e layout
├── js/
│   └── configuracoes.js # Lógica da soma
├── imagens/
│   └── fundonumeros.png # Background (necessário para o CSS)
└── README.md
```
# 🧠 Detalhes do Código (JavaScript)
O script aborda um conceito fundamental no desenvolvimento web: Tipagem de Dados.
```
code
JavaScript
// Captura o valor (que vem como String do HTML) e converte para Float
const n1 = parseFloat(document.getElementById('num1').value);

// Verifica se a conversão falhou (Não é um Número)
if (isNaN(resultado)) {
    resultadoDiv.textContent = "Por favor, insira dois números válidos.";
} else {
    // Exibe o resultado usando Template String
    resultadoDiv.textContent = `Resultado: ${resultado}`;
}
```
# 🛠️ Tecnologias Utilizadas
![alt text](https://img.shields.io/badge/HTML5-E34F26?style=for-the-badge&logo=html5&logoColor=white)

![alt text](https://img.shields.io/badge/CSS3-1572B6?style=for-the-badge&logo=css3&logoColor=white)

![alt text](https://img.shields.io/badge/JavaScript-F7DF1E?style=for-the-badge&logo=javascript&logoColor=black)
# 🚀 Como Executar
* Baixe a pasta do projeto.
* Para que o fundo funcione corretamente, certifique-se de ter uma imagem chamada fundonumeros.png na pasta imagens.
* Abra o arquivo index.html.
* Digite dois números e clique em "Somar".
# Desenvolvido por Ector Falcão
