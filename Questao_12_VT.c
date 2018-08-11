/* 12. Faça um programa que gerencie o estoque de um mercado e:
• Crie e leia um vetor de 5 produtos, com os dados: código (inteiro), nome (máximo 15 letras), preço e
quantdade (utlize struct para armazenar os dados do produto).
• Leia um pedido, composto por um código de produto e a quantdade. Localize este código no vetor e,
se houver quantdade sufciente para atender ao pedido integralmente, atualize o estoque e informe
o usuário. Repita este processo até e ler um código igual a zero. Se por algum motvo não for possível
atender ao pedido, mostre uma mensagem informando qual erro ocorreu.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 5
typedef struct tProduto
{

    char nome[15];
    int cod;
    float preco;
    int quant;
} produto;

int main()
{

    produto vet[tam];
    int i;
    int codV=0, quantV=0;
    printf("Cadastrando os produtos\n");

    for(i=0; i<tam; i++)
    {
        printf("\nDados do produto %d\n",i+1);


        printf("\nDigite o nome do produto__________: ");
        gets(vet[i].nome);

        printf("\nDigite o codigo___________: ");
        scanf("%d",&vet[i].cod);

        printf("\nDigite o preco____________: ");
        scanf("%f",&vet[i].preco);

        printf("\nDigite a quantidade_______: ");
        scanf("%d",&vet[i].quant);
        getchar();
        printf("\n=====================================\n");
    }


    printf("\n");

    printf("Listando os produtos\n");

    for(i=0; i<tam; i++)
    {
        printf("\n\n");
        printf("\nProduto cadastrado %d",i+1);
        printf("\n\nNome______ %s", vet[i].nome);
        printf("\nCodigo______ %d", vet[i].cod);
        printf("\nPreco_______ %.2f", vet[i].preco);
        printf("\nQuantidade__ %d", vet[i].quant);
        printf("\n=====================================\n");

    }



    do{
        printf("\n");
        printf("\nRegistro de Pedido\n");
        printf("\nDigita o codigo do produto: (0 para sair)");
        scanf("%d",&codV);
        printf("\nDigita a quantidade desejada: ");
        scanf("%d",&quantV);
        for(i=0; i<tam; i++)
        {
            if (codV == vet[i].cod)
            {
                if(quantV <= vet[i].quant)
                {
                    vet[i].quant = vet[i].quant - quantV;
                    printf("\nQuantidade do produto atualizada: %d\n", vet[i].quant);
                    printf("\n==========================================\n");
                }

                else
                {
                    printf("\nEstoque insuficiente");
                    printf("\n Quantidade disponivel: %d",vet[i].quant);
                    printf("\n=====================================\n");
                }

            }
        }
    }
    while(codV!=0);


    return 0;
}
