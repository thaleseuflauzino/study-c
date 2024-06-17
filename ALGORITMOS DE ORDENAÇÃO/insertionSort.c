#include <stdio.h>

void imprimir(int *v, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("%d - ", v[i]);
    }
    printf("\n");
}

void inS(int *v, int tam){
    for (int i = 1; i < tam; i++)
    {
        int temp, j = i;
        temp = v[j];
        while(j>0 && temp < v[j-1]){
            v[j] = v[j-1];
            j--;
        }
        v[j] = temp;
    }
    
}
void inSRec(int *v, int fim, int tam){
    if(fim >= tam) return;

    int temp, j = fim;
    temp = v[j];
    while(j>0 && temp < v[j-1]){
        v[j] = v[j-1];
        j--;
    }
    v[j] = temp;
    inSRec(v, fim+1, tam);
}

int main(){
    int vet[] = {2, 1, 8, 4, 51, 78, 54, 26, 23, 21, 19};// tamanho 11
    printf("Vetor original: ");
    imprimir(vet, 11);
    inS(vet, 11);
    printf("Vetor ordenado com o insertionSort: ");
    imprimir(vet, 11);
    int vet2[] = {2, 1, 8, 4, 51, 78, 54, 26, 23, 21, 19};
    inSRec(vet2,1, 11);
    printf("Vetor ordenado com o insertionSort Recursivo: ");
    imprimir(vet2, 11);
}