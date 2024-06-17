#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dia, mes, ano;
}Data;

typedef struct{
    char nome[50];
    Data data;
}Pessoa;

typedef struct no{
    Pessoa p;
    struct no *proximo;
}No;

Pessoa ler_pessoa(){
    Pessoa p;

    printf("\nDigite nome e data de nascimento dd mm aaaa:\n");
    scanf("%49[^\n]%d%d%d", p.nome, &p.data.dia, &p.data.mes, &p.data.ano);
    return p;
}

void imprimir_pessoa(Pessoa p){
    printf("\nNome: %s\nData: %2d/%2d/%4d\n", p.nome, p.data.dia, p.data.mes, p.data.ano);
}

// função para a operação push (empilhar)
No* empilhar(No *topo){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->p = ler_pessoa();
        novo->proximo = topo;
        return novo;
    }
    else
        printf("\nErro ao alocar memoria...\n");
    return NULL;
}

// função para a operação pop (desempilhar)
No* desempilhar(No **topo){
    if(*topo != NULL){
        No *remover = *topo;
        *topo = remover->proximo;
        return remover;
    }
    else
        printf("\nPilha vazia!\n");
    return NULL;
}

void imprimir_pilha(No *topo){
    printf("\n----------- PILHA --------------\n");
    while(topo){
        imprimir_pessoa(topo->p);
        topo = topo->proximo;
    }
    printf("\n--------- FIM PILHA ------------\n");
}

int main(){

    No *remover, *topo = NULL;
    int opcao;

    do{
        printf("\n0 - Sair\n1 - Empilar\n2 - Desempilhar\n3 - Imprimir\n");
        scanf("%d", &opcao);
        getchar();

        switch(opcao){
        case 1:
            topo = empilhar(topo);
            break;
        case 2:
            remover = desempilhar(&topo);
            if(remover){
                printf("\nElemento removido com sucesso!\n");
                imprimir_pessoa(remover->p);

                free(remover);
            }
            else
                printf("\nSem no a remover.\n");
            break;
        case 3:
            imprimir_pilha(topo);
            break;
        default:
            if(opcao != 0)
                printf("\nOpcao invalida!!!\n");
        }
    }while(opcao != 0);

    return 0;
}