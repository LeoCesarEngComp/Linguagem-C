#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num = 123;
    printf("O valor de num � %d, e o valor seguinte � %d!!!\n", num, num + 1);

    return 0;
}





