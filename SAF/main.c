#include<stdio.h>
#include<math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int op, n, t;
    float pmt,amort, j, sd, vp, i;

    do{
    printf("\n\t ---------- SAF - Sistema de Amortizacao Frances ----------");
    printf("\n1- Calcular PMT");
    printf("\n2- Calcular Amortizacao");
    printf("\n3- Calcular Juros");
    printf("\n4- Calcular Saldo Devedor");
    printf("\n0- Encerrar");
    printf("\n\nInsira a opcao desejada: ");
    scanf("%d", &op);


    switch(op){
        case 1:
            printf("\nCalcular PMT");
            printf("\nInsira o Valor Presente (VP): ");
            scanf("%f", &vp);
            printf("\nInsira o numero de periodos (n): ");
            scanf("%d", &n);
            printf("\nInsira a taxa de juros (i): ");
            scanf("%f", &i);

            pmt = (vp * i) / (1 - pow(1 + i, -n));

            printf("\nPMT = R$%.6f", pmt);
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");

            printf("\n");
            printf("\n");
            break;

        case 2:
            printf("\nCalcular Amortizacao");
            printf("\nInsira o Valor Presente (VP): ");
            scanf("%f", &vp);
            printf("\nInsira o numero de periodos (n): ");
            scanf("%d", &n);
            printf("\nInsira a taxa de juros (i): ");
            scanf("%f", &i);
            printf("\nInsira o numero da prestacao desejada (t): ");
            scanf("%d", &t);

            pmt = (vp * i) / (1 - pow(1 + i, -n));
            sd = vp;
            for(int k=1; k<t; k++){
                j = sd * i;
                amort = pmt - j;
                sd = sd - amort;
            }
            j = sd * i;
            amort = pmt - j;

            printf("\nAmortizacao{%d} = R$%.6f", t, amort);
            printf("\n");
            printf("\n");
            break;

        case 3:
            printf("\nCalcular Juros");
            printf("\nInsira o Valor Presente (VP): ");
            scanf("%f", &vp);
            printf("\nInsira o numero de periodos (n): ");
            scanf("%d", &n);
            printf("\nInsira a taxa de juros (i): ");
            scanf("%f", &i);
            printf("\nInsira o numero da prestacao desejada (t): ");
            scanf("%d", &t);

            pmt = (vp * i) / (1 - pow(1 + i, -n));
            sd = vp;
            for(int k=1; k<t; k++){
                j = sd * i;
                amort = pmt - j;
                sd = sd - amort;
            }
            j = sd * i;

            printf("\nJuros{%d} = R$%.6f", t, j);
            printf("\n");
            printf("\n");
            break;

        case 4:
            printf("\nCalcular Saldo Devedor");
            printf("\nInsira o Valor Presente (VP): ");
            scanf("%f", &vp);
            printf("\nInsira o numero de periodos (n): ");
            scanf("%d", &n);
            printf("\nInsira a taxa de juros (i): ");
            scanf("%f", &i);
            printf("\nInsira o numero da prestacao desejada (t): ");
            scanf("%d", &t);

            pmt = (vp * i) / (1 - pow(1 + i, -n));
            sd = vp;
            for(int k=1; k<=t; k++){
                j = sd * i;
                amort = pmt - j;
                sd = sd - amort;
            }

            printf("\nSaldo Devedor{%d} = R$%.6f", t, sd);
            printf("\n");
            printf("\n");
            break;

        case 0:
            printf("\nEncerrando...");
            break;
    }

    }while(op!=0);

    return 0;
}
