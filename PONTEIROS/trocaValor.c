#include <stdio.h>

void trocarValores(float *ptr1, float *ptr2)
{
    float temp = *ptr1; // armazena o valor de ptr1 em uma variavel temporaria
    *ptr1 = *ptr2;      // atribui o valor de ptr2 a ptr1
    *ptr2 = temp;       // atribui o valor temporario a ptr2
}

int main()
{
    float a = 3.14;
    float b = 2.71;
    printf("Valores originais\na: %.2f, b: %.2f\n\n", a, b);
    trocarValores(&a, &b);
    printf("Valores trocados\na: %.2f, b: %.2f\n", a, b);
}
