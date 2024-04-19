/******************************************************************************

Crie um programa que pede para o usuário digitar 20 números com ponto flutuante pelo teclado.

*******************************************************************************/
#include <stdio.h>

int main() {
    float numeros[20];
    int i;

    printf("Digite 20 números com ponto flutuante:\n");
    for (i = 0; i < 20; i++) {
        printf("Número %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    printf("\nVocê digitou os seguintes números com ponto flutuante:\n");
    for (i = 0; i < 20; i++) {
        printf("%.2f ", numeros[i]);
    }
    printf("\n");

    return 0;
}


