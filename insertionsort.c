#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

void imprimir(int vet[], int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        printf("|%d| ", vet[i]);
    }
}

void PreencheVetor (int vetor[])
{
    int i;
    srand(time(NULL));

    for (i = 0; i < TAM; i++)
    {
        vetor[i] = rand() % 100;
    }
}


int main()
{
    int i, j, atual;
    int vetor[TAM];

    PreencheVetor (vetor);
    
    for (i = 0; i < TAM; i++)
    {   
        atual = vetor[i];
        j = i - 1;

        while((j>=0)&&(atual<vetor[j]))
        {
            vetor[j+1] = vetor[j];
            j--;
        }
        vetor[j+1] = atual;
    }
    imprimir(vetor, TAM);    
}