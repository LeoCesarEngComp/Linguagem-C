#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*C�lculo da �rea e do per�metro da circunfer�ncia.*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float raio, perimetro;
    double pi, area;
    pi = 3.1415927;
    printf("Informe o raio da circunfer�ncia: ");
    scanf("%f", &raio);
    area = pi * raio * raio;
    perimetro = 2 * pi * raio;
    printf("O per�metro da circunfer�ncia �: %f\n", perimetro);
    printf("A �rea da circunfer�ncia �: %f\n", area);
    system("pause");
    return 0;
}
