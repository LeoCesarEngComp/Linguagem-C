#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese" );
    int num;
    printf("Digite um n�mero: \n");
    scanf("%d", &num);
    printf("O n�mero introduzido foi: %d\n", num);
    printf("\n");
    system("pause");
    return 0;
}
