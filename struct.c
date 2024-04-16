#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int idade; char sexo; char nome[100];
}Pessoa;

int main()
{
    Pessoa p1;
    printf("Digite seu nome: ");
    fgets(p1.nome, 100, stdin);
    printf("Digite sua idade: ");
    scanf("%d", &p1.idade);
    scanf("%c");
    printf("Digite seu sexo:\n'F' para Feminino\n'M' para masculino:\n ");
    scanf("%c",&p1.sexo);
    printf("\nO nome da pessoa e: %sA idade dela e: %d\nSeu sexo e: %c", p1.nome,p1.idade,p1.sexo);
    return 0;
}
