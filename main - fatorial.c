#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int num,fatorial=1;

    printf ("digite um valor: \n");
    scanf("%d", &num);

    for(int i=1; i<=num; i++){
        fatorial = fatorial * i;
    }

    printf("o fatotial é: %d\n", fatorial);
    return 0;
}
