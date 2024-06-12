#include <stdio.h>

void BuscaSeq(int *v, int tam, int chave){
    int i = 0;
    while(i != tam && v[i] != chave) i++;
    if (i == tam) {printf("Chave nao encontrada\n");}
    else {printf("\nChave encontrada na posicao: %d\n", i);}
}

int main(){
    int v[] = {1,2,3,4,5,6};
    BuscaSeq(v, 6, 3);
}