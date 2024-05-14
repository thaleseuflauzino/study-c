#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int idade;
    char sexo; 
} Pessoa;

int tam = 10;
Pessoa lista[10];
int quant = 0;

int cadastrarPessoa(){
    if (quant < tam)
    {
        Pessoa p;
        scanf("%*c"); // limpando buffer do teclado
        printf("Digite o nome da pessoa: ");
        fgets(p.nome, 50, stdin);
        printf("Digite a idade da pessoa: ");
        scanf("%d", &p.idade);
        scanf("%*c"); // limpando buffer
        printf("Digite o sexo da pessoa: ");
        scanf("%c", &p.sexo);
        lista[quant] = p;
        quant++;
        return 1;
    }
    else{printf("ERRO: Vetor de pessoas está cheio!"); return 0;}
}

void imprimir(){
    int i;
    for (i = 0; i < quant; i++)
    {
        printf("\n\nNome: %s", lista[i].nome);
        printf("Idade: %d",lista[i].idade);
        printf("\nSexo: %c", lista[i].sexo);
    }
}
void escreverArquivo(){
    FILE *file = fopen("pessoas.txt", "w");
    int i;
    if(file){
        fprintf(file, "%d\n", quant);
        for(i = 0; i < quant; i++){
            fprintf(file, "%s", lista[i].nome);
            fprintf(file, "%d\n", lista[i].idade);
            fprintf(file, "%c\n", lista[i].sexo);
        }
        fclose(file);
    } else {printf("ERRO: Falha ao abrir arquivo!");}
}

void lerArquivo(){
    FILE *file = fopen("pessoas.txt", "r");
    int i;
    if(file){
        fscanf(file, "%d\n", &quant);
        for(i = 0; i < quant; i++){
            Pessoa p;
            fgets(p.nome, 50, file);
            fscanf(file, "%d\n", &p.idade);
            fscanf(file, "%c\n", &p.sexo);
            lista[i] = p;
        }
        fclose(file);
    } else {printf("ERRO: Falha ao abrir arquivo!");}
}

int main() {
    int cond;
    do
    {
        printf("\nEscolha uma das opcoes: \n1 - Cadastrar Pessoa\n2 - Imprimir pessoas cadastradas\n3 - Escrever no Arquivo\n4 - Ler do Arquivo\n0 - Sair\n\n");
        scanf("%d", &cond); 
        switch (cond)
        {
        case 0:
            printf("Programa encerrado!\n");
            break;
        case 1:
            cadastrarPessoa();
            break;
        case 2:
            imprimir();
            break;
        case 3:
            escreverArquivo();
            break;
        case 4:
            lerArquivo();
            break;
        default:
            printf("Digite um numero valido!");
            break;
        }
    } while (cond != 0);
    
    return 0;
}