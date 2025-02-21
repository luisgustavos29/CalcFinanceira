#include<stdio.h>
#include<math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float I, i, fc, vpl, temp;
    int n, opcao;

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

        vpl = vpl - I;

        printf("\n-----------------");
        printf("\nVPL = R$%.2f", vpl);
        printf("\n-----------------");

        if(vpl<0)
            printf("\nVPL negativo, deve recusar!");
        else if (vpl>0)
            printf("\nVPL positivo, deve aceitar!");

        printf("\nDeseja fazer um novo cálculo?\n1-Sim\n2-Nao\nEscolha uma opcao: ");
        scanf("%d", &opcao);

    } while(opcao == 1);

    return 0;
}
