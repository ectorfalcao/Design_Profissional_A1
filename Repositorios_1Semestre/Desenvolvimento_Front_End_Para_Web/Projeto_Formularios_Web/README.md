# 📝 Formulários Web e Tipos de Campos

> **Status:** ✔️ Concluído
> **Tecnologia:** HTML5 e CSS Básico

## 📄 Sobre o Projeto
Este projeto tem como objetivo explorar a tag `<form>` e os diversos tipos de elementos de entrada de dados (`<input>`) disponíveis no HTML.

Formulários são a principal maneira de interagir com o usuário e enviar informações para um servidor. Neste exemplo, foi criada uma interface de cadastro completa que demonstra desde campos de texto simples até upload de arquivos.

## ⚙️ Elementos Demonstrados

O código exemplifica a sintaxe e o comportamento visual dos seguintes controles:

*   **Entrada de Texto:**
    *   `type="text"`: Para nomes e dados gerais.
    *   `type="password"`: Oculta os caracteres digitados (para senhas).
    *   `<textarea>`: Para textos longos e comentários (multilinha).
*   **Seleção:**
    *   `type="radio"`: Seleção única (ex: Sexo Masculino/Feminino).
    *   `type="checkbox"`: Seleção múltipla (ex: Newsletter).
    *   `<select>` e `<option>`: Menu suspenso (Dropdown).
*   **Ações e Arquivos:**
    *   `type="file"`: Botão para selecionar arquivos do computador para upload.
    *   `type="submit"`: Botão para enviar o formulário.
    *   `type="reset"`: Botão para limpar todos os campos.
    *   `type="image"`: Uso de uma imagem como botão de envio.

## 💻 Estrutura de Arquivos

```text
Projeto_Formularios_Web/
├── index.html           # Estrutura do formulário
├── css/
│   └── estilos.css      # Estilização visual (cores, bordas, fontes)
├── imagens/
│   └── botaook.png      # Imagem utilizada como botão
└── README.md
```
# 🧠 Detalhes Técnicos
Estrutura do Formulário

* A tag form foi configurada com atributos importantes para o envio de dados (especialmente arquivos):
```
code
Html
<form method="POST" enctype="multipart/form-data">
POST: Método seguro para envio de dados sensíveis.
multipart/form-data: Necessário sempre que houver upload de arquivos (input type="file").
```
# Layout em Tabela
* Neste exemplo, utilizou-se a tag <table> para alinhar os rótulos (labels) e os campos (inputs) de forma organizada visualmente.

# 🛠️ Tecnologias Utilizadas

![alt text](https://img.shields.io/badge/HTML5-E34F26?style=for-the-badge&logo=html5&logoColor=white)
![alt text](https://img.shields.io/badge/CSS3-1572B6?style=for-the-badge&logo=css3&logoColor=white)

# 🚀 Como Executar
* Baixe a pasta do projeto.
* Certifique-se de ter uma imagem chamada botaook.png na pasta imagens (ou o ícone de imagem quebrada aparecerá).
* Abra o arquivo index.html no navegador.
* Interaja com os campos: digite textos, selecione opções e teste os botões.

# Desenvolvido por Ector Falcão
