#include <stdio.h>
typedef struct
{
    float Peso;
    int Idade;
    float Altura;
} Pessoa;
void ImprimePessoa(Pessoa P)
{
    printf("Idade: %d Peso: %f Altura: %f\n", P.Idade, P.Peso, P.Altura);
}
int main()
{
    Pessoa Joao, P2;
    Pessoa Povo[10];
    Joao.Idade = 15;
    Joao.Peso = 60.5;
    Joao.Altura = 1.75;
    Povo[4].Idade = 23;
    Povo[4].Peso = 75.3;
    Povo[4].Altura = 1.89;
    P2 = Povo[4];
    P2.Idade++;
    // chama a função que recebe a struct como parâmetro
    ImprimePessoa(Joao);
    ImprimePessoa(Povo[4]);
    ImprimePessoa(P2);
    return 0;
}