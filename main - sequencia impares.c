#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Digite um valor para determinar a quantidade de numeros de uma sequencia: \n");
    scanf("%d", &n);
    printf("\n");

    for (int i=1; n>0; i+=2){ //i+=2 esta indicando que o valor passa de 2 em 2;
            printf("%d\n", i);
            n--;
    }
    printf("\n");
    return 0;
}
