#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    int op;

    float A, N, i, n, Dr;
    float i100;

    setlocale(LC_ALL, "Portuguese");


    do{
        printf("\n---------- Desconto Racional Simples ---------- \n\n");

        printf("1 - Calcular Valor Atual.\n");
        printf("2 - Calcular Valor Nominal. \n");
        printf("3 - Calcular Desconto.\n");
        printf("4 - Calcular Taxa.\n");
        printf("5 - Calcular tempo de antecipação.\n");
        printf("6 - Sair.\n");

        printf("Selecione uma opção: ");
        scanf("%d", &op);

        switch(op){

        case 1:
            printf("\nCalculando Valor Atual.");
            printf("\nValor Nominal: ");
            scanf("%f", &N);

            printf("Taxa: ");
            scanf("%f", &i);

            printf("Tempo: ");
            scanf("%f", &n);

            A = (N)/(1+(i*n));

            printf("\n------------------------------------------------");
            printf("\nValor Atual: R$%.2f", A);
            printf("\n------------------------------------------------");
            break;

        case 2:
            printf("\nCalculando Valor Nominal.");
            printf("Valor Atual: ");
            scanf("%f", &A);

            printf("Taxa: ");
            scanf("%f", &i);

            printf("Tempo: ");
            scanf("%f", &n);

            N = (A)*(1+(i*n));

            printf("\n------------------------------------------------");
            printf("\nValor Nominal: R$%.2f", N);
            printf("\n------------------------------------------------");
            break;

        case 3:
            printf("\nCalculando Desconto.");
            printf("\nValor Nominal: ");
            scanf("%f", &N);

            printf("Taxa: ");
            scanf("%f", &i);

            printf("Tempo: ");
            scanf("%f", &n);


            Dr = (N*i*n)/(1+(i*n));


            printf("\n------------------------------------------------");
            printf("\nDesconto Racional: R$%.2f", Dr);
            printf("\n------------------------------------------------");

            break;

        case 4:

            printf("\nCalculando Taxa.");
            printf("Valor Nominal: ");
            scanf("%f", &N);

            printf("\nValor Atual: ");
            scanf("%f", &A);

            printf("Tempo: ");
            scanf("%f", &n);

            i = ((N/A)-1)/n;


            i100 = i * 100;
            printf("\n------------------------------------------------");
            printf("\nTaxa: %.6f ou %.2f%%", i, i100);
            printf("\n------------------------------------------------");
            break;

        case 5:

            printf("Calculando Tempo de Antecipação.");
            printf("\nValor Nominal: ");
            scanf("%f", &N);

            printf("Valor Atual: ");
            scanf("%f", &A);

            printf("Taxa: ");
            scanf("%f", &i);


            n = ((N/A)-1)/i;
            printf("\n------------------------------------------------");
            printf("\nTempo: %f", n);
            printf("\n------------------------------------------------");
            break;

        case 6:

            printf("\n\nSaindo ...");
 break;

        default:
            printf("\nOpção inválida!");

        }

    }while(op!=6);

    return 0;
}
