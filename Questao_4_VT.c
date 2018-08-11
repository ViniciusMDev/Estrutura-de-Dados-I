/* 4. Escreva um programa que faça o levantamento em uma adega da seguinte maneira:
Leia um conjunto de 10 registros cada um contendo o nome do vinho, ano da safra e o código indicando
o tpo do vinho ( 1=branco, 2=tnto, 3=rose ). O programa deverá calcular e imprimir:
a) quantdade de cada tpo de vinho;
b) safra e o nome do vinho mais velho;
c) porcentagem de garrafas de vinho rose.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tAdega{              //criação da struct
    char nome[50];
    int ano, codigo;

} Adega;
int main()
{
    Adega vetor[10];
    int i, v1,v2,v3, maisvelho;         //variáveis
    float percent;
    char nomevelho[50];
    v1=v2=v3=0;
    for(i=0;i<3;i++){
        printf("Digite o nome do vinho: ");
        gets(vetor[i].nome);                        //preenchimento do vetor de struct
        printf("\nDigite o ano da safra do vinho: ");
        scanf("%d", &vetor[i].ano);
        printf("\nDigite o codigo do tipo do vinho:\n 1 = Branco\n 2 = Tinto\n 3 = Rose\n ");
        scanf("%d", &vetor[i].codigo);
        getchar();
    }
    maisvelho = vetor[0].ano;
    for(i=0;i<3;i++){
        if(vetor[i].codigo == 1){               //verificando quantidade de cada vinho
           v1++;
        }
        if(vetor[i].codigo == 2){
           v2++;
        }
        if(vetor[i].codigo == 3){
           v3++;
        }
        if(vetor[i].ano<maisvelho){
            maisvelho = vetor[i].ano;
            strcpy(nomevelho,vetor[i].nome);        //verificando vinho mais velho
        }
    }
    percent = v1 + v2 + v3;
    printf("Quantidade de vinhos: \n");
    printf("\nQuantidade de vinho branco: %d", v1);
    printf("\nQuantidade de vinho tinto: %d", v2);              //impressão do que foi pedido no exercício na tela
    printf("\nQuantidade de vinho rose: %d\n", v3);
    printf("\nVinho mais velho:\n Nome: %s Safra: %d\n", nomevelho, maisvelho);
    printf("===============================================================");
    printf("\nPorcentagem de vinho rose: %.2f\n", (v3 * 100) / percent);


    return 0;
