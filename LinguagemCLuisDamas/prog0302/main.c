#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Digite um n�mero: ");
    scanf("%d", &num);
    if(num >= 0)
        printf("O n�mero '%d' � positivo!!!\n", num);
    else
        printf("O n�mero '%d' � negativo!!!\n", num);
    printf("\n");
    system("pause");
    return 0;
}
