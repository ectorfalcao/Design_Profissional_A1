# 💾 Implementação SQL: Sistema de Gestão Acadêmica

> **Status:** ✔️ Script Funcional
> **SGBD:** PostgreSQL (Sintaxe compatível com padrões ANSI SQL)

## 📄 Sobre o Script
Este diretório contém a implementação física do banco de dados `Cidade_Educacao`. O script SQL executa três funções principais:
1.  **DDL (Data Definition Language):** Criação do Schema, Tabelas, Chaves Primárias (PK) e Chaves Estrangeiras (FK).
2.  **DML (Data Manipulation Language):** Inserção de dados fictícios para teste e validação das relações.
3.  **Atualizações:** Exemplos de comandos `UPDATE` para correção de registros.

## 🛠️ Estrutura do Banco de Dados

O banco foi criado dentro de um schema próprio chamado `Cidade_Educacao` para garantir organização e segurança.

### Principais Tabelas Criadas
*   `instituicao`: Tabela raiz que armazena os dados da universidade.
*   `pessoa`: Tabela centralizadora de dados pessoais (Generalização).
*   `professor`, `aluno`, `funcionario`: Tabelas especializadas ligadas à `pessoa` via FK.
*   `curso`, `disciplina`, `turma`: Estrutura acadêmica.
*   `sala`, `tipo`: Gerenciamento de espaço físico.

### Relacionamentos Implementados
O script materializa relacionamentos complexos através de tabelas associativas (N:N), como:
*   `tur_prof`: Vincula professores às turmas.
*   `dis_sal`: Associa disciplinas às salas adequadas (ex: Anatomia -> Laboratório).
*   `dis_cur`: Define a grade curricular (quais disciplinas pertencem a qual curso).

## 💻 Como Executar o Script

### Pré-requisitos
*   Um SGBD instalado (PostgreSQL recomendado, ou MySQL/SQL Server com pequenas adaptações de sintaxe).
*   Uma ferramenta de administração (pgAdmin, DBeaver ou Terminal).

### Passo a Passo
1.  Baixe o arquivo `script_banco.sql` deste repositório.
2.  Abra sua ferramenta de banco de dados.
3.  Crie um novo banco de dados (opcional):
    ```sql
    CREATE DATABASE gestao_academica;
    ```
4.  Abra o editor de Query e cole o conteúdo do script.
5.  **Execute todo o script** (F5 ou botão Run).
    *   *Nota: O script cria o schema `Cidade_Educacao` automaticamente.*

## 🧪 Dados de Teste (Mock Data)

O script já popula o banco com um cenário de teste:
*   **Universidade:** "Universidade Five".
*   **Cursos:** Medicina e ADS.
*   **Cenário:**
    *   Aluno "Clara" matriculada em Medicina.
    *   Aluno "Marcos" matriculado em ADS.
    *   Professor "Maria" (TI) dando aula para ADS.
    *   Professor "Mario" (Saúde) dando aula para Medicina.

## ⚠️ Observação Técnicas
*   **Integridade Referencial:** A ordem de criação das tabelas e inserção dos dados foi estritamente planejada para não violar as chaves estrangeiras (primeiro cria a `instituicao`, depois `pessoa`, depois `aluno`, etc.).

---
**Desenvolvido por Ector Carvalho, Erick Bruno, João Paulo, Luan Rodrigues, Matheus, Michael Fernando e Tiago Mendes**
