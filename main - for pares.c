#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;

    printf("Digite uma quantidade de números: \n");
    scanf ("%d", &N);
    printf ("\n");

    for (int i=0; i<N; i++){
        printf("%d\n", 2*i);
    }
    return 0;
}
