//Versão final para apresentar a atividade
#include <stdio.h>
#include <string.h>//não usei, desculpa achei que usaria
#include <stdlib.h> //a gente vai alocar e limpar espaço 
int i;
    struct aluno{
        int matricula;
        char nome[50];
        float nota1;
        float nota2;
        float notaMedia;
    };
int main(){
    float *notas;
    float media = 0;
    //podia ser tamanho 
     int n; 
    char name;
    struct aluno aluno;
     printf("Digite o nome do aluno: ");
    //não é pra usar o &
    //vai referenciar o array e não o primeiro char no array
    //é só fazer sem o & quando for armazenar algo em um array e neste caso que estamos usando apenas uma linha é só colocar o nome dele
    //caso houvessem mais linhas, referenciaria a linha com aluno1.nome[X]
    //sem nada é como dizer aluno1.nome[0]
   scanf("%49s", aluno.nome); 
   printf("Digite a matrícula: ");
   scanf("%d", &aluno.matricula);
   
    printf("Digite o número de notas que deseja inserir:");
    scanf("%d", &n);
    //se o usuário colocar 0 no tamanho do array/número de notas pra inserir
    if (n <=0){
        printf("ai cê me quebra.");
        return 0;
    }
    notas = (float *) malloc (n  * sizeof(float));
    
    //telinha de erro de alocação direto do slide da professora
    if(notas == NULL){
        printf("erro ao alocar memória\n");
        return 1;
    }
    
    printf("Serão inseridas %d notas:\n", n);
    for(int i = 0; i < n; i++){
        printf("Digite a %da nota: ", i+1);
        scanf("%f", &notas[i]);
        media += notas[i];
    }
    
    aluno.notaMedia = media / n;
    
    if(aluno.notaMedia >= 6){
        printf(" Aluno: %.49s.\n Matrícula: %d.\n Nota média: %.2f.\n Situação: Aprovado.\n", aluno.nome, aluno.matricula,aluno.notaMedia);
    }else{
        printf(" Aluno: %.49s.\n Matrícula: %d.\n Nota média: %.2f.\n Situação: Reprovado.\n", aluno.nome, aluno.matricula,aluno.notaMedia);
    }
    
    free(notas);
    
    return 0;
}
