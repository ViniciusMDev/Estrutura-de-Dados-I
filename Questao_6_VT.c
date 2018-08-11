/* 6. Dado dois vetores, A (5 elementos) e B (8 elementos), faça um programa em C que imprima todos os
elementos comuns aos dois vetores.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor1[5], vetor2[8],i,j;
    for(j=0;j<5;j++){
        printf("Digite o elemento %d do vetor A: ", j+1);       //preenchimento do vetor A
        scanf("%d", &vetor1[j]);
    }
    for(i=0;i<8;i++){
        printf("Digite o elemento %d do vetor B: ", i+1);  //preenchimento do vetor B
        scanf("%d", &vetor2[i]);
    }
    for(i=0;i<8;i++){
        for(j=0;j<5;j++){                                       //verificação e impressão dos elementos comuns
        if(vetor2[i]==vetor1[j]){
            printf("Elemento comum : %d\n",vetor2[i]);
        }
        }

        }


    return 0;
}
