#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 1;

    //loop while para imprimir números de  até que o quadrado seja maior que 50.
    while (1){
        int quadrado = contador*contador;
        printf("O quadrado de %d é %d\n", contador, quadrado);

    if (quadrado > 50){
        break;   //se o quadrado for maior que 50 sai do loop
    }

    contador++;

    }

    return 0;
}
