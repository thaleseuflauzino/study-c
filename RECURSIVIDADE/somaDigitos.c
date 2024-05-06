#include <stdio.h>

int somaDigitos(int n)
{
    if (n < 10)
        return n;
    return n%10 + somaDigitos(n/10);
}

int main()
{
    int numero;
    printf("Digite o numero: ");
    scanf("%d", &numero);
    printf("A soma dos digitos de %d e %d\n", numero, somaDigitos(numero));
    return 0;
}
