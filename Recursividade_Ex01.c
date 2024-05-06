#include <stdio.h>
#include <conio.h>
int expo(int x, int y)
{
    if (y == 0)
        return 1;
    if (y == 1)
        return x;
    return x*expo(x,y-1);
}

int main(void) {
    int x, y, e;
    printf("Exponencial de x elevado a y\n\n");
    printf("\nDigite o numero inteiro x:");
    scanf("%d", &x);
    printf("\nDigite o numero inteiro y:");
    scanf("%d", &y);
    if (y < 0) {
        printf("y tem que ser maior ou igual a zero!!");
        getch(); }
    else{
        e=expo(x,y);
        printf("\n\nX elevado a y eh: %d", e);
        getch();} 
}