#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*Verifica se o n�mero introduzido � zero.*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Digite um n�mero: ");
    scanf("%d", &num);
    if(num == 0)
        printf("O n�mero � zero: \n");
    else
        printf("O n�mero � diferente de zero!!!\n");
    printf("\n");
    system("pause");
    return 0;

}
