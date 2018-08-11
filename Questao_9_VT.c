#include <stdio.h>
#include <stdlib.h>
#define MAX 10
#include <string.h>

typedef struct tDiretorio{   //criando struct

    char nomechapa[50], nomeresp[50], nvotochapa[50];
    int numvotos;

}Diretorio;

int main()
{
    int i;     //definindo variaveis
    Diretorio chapa1, chapa2;
    Diretorio vetor[MAX];



    printf("Digite o nome da chapa 1: ");  //preenchimento 1 chapa
    gets(chapa1.nomechapa);
    strlwr(chapa1.nomechapa);
    printf("Digite o nome do responsavel da chapa 1: ");
    gets(chapa1.nomeresp);


    printf("\nDigite o nome da chapa 2: "); //preenchimento 2 chapa
    gets(chapa2.nomechapa);
    strlwr(chapa2.nomechapa);
    printf("Digite o nome do responsavel da chapa 2: ");
    gets(chapa2.nomeresp);

    chapa1.numvotos = chapa2.numvotos =0; //zerando contagem de votos

    for(i=0;i<MAX;i++){

        printf("\nDigite o nome da chapa escolhida: "); //digitando votos dos alunos
        gets(vetor[i].nvotochapa);

        if (strcmp(vetor[i].nvotochapa,chapa1.nomechapa) && strcmp(vetor[i].nvotochapa,chapa2.nomechapa) !=0){  //condição caso o aluno entre com uma chapa diferente da definida
            while (strcmp(vetor[i].nvotochapa,chapa1.nomechapa) && strcmp(vetor[i].nvotochapa,chapa2.nomechapa) !=0){
                    printf("\nNome da chapa errado, Digite novamente: ");
                    gets(vetor[i].nvotochapa);
            }
        }

        strlwr(vetor[i].nvotochapa); //passando chapa para minúsculo caso o usuário entre com letra maiúscula

        if (strcmp(vetor[i].nvotochapa,chapa1.nomechapa)==0){  // condição caso o voto seja para chapa 1
            chapa1.numvotos++;

        }
        else if(strcmp(vetor[i].nvotochapa,chapa2.nomechapa)==0){ // condição caso o voto seja para chapa 2
            chapa2.numvotos++;

        }
        }



    if(chapa2.numvotos>chapa1.numvotos){
        printf("\nA chapa campea foi: %s\n Nome responsavel: %s\n Numeros de votos: %d", chapa2.nomechapa, chapa2.nomeresp, chapa2.numvotos); // condição caso a chapa 2 ganhe
    }
    if(chapa1.numvotos>chapa2.numvotos){
        printf("\nA chapa campea foi: %s\n Nome responsavel: %s\n Numeros de votos: %d", chapa1.nomechapa, chapa1.nomeresp, chapa1.numvotos); // condição caso a chapa 1 ganhe
    }
    else{
        printf("\nChapas empatadas com %d votos cada uma", chapa1.numvotos); //Condição caso haja empate
    }

    return 0;
}
