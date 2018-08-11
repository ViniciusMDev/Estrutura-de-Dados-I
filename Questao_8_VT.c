/* 8. Um teatro possui 300 lugares, sendo 20 fleiras de 15 poltronas. A bilheteria vende ingressos com os
seguintes valores: inteira: 20,00 – estudante: 10,00. Crie um programa que preencha o vetor
aleatoriamente com valores que identfquem poltrona vazia, poltrona inteira, poltrona estudante. Após
preencher, o programa deve contar quantas poltronas estão vazias, quantas inteiras e quantas estudante
e informar o valor total apurado.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> //necessário para a função rand

int main()
{
    int vetor[300],i,cont,cont1,cont2;
    cont=cont1=cont2=0;

    printf("Preenchendo os lugares (0 = Vazio || 1 = Estudante || 2 = Inteiro:\n\n");
    srand(time(NULL));   // alimentando a função rand com semente para que sempre gere um número aleatório mesmo executando o programa novamente
    for (i=0; i < 300; i++){
        vetor[i] = rand() % 3; // rand_max -1, valor randômico máximo que a função pode gerar
        printf("%d  ",vetor[i]);
        if(vetor[i] == 0){   // verificando quem está sentando em cada poltrona
            cont++;
        }
        if(vetor[i] == 1){
            cont1++;
        }
        if(vetor[i] == 2){
            cont2++;
        }
    }
    printf("\n\n%d Poltronas Vazias\n\n", cont);      //impressão dos lugares e do total apurado
    printf("%d Poltronas Estudantes\n\n", cont1);
    printf("%d Poltronas Inteiras\n\n", cont2);
    printf("Total Apurado: %d\n\n",cont1 * 10 + cont2 * 20);


    return 0;
}
