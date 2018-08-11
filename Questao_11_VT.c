/* 11. Faça um programa que controle contas de banco.
• Crie e leia um vetor de contas de banco, com código (inteiro), cliente (máximo 15 letras), saldo.
• Leia um inteiro. Se for lido 1, execute depósito. Se for lido 2, execute saque. Se for lido 0, fnalize o
programa. Repita este processo enquanto não for lido um valor válido.
• Depósito: leia um código de conta e um valor. Some o valor lido no saldo da conta lida. Mostre o
nome do cliente e o saldo resultante na tela.
• Saque: leia um código de conta e um valor. Se o saldo for sufciente, deduza o valor lido no saldo da
conta lida. Mostre o nome do cliente e o saldo resultante na tela.

(Utlize uma struct para armazenar os dados das contas de banco)*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tContas{     //criando minha struct
    int codigo;
    char cliente[15];
    float saldo;


}Contas;

int main()
{
    Contas vetor[2];
    int i ,codigodeposito ,codigosaque;
    float valordeposito, valorsaque;
    char copianome[15];
    for(i=0;i<2;i++){                                   //preenchimento do vetor de struct
        printf("\nDigite o codigo da conta: ");
        scanf("%d", &vetor[i].codigo);
        getchar();
        printf("\nDigite o seu nome: ");
        gets(vetor[i].cliente);
        printf("\nDigite o seu saldo: ");
        scanf("%f", &vetor[i].saldo);
        printf("==========================");


    }
    int opcao;
    do{
        printf("\nDigite o codigo da operacao: 1 - Deposito, 2 - Saque, 0 - Sair\n"); //selecao de operação a ser realizada
        scanf("%d", &opcao);

    }
    while (opcao != 1 && opcao != 2 && opcao != 0);

    strcpy(copianome,vetor[0].cliente);
    if (opcao == 1){
        printf("\nDigite o codigo da conta: ");            //opção de depósito
        scanf("%d", &codigodeposito);
        printf("\nDigite o valor a ser depositado: ");
        scanf("%f", &valordeposito);
        for(i=0;i<5;i++){
            if(vetor[i].codigo == codigodeposito){
                vetor[i].saldo = vetor[i].saldo + valordeposito;
                strcpy(copianome,vetor[i].cliente);                    //impressão do saldo e nome atualizado
                printf("==========================");
                printf("\nSaldo atualizado: %.2f", vetor[i].saldo);
                printf("\nObrigado pela operacao %s \n\n", copianome);
            }
        }
    }
    if (opcao == 2){
        printf("\nDigite o codigo da conta: ");            //opção de saque
        scanf("%d", &codigosaque);
        printf("\nDigite o valor a ser sacado: ");
        scanf("%f", &valorsaque);
        for(i=0;i<5;i++){
            if(vetor[i].codigo == codigosaque){
                if(vetor[i].saldo>=valorsaque){
                vetor[i].saldo = vetor[i].saldo - valorsaque;
                strcpy(copianome,vetor[i].cliente);                    //impressão do saldo e nome atualizado
                printf("==========================");
                printf("\nSaldo atualizado: %.2f", vetor[i].saldo);
                printf("\nObrigado pela operacao %s \n\n", copianome);
                }
                else{
                    printf("Saldo Insuficiente");
                }
            }
        }

    }

    return 0;
}
