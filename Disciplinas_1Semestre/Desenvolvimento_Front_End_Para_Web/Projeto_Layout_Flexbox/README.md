# 📱 Layout Responsivo com CSS Flexbox

> **Status:** ✔️ Concluído
> **Tecnologia:** CSS3 Flexbox

## 📄 Sobre o Projeto
Este projeto demonstra a construção de um layout de página moderno e responsivo utilizando o módulo **CSS Flexbox** (Flexible Box Layout).

O objetivo foi criar uma estrutura clássica de site (Cabeçalho, Menu Lateral, Conteúdo Principal e Rodapé) que se adapta automaticamente a diferentes tamanhos de tela. Em desktops, o menu e o conteúdo ficam lado a lado; em dispositivos móveis, eles se empilham verticalmente.

## ⚙️ Funcionalidades Demonstradas

### 1. Flexbox Container
O elemento `<section>` atua como o contêiner flexível (`display: flex`), controlando o alinhamento dos seus filhos (`nav` e `article`).

### 2. Proporção de Colunas (Flex Grow)
Utilizou-se a propriedade `flex` para definir a largura relativa das colunas sem usar pixels fixos:
*   **Menu (`nav`):** `flex: 1` (Ocupa 1 parte do espaço).
*   **Conteúdo (`article`):** `flex: 3` (Ocupa 3 partes do espaço, sendo 3x maior que o menu).

### 3. Design Responsivo (Mobile First)
Através de **Media Queries**, o layout muda drasticamente quando a tela é menor que 600px:
*   O fluxo do Flexbox muda de "linha" para "coluna" (`flex-direction: column`).
*   Isso garante que o site seja legível em celulares sem a necessidade de zoom horizontal.

## 💻 Estrutura de Arquivos

```text
Projeto_Layout_Flexbox/
├── index.html           # Estrutura semântica (HTML5)
├── css/
│   └── estilos.css      # Regras de Layout e Flexbox
└── README.md
🧠 Destaques do Código CSS
O "Pulo do Gato" da Responsividade:
code
CSS
/* Quando a tela for menor que 600px (Celulares) */
@media (max-width: 600px) {
    section {
        /* Muda a orientação para vertical */
        flex-direction: column;
    }
}
```
# Compatibilidade (Cross-Browser):
* O código inclui prefixos como -webkit- e -ms- para garantir que o layout funcione corretamente até mesmo em navegadores mais antigos (Chrome antigo, Safari, IE10).

# 🛠️ Tecnologias Utilizadas

![alt text](https://img.shields.io/badge/HTML5-E34F26?style=for-the-badge&logo=html5&logoColor=white)
![alt text](https://img.shields.io/badge/CSS3-1572B6?style=for-the-badge&logo=css3&logoColor=white)

# 🚀 Como Executar
* Baixe a pasta do projeto.
* Abra o arquivo index.html no navegador.
* Teste a responsividade: Redimensione a janela do seu navegador (estreite-a) e observe como o menu lateral "pula" para cima do conteúdo principal quando a janela fica pequena.

# Desenvolvido por Ector Falcão
