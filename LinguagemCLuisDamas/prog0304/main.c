#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*Adiciona R$1.000,00 ao sal�rio, caso esse seja menor de R$100.000,00*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float salary;
    printf("Informe o sal�rio do funcion�rio: ");
    scanf("%f", &salary);
    if(salary <= 100000)
        salary += 1000;
    printf("O sal�rio do funcion�rio �: %.2f", salary);

    printf("\n\n");
    system("pause");
    return 0;
}
