#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/* Solicita o sal�rio, se for  *
 * negativo ou zero mostre o   *
 * erro, se for maior que 1000,*
 * paga 10% de imposto, se n�o *
 * paga apenas 5%.             */
 int main()
 {
     setlocale(LC_ALL, "Portuguese");
     float salary;
     printf("Digite o sal�rio do funcion�rio: ");
     scanf("%f", &salary);
     if(salary <= 0)
        printf("O sal�rio n�o pode ser negativo!\n");
     else
        if(salary > 1000){
            salary *= 1.1;
        }
        else
            salary *= 1.05;
     printf("O sal�rio final do funcion�rio �: %.2f", salary);
     printf("\n\n");
     return 0;
 }
