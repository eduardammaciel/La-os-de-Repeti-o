#include <stdio.h>
#include <stdlib.h>

int main () {

    int escolha = 0;

    while (escolha!=3){

    printf("Menu: \n");
    printf("1: opcao 1\n");
    printf("2: opcao 2\n");
    printf("3: sair do menu\n");

    printf("Digite uma opcao: \n");
    scanf("%d", &escolha);

    switch(escolha){
       case 1:
        printf ("opcao 1 \n");
            break;
        case 2:
          printf("opcao 2 \n");
              break;
        case 3:
           printf("saindo do menu \n");
               break;
        default:
            printf("saindo\n");

        }
    }

    return 0;
}
