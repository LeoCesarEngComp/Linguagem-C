#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float x;
    printf("Introduza um n�mero: ");
    scanf("%f", &x);
    printf("A parte inteira do n�mero '%.2f' � %d, e a parte fracion�ria � %.2f", x, (int)x, x - ((int)x));
    printf("\n\n");
    system("pause");
    return 0;
}
