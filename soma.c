#include <stdio.h>

int somaDigitos(int n)
{
    int soma = 0;
    while (n > 0)
    {
        soma += n % 10; 
        n = n / 10;     
    }
    return soma;
}

int main()
{
    int numero;
    printf("Digite o numero: ");
    scanf("%d", &numero);
    int resultado = somaDigitos(numero);
    printf("A soma dos digitos de %d e %d\n", numero, resultado);
    return 0;
}
