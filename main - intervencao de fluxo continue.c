#include <stdio.h>
#include <stdlib.h>

int main()
{
    //imprimir os n�meros de 1 � 10, exceto os n�meros pares.
    for (int i=1; i<=10; i++){
        if (i % 2==0){
                //se o n�mero for par, pula para a pr�xima intera��o do loop.
            continue;
        }
        printf("%d ", i);
    }
    printf ("\n");

    return 0;
}
