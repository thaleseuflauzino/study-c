#include <stdio.h>

void bubbleOtimizado(int *v, int tam){
    int i, aux, troca = 1;
    while (troca)
    {
        troca = 0;
        for (i = 0; i < tam-1; i++)
        {    
            if (v[i] > v[i+1])
            {
                aux = v[i]; v[i] = v[i+1]; v[i+1] = aux; troca = 1;
            }
        }
        tam--;
    }    
}

void bubble(int *v, int n){
    for (int j = 0; j < n ; j++)
    {
        for (int i = 0; i < n-1; i++)
        {
            if (v[i]> v[i+1])
            {
               int aux = v[i]; v[i] = v[i+1]; v[i+1] = aux;
            }
        }
    }
}

void bubbleRecursivo(int *v, int n){
    if(n<2) return;
    for (int i = 0; i < n-1; i++)
    {
        if (v[i] > v[i+1])
        {
            int temp = v[i];
            v[i] = v[i+1];
            v[i+1] = temp;
        }
    }
    bubbleRecursivo(v, n-1);
}
void imprimir(int *v, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("%d - ", v[i]);
    }
    printf("\n");
}
int main(){
    int vet[] = {2, 4, 2, 8, 51, 78, 54, 26, 23, 21, 19};// tamanho 11
    printf("Vetor original: ");
    imprimir(vet, 11);
    bubble(vet, 11);
    printf("Vetor ordenado com o bubble 'padrao': ");
    imprimir(vet, 11);
    int vet2[] = {2, 4, 2, 8, 51, 78, 54, 26, 23, 21, 19};
    bubbleOtimizado(vet2, 11);
    printf("Vetor ordenado com o bubble otimizado: ");
    imprimir(vet2, 11);
    int vet3[] = {2, 4, 2, 8, 51, 78, 54, 26, 23, 21, 19};
    bubbleRecursivo(vet3, 11);
    printf("Vetor ordenado com o bubble recursivo: ");
    imprimir(vet3, 11);

}