#include <stdio.h>
#include <stdlib.h>

int particiona(int *v, int inicio, int fim)
{
    int pivo = (v[inicio] + v[fim] + v[(inicio + fim) / 2]) / 3;
    while (inicio < fim)
    {
        while (inicio < fim && v[inicio] <= pivo)
        {
            inicio++;
        }
        while (inicio < fim && v[fim] > pivo)
        {
            fim--;
        }
        int temp = v[inicio];
        v[inicio] = v[fim];
        v[fim] = temp;
    }
    return inicio;
}

void quickSort(int *v, int inicio, int fim)
{
    if(inicio < fim){   
        int pos = particiona(v, inicio, fim);
        quickSort(v, inicio, pos - 1);
        quickSort(v, pos, fim);
    }
}

void imprimir(int *v, int tam)
{
    for (int i = 0; i <= tam; i++)
    {
        printf("%d - ", v[i]);
    }
    printf("\n");
}
int main()
{
    int vet[] = {47, 53, 22, 03, 77, 82, 99, 91, 23, 54, 22}; // tamanho 11
    printf("Vetor original: ");
    imprimir(vet, 10);
    quickSort(vet, 0, 10);
    printf("Vetor ordenado: ");
    imprimir(vet, 10);
    return 0;
/*
    QuickSort (provavelmente o mais eficiente)
        Escolher um pivo que sera usado nas comparacoes 
        Percorrer o vetor da esquerda p/ direita até encontrar um elemento maior que o pivo
        Percorrer o vetor da direita p/ esquerda até encontrar um elemento menor que o pivo
        Trocar os dois elementos
*/
}