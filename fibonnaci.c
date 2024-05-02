#include <stdio.h>
int Fibonnaci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    if (n > 1)
    {
        return Fibonnaci(n - 1) + Fibonnaci(n - 2);
    }
}

int main()
{
    int n, fib;
    printf("Digite o numero fibonnaci: ");
    scanf("%d", &n);
    fib = Fibonnaci(n);
    printf("%d\n", fib);
    return 0;
}
