#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Apresenta��o de menu com la�o do...while.*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char opcao;
    do
    {
        printf("\nMENU PRINCIPAL\n");
        printf("\n\n\t\tClientes");
        printf("\n\n\t\tFornecedores");
        printf("\n\n\t\tEncomendas");
        printf("\n\n\t\tSair");
        printf("\n\n\n\t\tOp��o:");
        scanf("%c", &opcao);
        fflush(stdin);
        switch(opcao)
        {
            case 'c':
            case 'C': puts("Op��o CLIENTES"); break;
            case 'f':
            case 'F': puts("Op��o FORNECEDORES"); break;
            case 'e':
            case 'E': puts("Op��o ENCOMENDAS"); break;
            case 's':
            case 'S': break;
            default: puts("OP��O INV�LIDA!!!");
        }
        getchar();
    }
    while(opcao != 's' && opcao != 'S');
    printf("\n\n");
    system("pause");
    return 0;
}
