#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas = 3;
    int colunas = 3;

    for (int i = 0; i< linhas; i++) {
        for (int j =0; j < colunas; j++){
            printf("%d%d ", i, j);
        }
        printf("\n");
    }
    return 0;
}
