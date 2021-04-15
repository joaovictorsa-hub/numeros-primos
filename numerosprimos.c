//João Victor Martins Sá    RA:135051
//Turma: N
//Tarefa 01 - Números Primos

#include <stdio.h>
#include <math.h>

int main()
{
    int qtdEntradas = 0;
    int i, j;
    int entradas[9];
    int primo = 1;

    //while para as condições de entrada
    while (1 > qtdEntradas || qtdEntradas > 10)
    {
        scanf("%d", &qtdEntradas);
    }

    //laço de repetição para leitura das entradas
    for (i = 0; i < qtdEntradas; i++)
    {
        do
        {
            scanf("%d", &entradas[i]);
        } while (1 > entradas[i] || entradas[i] > 1000000);
    }

    //laço de saída
    for (i = 0; i < qtdEntradas; i++)
    {
        primo = 1;
        //laço para verificar se o número é primo
        for (j = 2; j <= sqrt(entradas[i]); j++){
        
            if (entradas[i] % j == 0)
            {
                primo = 0;
                break;
            }
        }

        if (entradas[i] == 1)
            primo = 0;

        if (primo == 1)
        {
            printf("%d 1\n", entradas[i]);
        }
        else
        {
            printf("%d 0\n", entradas[i]);
        }
    }

    return 0;
}
