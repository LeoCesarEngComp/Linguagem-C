#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*La�o com continue.*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i;
    for(i = 1; i <= 100; i++)
    {
        if(i == 60)
            break;
        else
             if(i % 2 == 1)
                continue;
             else
                printf("%2d\n", i);
    }
    printf("FIM DO LA�O!!!");
    printf("\n\n");
    return 0;
}
