#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*Ler nome, endere�o, telefone e imprimir*/
main(){
char nome[10];
char telefone[10];
char endereco[30];

setlocale(LC_ALL, "Portuguese");

printf("Digite o seu nome: ");
gets(nome);

printf("\nDigite o seu endere�o: ");
gets(endereco);

printf("\nDigite o seu telefone[xxxx-xxxx]: ");
gets(telefone);

printf("\nNome: %s\n", nome);
printf("Telefone: %s \n", telefone);
printf("Endere�o: %s", endereco);
printf("\n");
system("pause");
}
