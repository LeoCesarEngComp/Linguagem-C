#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("O tamanho, em bytes, de um char �: %d\n", sizeof(char));
    printf("O tamanho, em bytes, de um inteiro �: %d\n", sizeof(int));
    printf("O tamanho, em bytes, de um float �: %d\n", sizeof(float));
    printf("O tamanho, em bytes, de um double �: %d\n", sizeof(double));
    system("pause");
    return 0;

}
