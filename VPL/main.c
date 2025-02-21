#include<stdio.h>
#include<math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float I, i, fc, vr, vpl, temp;
    int n, vres, periodoVR, opcao;

    do {
        printf("\n---------- CÁLCULO VPL ----------\n\n");

        printf("Insira o valor do Investimento (I): ");
        scanf("%f", &I);

        printf("Insira a taxa (i): ");
        scanf("%f", &i);

        printf("Insira o Tempo (n): ");
        scanf("%d", &n);

        for(int j = 1; j<=n; j++){
            printf("Insira o Fluxo de Caixa do %d^o periodo: ",j);
            scanf("%f", &fc);

            temp = (fc)/(pow((1+i),j));
            vpl += temp;

        }

        printf("\nTem valor residual?\n1-Sim\n2-Nao\nEscolha uma opcao: ");
        scanf("%d", &vres);

        switch(vres){

        case 1:
                printf("\nInsira o Valor Residual (VR): ");
                scanf("%f", &vr);
                printf("\nInsira o periodo do valor residual: ");
                scanf("%d", &periodoVR);

                vr = (vr)/(pow((i+1),periodoVR));

                vpl = (vpl+vr) - I;

                printf("\n-----------------");
                printf("\nVPL = R$%.2f", vpl);
                printf("\n-----------------");
                break;

        case 2:
                vpl = (vpl+0) - I;

                printf("\n-----------------");
                printf("\nVPL = R$%.2f", vpl);
                printf("\n-----------------");
                break;
        }


        if(vpl<0)
            printf("\n\nVPL negativo, deve recusar!\n");
        else if (vpl>0)
            printf("\n\nVPL positivo, deve aceitar!\n");

        printf("\nDeseja fazer um novo cálculo?\n1-Sim\n2-Nao\nEscolha uma opcao: ");
        scanf("%d", &opcao);

    } while(opcao == 1);

    return 0;
}
