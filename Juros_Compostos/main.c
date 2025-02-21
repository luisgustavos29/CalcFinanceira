#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>

float calcularValorPresente (float VF, float i, float n){
    return (VF) / (pow((1 + i),n));
}

float calcularValorFuturo (float VP, float i, float n){
    return (VP) * pow((1 + i),n);
}

float calcularJuros (float VP, float i, float n){
    return VP * (pow((1 + i),n)-1);
}


float calcularTaxa (float VF, float VP, float n){

    return pow((VF / VP), 1 / n) - 1;
}

float calcularPeriodo (float VF, float VP, float i){
    return (log10(VF / VP)) / (log10(1 + i));
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao;
    float taxa100;
    float VP, VF, i, n;


    do{
        printf("---------- Calculadora Financeira - Juros Compostos. ----------\n");
        printf("\n1. Calcular Valor Presente.\n");
        printf("\n2. Calcular Valor Futuro.\n");
        printf("\n3. Calcular Juros.\n");
        printf("\n4. Calcular Taxa.\n");
        printf("\n5. Calcular Período de Tempo.\n");
        printf("\n6. Sair.\n");
        printf("\nDigite a opção desejada: ");
        scanf("%d", &opcao);


        switch(opcao) {
            case 1:

                printf("\n\nCalculo do Valor Presente:\n");

                printf("Digite o valor futuro: ");
                scanf("%f", &VF);

                printf("Digite a porcentagem de juros: ");
                scanf("%f", &i);

                printf("Digite o tempo: ");
                scanf("%f", &n);

                while ((getchar()) != '\n');

                printf("Valor Presente: R$%.2f\n\n", calcularValorPresente(VF, i, n));
                break;

            case 2:

                printf("\n\nCalculo do Valor Futuro:\n");

                printf("Digite o valor presente: ");
                scanf("%f", &VP);

                printf("Digite a porcentagem de juros: ");
                scanf("%f", &i);

                printf("Digite o tempo: ");
                scanf("%f", &n);

                while ((getchar()) != '\n');


                printf("Valor Futuro: R$%.6f\n\n", calcularValorFuturo(VP, i, n));
                break;

            case 3:

                printf("\n\nCalculo dos Juros:\n");

                printf("Digite o valor presente: ");
                scanf("%f", &VP);

                printf("Digite a porcentagem de juros: ");
                scanf("%f", &i);

                printf("Digite o tempo: ");
                scanf("%f", &n);

                while ((getchar()) != '\n');


                printf("Valor do Juro: R$%.6f\n\n", calcularJuros(VP, i, n));
                break;

            case 4:
                printf("\n\nCalculo da Taxa de Juros:\n");

                printf("Digite o valor presente: ");
                scanf("%f", &VP);

                printf("Digite o valor futuro: ");
                scanf("%f", &VF);

                printf("Digite o tempo: ");
                scanf("%f", &n);

                while ((getchar()) != '\n');

                taxa100 = calcularTaxa(VF, VP, n) * 100;

                printf("Taxa de juros: %.6f ou %.2f%%\n\n", calcularTaxa(VF, VP, n),taxa100);
                break;

            case 5:

                printf("\n\nCalculo do período de tempo:\n");

                printf("Digite o valor presente: ");
                scanf("%f", &VP);

                printf("Digite o valor futuro: ");
                scanf("%f", &VF);

                printf("Digite a porcentagem de juros: ");
                scanf("%f", &i);

                while ((getchar()) != '\n');


                printf("Periodo de tempo: %.1f\n\n", calcularPeriodo(VF, VP, i));
                break;

            case 6:
                printf("\n\nSaindo...\n");
                break;

            default:
                printf("\n\nOpção inválida!\n");
        }
    }while(opcao != 6);

    return 0;
}
