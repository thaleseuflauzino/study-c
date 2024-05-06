#include <stdio.h>


int soma(int n)
{
    if (n == 1)
        return (1);
    else
        return (n + soma(n - 1));
}

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d", soma(n));
}
// exemplo de execucao 
// entrada: 5
// execucao: 5+4+3+2+1 = 15
// saida: 15