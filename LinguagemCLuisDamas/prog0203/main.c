#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, sum;
    printf("Introduza dois n�meros: ");
    scanf("%d%d",&n1, &n2);
    sum = n1 + n2;
    printf("Os n�meros introduzidos foram: %d e %d\n", n1, n2);
    printf("a soma dos dois n�meros digitados foi: %d\n", sum);
    system("pause");
    return 0;
}
