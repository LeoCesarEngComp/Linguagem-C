#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*Programa determina quantos minutos, segundos *
 *e d�cimos de segundos tem em determinado n�- *
 *mero de horas.*/
 int main()
 {
     setlocale(LC_ALL, "Portuguese");
     int res, hora, minuto, segundo, dec_segundo;
     char tipo;
     printf("N�mero de horas: ");
     scanf("%d", &hora);
     fflush(stdin);
     printf("Mostrar[M/S/D]: ");
     scanf("%c", &tipo);
     if(tipo == 'm' || tipo == 'M'){
        res = hora < 0 ? 0 : hora * 60;
     }else
        if(tipo == 's' || tipo == 'S'){
            res = hora < 0 ? 0 : hora * 3600;
        }else
            if(tipo == 'd' || tipo == 'D'){
                res = hora < 0 ? 0 : hora * 36000;
            }


     printf("%dh --> %d%c", hora, res, tipo);
     printf("\n\n");
     system("pause");
     return 0;
 }
