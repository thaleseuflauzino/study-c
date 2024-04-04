#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Qual o valor do salario minimo? ");
    float sm = 0;
    scanf("%f", &sm);
    printf("Qual o valor do salario do funcionario? ");
    float sf = 0;
    scanf("%f", &sf);
    printf("O funcionario ganha %f salarios minimos.\n", sf/sm);
    return 0;
}
