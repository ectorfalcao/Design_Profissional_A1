# 🎭 Landing Page com Materialize e Parallax

> **Status:** ✔️ Concluído
> **Framework:** Materialize CSS

## 📄 Sobre o Projeto
Este projeto demonstra a construção de uma **Landing Page** moderna e responsiva utilizando o framework **Materialize CSS** (baseado no Material Design do Google).

O diferencial deste site é o uso do efeito **Parallax Scrolling**, onde a imagem de fundo se move em uma velocidade diferente do conteúdo da frente, criando uma sensação de profundidade e imersão. Além disso, o projeto implementa um menu de navegação lateral (Sidenav) totalmente funcional para dispositivos móveis.

## ⚙️ Funcionalidades e Componentes
*   **Efeito Parallax:** Três seções com imagens de fundo que deslizam suavemente ao rolar a página.
*   **Grid System Responsivo:** Uso do sistema de colunas (`col s12 m4`) para dividir o conteúdo em 3 blocos em telas grandes e empilhá-los em celulares.
*   **Sidenav (Menu Lateral):** Um menu oculto que desliza da esquerda para a direita ao clicar no ícone "hambúrguer".
*   **Ícones Material:** Integração com a biblioteca de ícones do Google Material.
*   **Footer Responsivo:** Rodapé dividido em colunas com links e informações de copyright.

## 📂 Estrutura de Arquivos

Para que o framework e os scripts funcionem, a organização deve ser:

```text
Projeto_Materialize_Parallax/
├── index.html           # Estrutura principal com classes do Materialize
├── css/
│   └── estilos.css      # Customizações e ajustes finos
├── js/
│   └── configuracoes.js # Inicialização do jQuery (Ativa Parallax e Menu)
├── imagens/             # Recursos visuais (Fundos)
│   ├── imagem01.jpg
│   ├── imagem02.jpg
│   └── imagem03.jpg
└── README.md
```
# 🧠 Destaques do Código
* Inicialização via jQuery

Diferente de projetos puramente HTML/CSS, componentes complexos do Materialize precisam ser "ligados" via JavaScript:

```code
JavaScript
$(document).ready(function(){
    // Ativa o menu lateral
    $('.sidenav').sidenav();
    
    // Ativa o efeito de profundidade nas imagens
    $('.parallax').parallax();
});
```
# Sistema de Grid (12 Colunas)
* O código utiliza classes como col s12 m4:

s12 (Small 12): Em telas pequenas (celular), ocupa as 12 colunas (largura total).

m4 (Medium 4): Em telas médias/grandes (tablet/PC), ocupa apenas 4 colunas (1/3 da tela).

# 🛠️ Tecnologias Utilizadas
![alt text](https://img.shields.io/badge/HTML5-E34F26?style=for-the-badge&logo=html5&logoColor=white)

![alt text](https://img.shields.io/badge/CSS3-1572B6?style=for-the-badge&logo=css3&logoColor=white)

![alt text](https://img.shields.io/badge/Materialize-EE6E73?style=for-the-badge&logo=materialize&logoColor=white)

![alt text](https://img.shields.io/badge/jQuery-0769AD?style=for-the-badge&logo=jquery&logoColor=white)

# 🚀 Como Executar
* Baixe a pasta do projeto.
* Importante: Este projeto requer conexão com a internet na primeira execução para carregar o CSS e JS do Materialize (via CDN).
* Certifique-se de ter as 3 imagens na pasta imagens.
* Abra o arquivo index.html.
* Role a página para ver o efeito Parallax e redimensione a janela para testar o menu lateral.
# Desenvolvido por Ector Falcão
