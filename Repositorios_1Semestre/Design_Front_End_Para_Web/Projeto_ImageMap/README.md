# 🗺️ Navegação Interativa com Image Map

> **Status:** ✔️ Concluído
> **Tecnologia:** HTML5

## 📄 Sobre o Projeto
Este projeto demonstra o uso do recurso de **Mapeamento de Imagens** (`<map>` e `<area>`) em HTML. A técnica permite definir "hotspots" (áreas clicáveis) específicas dentro de uma única imagem, transformando partes dela em hiperlinks distintos.

No exemplo desenvolvido, uma imagem principal (contendo um escritório/mesa de trabalho) serve como menu de navegação. Ao clicar nos objetos da cena (Computador, Celular ou Café), o usuário é direcionado para páginas informativas sobre cada item.

## ⚙️ Funcionalidades Demonstradas

### 1. Mapeamento de Coordenadas
O arquivo `index.html` define áreas sensíveis baseadas em coordenadas X,Y da imagem:
*   **Retângulo (`shape="rect"`):** Usado para delimitar o Computador e o Celular.
*   **Círculo (`shape="circle"`):** Usado para delimitar a xícara de Café.

### 2. Navegação Multi-páginas
O projeto conecta 4 arquivos HTML distintos:
*   **Home:** A imagem mapeada.
*   **Páginas Internas:** `computador.html`, `celular.html` e `cafe.html`, contendo descrições e citações (tag `<blockquote>`).
*   **Links Externos:** Referências para artigos da Wikipedia.

## 💻 Estrutura de Arquivos

Para que o projeto funcione corretamente, a estrutura de pastas deve ser mantida conforme abaixo, garantindo que os caminhos das imagens (`src`) não quebrem.

```text
Projeto_ImageMap/
├── imagens/
│   ├── imgmapeada.jpg  # Imagem principal (Mesa de trabalho)
│   ├── mac.jpg         # Imagem para a página Computador
│   ├── telefone.jpg    # Imagem para a página Celular
│   └── cafe.jpg        # Imagem para a página Café
├── index.html          # Página principal com o mapa
├── computador.html
├── celular.html
├── cafe.html
└── README.md
````
🧠 Detalhe do Código (Tag Map)
Abaixo, o trecho principal que cria a mágica da navegação:
code
Html
<img src="imagens/imgmapeada.jpg" usemap="#image-map">

<map name="image-map">
    <!-- Link para o Computador (Área Retangular) -->
    <area alt="Computador" href="computador.html" coords="33,38,275,351" shape="rect">
    
    <!-- Link para o Celular (Área Retangular) -->
    <area alt="Celular" href="celular.html" coords="288,170,338,251" shape="rect">
    
    <!-- Link para o Café (Área Circular) -->
    <area alt="Cafe" href="cafe.html" coords="336,301,48" shape="circle">
</map>


# 🚀 Como Executar
* Baixe a pasta do projeto.
* Certifique-se de que a pasta imagens contém os arquivos JPG necessários.
* Abra o arquivo index.html no seu navegador.
* Passe o mouse sobre os objetos na foto e clique para navegar.

# Desenvolvido por Ector Falcão
