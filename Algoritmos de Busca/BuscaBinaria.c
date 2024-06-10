#include <stdio.h>

int buscaBinariaRecursiva(int *vet, int chave, int inicio, int fim)
{
    int meio = (inicio + fim) / 2;
    if (inicio <= fim)
    {
        if (chave == vet[meio]){return meio;}
        else if (chave < vet[meio]){return buscaBinariaRecursiva(vet, chave, inicio, meio - 1);}
        else {return buscaBinariaRecursiva(vet, chave, meio + 1, fim);}
    }

    return -1; // chave nao encontrada
}
int buscaBinariaIterativa(int *vet, int chave, int tam){
    int inicio = 0; int fim = tam -1;
    while (inicio <= fim)
    {
        int meio = (inicio + fim) / 2;
        if (chave == vet[meio]){return meio;}
        else if (chave < vet[meio]){fim = meio - 1;}
        else {inicio = meio + 1;}
    }
    return -1; // chave nao encontrada
}

int main()
{
    int vet[10] = {13, 14, 19, 43, 47, 52, 65, 82, 89, 91};
    int valor, op;
    do
    {
        printf("Digite um valor a ser buscado: ");
        scanf("%d", &valor);
        printf("\nResultado da funcao recursiva: %d\n", buscaBinariaRecursiva(vet, valor, 0, 9));
        printf("\nResultado da funcao iterativa: %d\n", buscaBinariaIterativa(vet, valor, 10));
        printf("\n0 - Sair\n1 - Nova busca\n");
        scanf("%d", &op);
    } while (op != 0);
    return 0;
}