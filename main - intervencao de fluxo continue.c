#include <stdio.h>
#include <stdlib.h>

int main()
{
    //imprimir os números de 1 à 10, exceto os números pares.
    for (int i=1; i<=10; i++){
        if (i % 2==0){
                //se o número for par, pula para a próxima interação do loop.
            continue;
        }
        printf("%d ", i);
    }
    printf ("\n");

    return 0;
}
