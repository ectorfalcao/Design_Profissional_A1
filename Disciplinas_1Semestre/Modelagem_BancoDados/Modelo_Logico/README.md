# 🗃️ Modelo Lógico Relacional: Gestão Acadêmica

> **Status:** ✔️ Concluído
> **Fase:** Transição para SQL

## 📄 Sobre o Modelo
Este documento apresenta o **Esquema Lógico** do banco de dados. Aqui, as entidades do modelo conceitual foram convertidas em tabelas relacionais, aplicando as regras de normalização (1FN, 2FN e 3FN) e definindo as Chaves Primárias (PK) e Chaves Estrangeiras (FK).

Este esquema serve como guia definitivo para a criação do script SQL (`CREATE TABLE`).

## 📐 Estrutura das Tabelas (Schema)

Abaixo está a representação textual das tabelas, onde `FK` indica uma Chave Estrangeira (ligação com outra tabela).

### 👥 Pessoas e Cargos (Estratégia de Herança)
Para resolver a generalização de "Pessoa", foi utilizada a estratégia de tabelas separadas com chave compartilhada.
*   **pessoa** (`cod_pessoa`, cod_instituicao `FK`, nome, email, data_nascimento, CPF, numero, cep, bairro, cidade, estado)
*   **professor** (`cod_pessoa FK`, departamento, titulação)
*   **funcionario** (`cod_pessoa FK`, cod_cargo `FK`)
*   **aluno** (`cod_pessoa FK`, cod_turma `FK`, historico_escolar)
*   **cargo** (`cod_cargo`, nome, salario)
*   **telefone** (`cod_pessoa FK`, DDD, numero) -> *Normalizado para permitir múltiplos telefones.*

### 🏫 Estrutura Acadêmica
*   **instituicao** (`cod_instituicao`, nome, email, numero, cep, bairro, cidade, estado)
*   **curso** (`cod_curso`, carga_horaria, nome)
*   **disciplina** (`cod_disciplina`, nome)
*   **turma** (`cod_turma`, capacidade, nome, data, horário)

### 🏢 Estrutura Física
*   **sala** (`cod_sala`, cod_tipo `FK`, localizacao, capacidade, tamanho, nome)
*   **tipo** (`cod_tipo`, nome) -> *Define se é Laboratório, Auditório, etc.*

### 🔗 Tabelas Associativas (Relacionamentos N:N)
Estas tabelas resolvem os relacionamentos "Muitos para Muitos" entre as entidades principais.
*   **int_cur** (`cod_curso FK`, `cod_instituicao FK`) -> *Instituição oferta Cursos*
*   **dis_cur** (`cod_disciplina FK`, `cod_curso FK`) -> *Curso grade de Disciplinas*
*   **dis_sal** (`cod_disciplina FK`, `cod_sala FK`) -> *Disciplina alocada em Sala (recurso)*
*   **dis_tur** (`cod_disciplina FK`, `cod_turma FK`) -> *Turma pertence a uma Disciplina*
*   **sal_tur** (`cod_sala FK`, `cod_turma FK`) -> *Turma ocorre em uma Sala física*
*   **tur_prof** (`cod_turma FK`, `cod_pessoa FK`) -> *Professor leciona para Turma*

## 🧠 Decisões de Projeto

1.  **Herança de Pessoa:**
    A tabela `pessoa` centraliza os dados comuns (Nome, CPF, Endereço). As tabelas `professor`, `funcionario` e `aluno` possuem a mesma chave primária (`cod_pessoa`), que também serve como chave estrangeira. Isso garante integridade e evita repetição de dados.

2.  **Multivaloração (Telefone):**
    O atributo telefone foi extraído para uma tabela própria, permitindo que uma única pessoa tenha múltiplos números (ex: Celular e Residencial) sem violar a Primeira Forma Normal.

3.  **Endereçamento:**
    Os dados de endereço (CEP, Bairro, Cidade) foram mantidos nas tabelas `pessoa` e `instituicao` por decisão de projeto, simplificando consultas que não exigem uma tabela de logradouros separada.

## 🚀 Próximos Passos
Com este modelo lógico validado, o próximo passo é a implementação física:
1.  Definição dos tipos de dados (VARCHAR, INT, DATE).
2.  Escrita do script SQL DDL.
3.  Inserção de dados de teste.

---
**Desenvolvido por Ector Carvalho, Erick Bruno, João Paulo, Luan Rodrigues, Matheus, Michael Fernando e Tiago Mendes**
