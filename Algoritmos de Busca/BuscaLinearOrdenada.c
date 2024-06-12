#include <stdio.h>

int buscaSequencialOrdenada(int *V, int n, int chave)
{
    int p = 0, posic = -1;
    while (p < n && chave <= V[p]) // vetores ordenados de forma decrescente, se for decrescente tem que ser *chave >= v[p]*
    {
        if (V[p] == chave)
        {
            posic = p;
            break;
        }
        p++;
    }
    return posic;
}

int main()
{
    int v[] = {6, 5, 4, 3, 2, 1};
    int res = buscaSequencialOrdenada(v, 6, 3);
    printf("resultado: %d", res);
}