#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Digite um valor para determinas a quatidade de numeros de uma sequencia: \n");
    scanf("%d", &n);
    printf("\n");

    for (int i=0; i<n; i++){

        printf("%d\n", 2*i);
    }
    return 0;
}
