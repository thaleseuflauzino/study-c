#include <stdio.h>
#include <stdlib.h>
// QUESTÃO 1
struct Pessoa
{
    char nome[50];
    int idade;
};

void gravar(FILE *arquivo, struct Pessoa *p)
{
    fprintf(arquivo, "%s_%d\n", p.nome, p.idade);    // letra A (precisa utilizar o ->)
    fprintf(arquivo, "%s_%d\n", p->nome, p->idade);  // letra B (correta)
    fprintf(*arquivo, "%s_%d\n", p->nome, p->idade); // letra C (não pode ser ponteiro o arquivo)
    printf(arquivo, "%s_%d\n", p->nome, p->idade);   // letra D (printf não grava)
}

// QUESTÃO 2
float *alocavet(int tamanho)
{
    float *vetor = (float)malloc(tamanho * sizeof(float));   // letra A (ponteiro criando um vetor)
    float vetor = (float *)malloc(tamanho * sizeof(float));  // letra B (vetor criando um ponteiro)
    float *vetor = (float *)malloc(sizeof(float));           // letra C (correto)
    float *vetor = (float *)calloc(tamanho * sizeof(float)); // letra D (calloc precisa de dois parametros, seria o correto (tamanho, sizeof(float)))

    if (vetor == NULL)
    {
        printf("Error");
        return NULL;
    }
    return vetor;
}
// QUESTÃO 3
int buscarCar(char *str, char c, int posicao_atual)
{
    if (*str == '\0')
    {
        return -1;
    }
    if (*str == c)
    {
        return posicao_atual;
        return buscarCar(*str + 1, c, posicao_atual + 1); // letra A
        return str + 1;                                   // letra B
        return buscarCar(str + 1, c, posicao_atual);      // letra C
        return buscarCar(str + 1, c, posicao_atual + 1);  // letra D
    }
}
// QUESTÃO 4
int epalindromo(char *palavra, int inicio, int fim)
{
    if (inicio = > fim)
    {
        return 1;
    }
    if (palavra[inicio] != palavra[fim])
    {
        return 0;
    }
    return epalindromo(palavra, inicio + 1, fim - 1); // letra A
    return epalindromo(palavra, inicio + 1, fim);     // letra B
    return epalindromo(palavra, inicio, fim - 1);     // letra C
    return epalindromo(palavra, inicio, fim);         // letra D
}