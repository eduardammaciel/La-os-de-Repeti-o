#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Digite um valor para determinar a quantidade de numeros de uma sequencia: \n");
    scanf("%d", &n);
    printf("\n");

    for (int i=0; i<=n; i++){
        printf("%d\n", i);
    }
    return 0;
}
