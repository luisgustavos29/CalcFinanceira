#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int op;
    float i, i100, n, ic, ik, k;
    setlocale(LC_ALL, "Portuguese");


    do{
        printf("\n---------- Convers�o de Taxas ----------\n\n");
        printf("\n1 - Calcular Maior para Menor.");
        printf("\n2 - Calcular Menor para Maior.");
        printf("\n3 - Calcular Taxa Efetiva.");
        printf("\n4 - Sair.");
        printf("\n\nSelecione a op��o: ");
        scanf("%d", &op);

        switch(op){
        case 1:
            printf("\nConvers�o da Taxa maior para a Taxa menor:");
            printf("\nTempo: ");
            scanf("%f", &n);
            printf("Taxa a ser convertida: ");
            scanf("%f", &ic);
            i = pow((1+ic),(1/n))-1;
            i100 = i*100;
            printf("\n------------------------------------------------");
            printf("\nTaxa convertida: %.6f ou %.6f%%", i, i100);
            printf("\n------------------------------------------------");
            break;

        case 2:
            printf("\nConvers�o da Taxa menor para a Taxa maior:");
            printf("\nTempo: ");
            scanf("%f", &n);
            printf("Taxa a ser convertida: ");
            scanf("%f", &ic);
            i = pow((1+ic),(n))-1;
            i100 = i*100;
            printf("\n------------------------------------------------");
            printf("\nTaxa convertida: %.6f ou %.6f%%.", i, i100);
            printf("\n------------------------------------------------");
            break;

        case 3:
            printf("\nC�lculo da Taxa Efetiva:");
            printf("\nTaxa nominal(ik): ");
            scanf("%f", &ik);
            printf("Per�odo(k): ");
            scanf("%f", &k);
            i = ik/k;

            printf("\n------------------------------------------------");
            printf("\nTaxa efetiva: %.6f.", i);
            printf("\n------------------------------------------------");
            break;

        case 4:
            printf("\nSaindo ...\n");
            break;

        default:
            printf("\nOp��o inv�lida!\n");

        }

    }while(op!=4);

    return 0;
}
