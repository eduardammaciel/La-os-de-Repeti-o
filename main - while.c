#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 0;

    printf("Digite um numero positivo (ou um numero negativo para sair):");

    while (numero >= 0){ //enquanto esta função for verdadeira o programa continua rodando.
        scanf("%d", &numero);

        if (numero >= 0){ //porém, quando esta função for verdadeira o programa deve parar.
            printf("Numero inserido: %d\n", numero);
            printf("Digite outro numero positivo (ou um numero negativo para sair):");
        }
    }
    printf ("Numero negativo inserido. Saindo...\n");
}
