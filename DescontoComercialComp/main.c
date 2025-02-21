#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    int op;

    float A, N, i, n, Dc;
    float i100;
    setlocale(LC_ALL, "Portuguese");

    do{
        printf("\n---------- Desconto Comercial Composto ----------\n");

        printf("1 - Calcular Valor Atual.\n");
        printf("2 - Calcular Valor Nominal.\n");
        printf("3 - Calcular Desconto Comercial.\n");
        printf("4 - Calcular Taxa.\n");
        printf("5 - Calcular Tempo de Antecipacao.\n");
        printf("6 - Sair.\n");

        printf("Selecione uma opção: ");
        scanf("%d", &op);

        switch(op){

        case 1:
            printf("\nCalcular Valor Atual.");
            printf("\nValor Nominal: ");
            scanf("%f", &N);

            printf("Taxa: ");
            scanf("%f", &i);

            printf("Tempo: ");
            scanf("%f", &n);

            A = (N)*pow((1-i),(n));

            printf("\n------------------------------------------------");
            printf("\nValor Atual: R$%.2f", A);
            printf("\n------------------------------------------------");
            break;

        case 2:
            printf("\nCalcular Valor Nominal.");
            printf("\nValor Atual: ");
            scanf("%f", &A);

            printf("Taxa: ");
            scanf("%f", &i);

            printf("Tempo: ");
            scanf("%f", &n);

            N = A/(pow(1-i,n));

            printf("\n------------------------------------------------");
            printf("\nValor Nominal: R$%.2f", N);
            printf("\n------------------------------------------------");
            break;

        case 3:
            printf("\nCalcular Desconto Comercial.");
            printf("\nValor Nominal: ");
            scanf("%f", &N);

            printf("Taxa: ");
            scanf("%f", &i);

            printf("Tempo: ");
            scanf("%f", &n);


            Dc = N*(1-(pow(1-i,n)));

            printf("\n------------------------------------------------");
            printf("\nDesconto Comercial: R$%.2f", Dc);
            printf("\n------------------------------------------------");

            break;

        case 4:

            printf("\nCalcular Taxa.");
            printf("\nValor Nominal: ");
            scanf("%f", &N);

            printf("Valor Atual: ");
            scanf("%f", &A);

            printf("Tempo: ");
            scanf("%f", &n);

            i = 1 - pow((A/N),(1/n));

            i100 = i * 100;
            printf("\n------------------------------------------------");
            printf("\nTaxa: %.6f ou %.2f%%", i, i100);
            printf("\n------------------------------------------------");
            break;

        case 5:

            printf("\nCalcular Tempo de Antecipação.");
            printf("\nValor Nominal: ");
            scanf("%f", &N);

            printf("Valor Atual: ");
            scanf("%f", &A);

            printf("Taxa Unitaria: ");
            scanf("%f", &i);


            n = (log(A/N))/(log(1-i));

            printf("\n------------------------------------------------");
            printf("\nTempo: %f", n);
            printf("\n------------------------------------------------");
            break;

        case 6:
            printf("\n\nSaindo...\n\n");

            break;
        default:
            printf("\nOpção inválida!\n");

        }

    }while(op!=6);

    return 0;
}

