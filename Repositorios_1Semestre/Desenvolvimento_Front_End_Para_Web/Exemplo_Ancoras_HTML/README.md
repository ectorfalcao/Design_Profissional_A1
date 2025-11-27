# ⚓ Navegação Interna com Âncoras HTML

> **Status:** ✔️ Concluído
> **Tecnologia:** HTML Básico

## 📄 Sobre o Projeto
Este é um exemplo prático desenvolvido na disciplina de **Design Front End**. O objetivo foi compreender o funcionamento da tag `<a>` (Anchor) quando utilizada para navegação dentro da mesma página (Internal Linking).

Este recurso é fundamental para melhorar a Experiência do Usuário (UX) em páginas com muito conteúdo (One Page), permitindo saltar diretamente para seções específicas.

## ⚙️ Funcionalidades Demonstradas
*   **Menu de Índice:** Links no topo que direcionam o usuário instantaneamente para os tópicos abaixo.
*   **Definição de Seções:** Uso de marcadores invisíveis (`name="..."`) para delimitar onde cada capítulo começa.
*   **Voltar ao Topo:** Implementação de links no final de cada seção que trazem o usuário de volta ao início da página.

## 💻 Estrutura do Código

O projeto explora a relação entre o atributo `href` e o atributo `name`.

### 1. O Link (Gatilho)
Utiliza-se o símbolo **#** (hashtag) para indicar que o destino é um ID ou Nome local.
```html
<!-- Link que clica -->
<a href="#Secao1">Ir para Seção 1</a>
2. O Destino (Âncora)
Define o ponto de aterrissagem na página.
code
Html
<!-- Local de destino -->
<a name="Secao1"></a>
<h3>Conteúdo da Seção 1...</h3>
```
# 🛠️ Tecnologias Utilizadas
HTML: Estruturação semântica e criação de hiperlinks.

# 🚀 Como Executar
* Baixe o arquivo index.html deste diretório.
* Abra o arquivo em qualquer navegador web (Chrome, Firefox, Edge).
* Clique nos links "Seção", "Âncoras" e "Links" para testar a rolagem automática.
# Desenvolvido por Ector Falcão
