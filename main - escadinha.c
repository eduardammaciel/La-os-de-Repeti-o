#include <stdio.h>
#include <stdlib.h>

int main() {
    int linhas;

    // Pedir ao usu�rio o n�mero de linhas da matriz
    printf("Digite o n�mero de linhas: ");
    scanf("%d", &linhas);

    // Imprimir a matriz de asteriscos
    for ( int i = 0; i < linhas; i++) {
        // Imprimir espa�os � esquerda para centralizar a linha
        for (int j = 0; j < 2*i + 1; j++) {
            printf("*");
        }

        // Quebrar a linha ap�s imprimir a linha
        printf("\n");
    }

    return 0;
}
