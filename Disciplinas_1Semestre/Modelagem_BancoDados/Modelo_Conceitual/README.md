# 🏛️ Modelagem de Dados: Sistema de Gestão Acadêmica

> **Status:** ✔️ Modelo Conceitual Finalizado
> **Ferramenta:** brModelo

## 📄 Descrição do Projeto
Este projeto consiste na modelagem conceitual (Diagrama Entidade-Relacionamento) de um sistema para gerenciamento de uma instituição de ensino.

O objetivo do banco de dados é centralizar informações sobre o corpo docente, discente, administrativo, além de gerenciar a estrutura pedagógica (cursos e disciplinas) e física (salas e turmas) da instituição.

## 🎨 Diagrama Conceitual (Mermaid)

```mermaid
erDiagram
    %% --- ENTIDADES E ATRIBUTOS ---

    INSTITUICAO {
        int Cod_Instituicao PK
        string Nome
        string Email
        string CNPJ
    }

    ENDERECO {
        string CEP
        string Bairro
        string Cidade
        string Estado
        int Numero
    }

    CURSO {
        int Cod_Curs PK
        string Nome
        float Carga_horaria
    }

    DISCIPLINA {
        int Cod_Discipl PK
        string Nome
    }

    TURMA {
        int Cod_Turm PK
        string Nome
        date Data
        time Horario
        int Capacidade
    }

    SALA {
        int Cod_Sal PK
        string Nome
        string Localizacao
        int Capacidade
        int Tamanho
    }

    TIPO {
        int ID_Tip PK
        string Nome
    }

    PESSOA {
        int Cod_Pessoa PK
        string Nome
        date Data_nascimento
        string Email
        string CPF
    }

    TELEFONE {
        int ddd
        int numer
    }

    %% --- ESPECIALIZAÇÕES (HERANÇA) ---
    
    PROFESSOR {
        string Departamento
        string Titulacao
    }

    FUNCIONARIO {
        int id_interno
    }

    ALUNO {
        int matricula
    }

    CARGO {
        int ID_carg PK
        string Nome
        float Salario
    }

    HISTORICO_ESCOLAR {
        string ano_semestre
        float nota
        float frequencia
        string situacao
    }

    %% --- RELACIONAMENTOS DO DIAGRAMA ---

    %% Instituição tem Endereço (1,1) e Pessoa tem Endereço (1,1)
    INSTITUICAO ||--|| ENDERECO : "possui"
    PESSOA ||--|| ENDERECO : "possui"

    %% Instituição (0,n) -- (1,n) Curso
    INSTITUICAO }|--|{ CURSO : "Curso_Instituicao"

    %% Curso (1,n) -- (1,n) Disciplina
    CURSO }|--|{ DISCIPLINA : "Disciplina_Curso"

    %% Disciplina (1,n) -- (0,n) Sala (Relacionamento Disciplina_Sala na imagem)
    DISCIPLINA }|--|{ SALA : "Disciplina_Sala"

    %% Disciplina (1,n) -- (1,n) Turma
    DISCIPLINA }|--|{ TURMA : "Disciplina_Turma"

    %% Turma (1,n) -- (1,n) Sala
    TURMA }|--|{ SALA : "Turma_Sala"

    %% Sala (0,n) -- (0,1) Tipo
    SALA }|--|| TIPO : "Sala_Tipo"

    %% Pessoa (1,1) -- (1,n) Telefone
    PESSOA ||--|{ TELEFONE : "tem"

    %% Herança: Pessoa é Professor, Funcionário, Aluno
    PESSOA ||--|| PROFESSOR : "E_um"
    PESSOA ||--|| FUNCIONARIO : "E_um"
    PESSOA ||--|| ALUNO : "E_um"

    %% Professor (1,n) -- (1,1) Turma (R na imagem - Leciona)
    PROFESSOR }|--|{ TURMA : "leciona"

    %% Funcionario (1,n) -- (1,1) Cargo
    FUNCIONARIO }|--|| CARGO : "ocupa"

    %% Aluno (1,n) -- (1,n) Turma (R na imagem - Matriculado)
    ALUNO }|--|{ TURMA : "matriculado"

    %% Aluno (1,1) -- (1,n) Historico
    ALUNO ||--|{ HISTORICO_ESCOLAR : "possui"
```
🎨 Diagrama Visual (brModelo)
![alt text](./diagrama_conceitual.PNG)

#🧩 Estruturas e Entidades
O modelo destaca-se pelo uso de Generalização/Especialização e relacionamentos complexos. Abaixo, os principais grupos de entidades:

# 1. Hierarquia de Pessoas (Herança)
* Foi aplicada uma estrutura de generalização para evitar redundância de dados comuns.
* Pessoa (Entidade Pai): Armazena dados genéricos como Nome, CPF, Data_Nascimento, Email e relacionamentos com Endereço e Telefone.
* Especializações (Entidades Filhas):
* Professor: Possui atributos específicos como Titulação e Departamento.
* Aluno: Relaciona-se com Histórico_escolar e Turmas.
* Funcionário: Relaciona-se com Cargo (que define o salário e função).
# 2. Estrutura Pedagógica
* Instituição: Entidade central que oferta os cursos.
* Curso: Possui Carga_Horaria e contém várias disciplinas.
* Disciplina: Matérias que compõem a grade curricular.
* Turma: A instância real de uma disciplina, ocorrendo em um horário específico.
# 3. Estrutura Física
* Sala: Define o espaço físico (Tamanho, Capacidade, Localização).
* Tipo (de Sala): Categoriza as salas (ex: Laboratório, Sala de Aula, Auditório).
# 🔗 Principais Regras de Negócio Identificadas
* Unicidade de Pessoa: Uma pessoa é cadastrada apenas uma vez, podendo atuar como Professor, Aluno ou Funcionário (dependendo do tipo de especialização adotada).
* Histórico Escolar: O desempenho do aluno (Nota, Frequência, Situação) é registrado por semestre no relacionamento entre Aluno e Turma/Disciplina.
* Alocação de Salas: Cada turma é alocada em uma sala, que por sua vez possui um tipo específico, garantindo que aulas de laboratório não ocorram em salas comuns.
* Cargos e Salários: Os salários não estão atrelados diretamente ao funcionário, mas sim ao Cargo, facilitando atualizações salariais em massa.
# 🛠️ Tecnologias Utilizadas
![alt text](https://img.shields.io/badge/Modelagem-brModelo-blue?style=for-the-badge)
![alt text](https://img.shields.io/badge/Banco_de_Dados-Conceitual-orange?style=for-the-badge)
# 🚀 Como Abrir e Editar
* Para visualizar a imagem, basta acessar este repositório.
* Para editar a estrutura lógica, é necessário possuir o arquivo .brM3 (caso disponível) e utilizar o software brModelo 3.0.
# Desenvolvido por Ector Falcão, Erick Bruno, João Paulo, Luan Rodrigues, Matheus, Michael Fernando, Tiago Mendes
