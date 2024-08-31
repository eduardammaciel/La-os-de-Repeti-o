#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int soma=0;
    for (int i=1; i<=10; i++){
        soma+=i;
    }

    printf("A soma dos 10 primeiros numeros naturais e: %d\n", soma);
    return 0;
}
