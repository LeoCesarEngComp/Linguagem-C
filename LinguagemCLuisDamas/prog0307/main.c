#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*C�lculo do contracheque            *
 *sal�rio < 1000 = taxa 5%           *
 *sal�rio >= 1000 e < 5000 = taxa 11%*
 *sal�rio >= 5000 = taxa 35%         */
 int main()
 {
     setlocale(LC_ALL, "Portuguese");
     float salary, netSalary, tax;
     printf("Digite o sal�rio do funcion�rio: ");
     scanf("%f", &salary);
     if(salary < 1000){
        tax = salary*0.05;
        netSalary = salary - tax;
     }
     else
        if(salary >= 1000 && salary < 5000){
            tax = salary*0.11;
            netSalary = salary - tax;
        }
        else
            {
            tax = salary*0.35;
            netSalary = salary - tax;
            }
     printf("Salary: %.2f\nTax: %.2f\nNet salary: %.2f", salary, tax, netSalary);
     printf("\n\n");
     system("pause");
     return 0;
 }
