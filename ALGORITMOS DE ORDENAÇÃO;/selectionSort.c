#include <stdio.h>

void imprimir(int *v, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("%d - ", v[i]);
    }
    printf("\n");
}

void selectionSort(int *v, int tam){
    int i,j,menor;
    for (i = 0; i < tam; i++)
    {
        menor = i;
        for (j = i+1; j < tam; j++)
            if (v[j] < v[menor]){menor = j;}   
  
        int temp = v[i]; v[i] = v[menor]; v[menor] = temp;
    }
}

void selectionSortRecursivo(int *v, int inicio, int tam){
    if (inicio >= tam) return;
    int j, menor;
    menor = inicio;
    for (j = inicio+1; j < tam; j++)
    {
        if (v[j] < v[menor]){menor = j;}   
    }
    int temp = v[inicio]; v[inicio] = v[menor]; v[menor] = temp;
    selectionSortRecursivo(v, inicio+1,tam);
}

int main(){
    int vet[] = {2, 4, 2, 8, 51, 78, 54, 26, 23, 21, 19};// tamanho 11
    printf("Vetor original: ");
    imprimir(vet, 11);
    selectionSort(vet, 11);
    printf("Vetor ordenado com o selectionSort: ");
    imprimir(vet, 11);
    int vet2[] = {2, 4, 2, 8, 51, 78, 54, 26, 23, 21, 19};
    selectionSortRecursivo(vet2, 0, 11);
    printf("Vetor ordenado com o selectionSortRecursivo: ");
    imprimir(vet2, 11);
    return 0;
}