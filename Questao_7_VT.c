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
