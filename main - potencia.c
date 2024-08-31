#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, res;
    printf("Digite um numero: \n");
    scanf ("%f", &n1);
    printf("Digite outro numero: \n");
    scanf ("%f", &n2);
    res=pow(n1,n2);
    printf("%.f",res);
    return 0;
}
