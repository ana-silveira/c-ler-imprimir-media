/*
47. Fa�a um programa que leia 12 n�meros e imprima a m�dia destes n�meros.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int numero;
    int soma = 0;

    for ( int i = 1; i <= 12; i++) {
        printf("Informe o n�mero %d: ", i);
        scanf("%d", &numero);

        soma = soma + numero ;

        }

    printf("O valor m�dio dos 12 n�meros informados � %d \n ", soma/12 );

}
