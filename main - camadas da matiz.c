#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dimensao;

    printf("Digite um valor: \n");
    scanf ("%d", &dimensao);

    for (int i=0; i<dimensao; i++){
        for (int j=0; j<dimensao; j++){
            for (int k=0; k<dimensao; k++){
                printf("(%d, %d, %d)", i, j, k);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
