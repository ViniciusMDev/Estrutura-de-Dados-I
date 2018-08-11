/*10. Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve conter a
matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova.
Permita ao usuário entrar com os dados de 5 alunos.
Encontre o aluno com maior nota da primeira prova.
Encontre o aluno com maior media geral.
Encontre o aluno com menor media geral.
Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovação.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tNotasAlunos{            //criação da struct
    char nome[50];
    float nota1, nota2, nota3;
    int matricula;

}NotasAlunos;

int main()
{
    NotasAlunos vetor[5];
    int i;
    char alunomenor[50], alunomaior[50], alunomaiorprimeira[50];
    float maiorp1, maiorgeral, menorgeral, media;

    for(i=0;i<5;i++){
        printf("\nDigite a matricula do aluno: ");
        scanf("%d", &vetor[i].matricula);
        getchar();
        printf("\nDigite o nome do aluno: ");                       //preenchimento do vetor de struct
        gets(vetor[i].nome);
        printf("\nDigite a primeira nota do aluno: ");
        scanf("%f", &vetor[i].nota1);
        printf("\nDigite a segunda nota do aluno: ");
        scanf("%f", &vetor[i].nota2);
        printf("\nDigite a terceira nota do aluno: ");
        scanf("%f", &vetor[i].nota3);
        printf("====================================\n");
    }
    maiorp1= vetor[0].nota1;
    maiorgeral=0;
    menorgeral = 999;                         //atribuindo valor as variáveis para não pegar lixo de memória
    media=0;

    strcpy(alunomaiorprimeira,vetor[0].nome);
    strcpy(alunomaior,vetor[0].nome);
    strcpy(alunomenor,vetor[0].nome);

    for(i=0;i<5;i++){
        media = (vetor[i].nota1 + vetor[i].nota2 + vetor[i].nota3) / 3;
        if(vetor[i].nota1>maiorp1){                                                 //calculo da média e verificação do aluno com a maior primeira nota
            maiorp1 = vetor[i].nota1;
            strcpy(alunomaiorprimeira,vetor[i].nome);
        }
        if(media>maiorgeral){
            maiorgeral = media;                   //buscando aluno com maior media geral
            strcpy(alunomaior,vetor[i].nome);
        }
        if(media<menorgeral){                     //buscando aluno com menor media geral
            menorgeral = media;
            strcpy(alunomenor,vetor[i].nome);
        }
        if(media>=6){
            printf("Aluno %s Aprovado\n\n", vetor[i].nome);
        }                                                                   //imprimindo se o aluno foi aprovado ou não
        else{
            printf("Aluno %s Reprovado\n\n", vetor[i].nome);
        }
    media=0;
    }

    printf("O aluno com a maior nota da primeira prova foi %s com %.2f\n\n", alunomaiorprimeira, maiorp1);  //imprimindo o que foi pedido
    printf("O aluno com a maior media geral foi %s com %.2f\n\n", alunomaior, maiorgeral);
    printf("O aluno com a menor media geral foi %s com %.2f\n\n", alunomenor, menorgeral);


    return 0;
}
