#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Introduza um n�mero [0 a 255]: ");
    scanf("%d", &num);
    printf("Foi introduzido o n�mero '%d' que corresponde ao caractere '%c'!!!\n", num , (char) num);
    printf("O caractere seguinte '%c' tem o ASCII n� '%d'!!!", (char) (num + 1), num + 1);
    printf("\n");
    system("pause");
    return 0;
}
