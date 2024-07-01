#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int conteudo;
    struct no *esquerda, *direita;
} No;

typedef struct{
    No *raiz;
} ArvB;

void inserirEsquerda(No *no, int valor){
    if (no->esquerda == NULL){
        No *novo = (No*) malloc(sizeof(No));
        novo->conteudo = valor;
        novo->esquerda = NULL;
        novo->direita = NULL;
        no->esquerda = novo;
    } else {
        if(valor < no->esquerda->conteudo)
            inserirEsquerda(no->esquerda, valor);
        if(valor > no->esquerda->conteudo)
            inserirDireita(no->esquerda, valor);
    }
}

void inserirDireita(No *no, int valor){
    if (no->direita == NULL){
        No *novo = (No*) malloc(sizeof(No));
        novo->conteudo = valor;
        novo->esquerda = NULL;
        novo->direita = NULL;
        no->direita = novo;
    } else {
        if(valor > no->direita->conteudo)
            inserirDireita(no->direita, valor);
        if(valor < no->direita->conteudo)
            inserirEsquerda(no->direita, valor);
    }
}

void inserir(ArvB *arv, int valor){
    if (arv->raiz == NULL){
        No *novo = (No*) malloc(sizeof(No));
        novo->conteudo = valor;
        novo->esquerda = NULL;
        novo->direita = NULL;
        arv->raiz = novo;
    } else {
        if(valor < arv->raiz->conteudo)
            inserirEsquerda(arv->raiz, valor);
        if(valor > arv->raiz->conteudo)
            inserirDireita(arv->raiz, valor);
    }
}
void imprimir(No *no){
    if (no != NULL){
        imprimir(no->esquerda);
        printf("%d ", no->conteudo);
        imprimir(no->direita);
    }
}

int tamanho(No *no){
    if (no == NULL)
        return 0;
    else
        return 1 + tamanho(no->esquerda) + tamanho(no->direita);
}

int buscar(No *no, int valor){
    if (no == NULL)
        return -1;
    else
        if (no->conteudo == valor)
            return 1;
        else
            if (valor < no->conteudo)
                return buscar(no->esquerda, valor);
            else
                return buscar(no->direita, valor);
}

int main(){
    int op, valor;
    ArvB arv;
    arv.raiz = NULL;
    do{
        printf("\n1 - Inserir\n2 - Imprimir\n3 - Buscar\n0 - Sair\n");
        scanf("%d", &op);
        switch(op){
            case 1:
                printf("Valor: ");
                scanf("%d", &valor);
                inserir(&arv, valor);
                break;
            case 2:
                imprimir(arv.raiz);
                printf("\nTamanho: %d\n", tamanho(arv.raiz));
                break;
            case 3:
                printf("Valor: ");
                scanf("%d", &valor);
                if (buscar(arv.raiz, valor) == -1)
                    printf("Valor não encontrado!\n");
                else
                    printf("Valor encontrado!\n");
                break;
            case 0:
                printf("Finalizando programa...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while(op != 0);
    return 0;
}