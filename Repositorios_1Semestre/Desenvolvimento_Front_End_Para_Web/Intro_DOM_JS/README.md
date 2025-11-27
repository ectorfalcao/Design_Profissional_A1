# 💡 Interatividade com JavaScript: Projeto Lâmpada

> **Status:** ✔️ Concluído
> **Foco:** Manipulação do DOM e Lógica Básica

## 📄 Sobre o Projeto
Este projeto introdutório explora o poder do **JavaScript** para alterar dinamicamente elementos de uma página HTML sem a necessidade de recarregá-la.

O objetivo principal é criar uma simulação de um interruptor, onde o usuário pode "acender" e "apagar" uma lâmpada. Isso é feito alterando o atributo `src` da tag `<img>` através de uma função JavaScript acionada por eventos de clique.

## ⚙️ Funcionalidades
*   **Redirecionamento:** Uso de `window.location.href` para navegar entre a página inicial e a aplicação.
*   **Manipulação de Atributos:** O script identifica o estado desejado (aceso/apagado) e troca a imagem exibida instantaneamente.
*   **Estilização Centralizada:** Uso de um arquivo CSS externo para aplicar fundos, transparências e estilos aos botões.

## 📂 Estrutura de Arquivos

Para que o projeto funcione (especialmente o carregamento das imagens e estilos), a estrutura de pastas deve ser organizada da seguinte forma:

```text
Projeto_Lampada_JS/
├── index.html             # Página de boas-vindas
├── lampada.html           # Aplicação da lâmpada
├── css/
│   └── estilos.css        # Folha de estilos
├── js/
│   └── configuracoes.js   # Lógica do JavaScript
├── imagens/               # Pasta de recursos visuais
│   ├── lampadaon.gif
│   ├── lampadaoff.gif
│   └── logoHTML5.png
└── README.md
🧠 Lógica do Código (JavaScript)
O coração do projeto está na função luz(sw) localizada em js/configuracoes.js. Ela recebe um parâmetro (0 ou 1) para decidir qual imagem mostrar.
code
JavaScript
function luz(sw) {
    var img;
    // Se o parâmetro for 0, carrega a imagem apagada
    if (sw == 0) {
        img = "imagens/lampadaoff.gif";
    } 
    // Caso contrário, carrega a imagem acesa
    else {
        img = "imagens/lampadaon.gif";
    }
    
    // O DOM acessa o elemento pelo ID e troca o 'source' da imagem
    document.getElementById('minhaImagem').src = img;
}
```
🛠️ Tecnologias Utilizadas

![alt text](https://img.shields.io/badge/HTML5-E34F26?style=for-the-badge&logo=html5&logoColor=white)
![alt text](https://img.shields.io/badge/CSS3-1572B6?style=for-the-badge&logo=css3&logoColor=white)
![alt text](https://img.shields.io/badge/JavaScript-F7DF1E?style=for-the-badge&logo=javascript&logoColor=black)

# 🚀 Como Executar
* Certifique-se de que as imagens (lampadaon.gif, lampadaoff.gif) estejam na pasta imagens.
* Abra o arquivo index.html.
* Clique no botão para ir à página da lâmpada.
* Teste os botões "Luz Acesa" e "Luz Apagada".
# Desenvolvido por Ector Falcão
