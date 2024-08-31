#include <stdio.h>
#include <stdlib.h>

int main() {
    int linhas;

    // Pedir ao usuário o número de linhas da matriz
    printf("Digite o número de linhas: ");
    scanf("%d", &linhas);

    // Imprimir a matriz de asteriscos
    for ( int i = 0; i < linhas; i++) {
        // Imprimir espaços à esquerda para centralizar a linha
        for (int j = 0; j < 2*i + 1; j++) {
            printf("*");
        }

        // Quebrar a linha após imprimir a linha
        printf("\n");
    }

    return 0;
}
