/* 7. Escreva um programa em C para ler um vetor X de 10 elementos e um valor P (aceitar apenas valores
entre 0 e 9) que representa a posição de um elemento dentro do vetor X. Imprimir o valor do elemento
que ocupa a posição informada. Logo após excluir esse elemento do vetor fazendo com que os
elementos subsequentes (se houverem) sejam deslocados de 1 posição para o início. Imprimir o vetor X
após a exclusão ter sido executada.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10],i , valorp;
    for(i=0;i<10;i++){
        printf("Digite o valor do elemento %d:", i); // preenchimento vetor
        scanf("%d", &vetor[i]);
    }
    //definição valor entre 1 e 9
    do{
        printf("Digite o valor de P (Entre 0 e 9): ");
        scanf("%d", &valorp);
        if(valorp>9 || valorp<0){
        printf("Valor Invalido\n");
        }
    }
    while(valorp>9 || valorp<0);

    for(i=0;i<10;i++){   //busca pela posição digitada e deslocação da posição do vetor
        if(valorp == i){
            printf("O valor da posicao informada e: %d\n", vetor[i]);
        }
        if(i > valorp){
            vetor[i-1]=vetor[i];
        }
    }
    printf("Vetor X: \n");
    for(i=0;i<9;i++){   //impressão do novo vetor
        printf("%d %d\n", i, vetor[i]);


    }

    return 0;
}
