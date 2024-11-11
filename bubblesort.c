#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

void imprimir(int vet[], int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        printf("%d \n", vet[i]);
    }
}




int main()
{
    int i, j, aux;
    int vet[TAM];

    srand(time(NULL));

    for (i = 0; i < TAM; i++)
    {
        vet[i] = rand() % 100;
    }
    
    for (i = 0; i < TAM; i++)
    {
        for (j = i + 1; j < TAM; j++)
        {
            if(vet[i] > vet[j])
            {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
    imprimir(vet, TAM);    
}