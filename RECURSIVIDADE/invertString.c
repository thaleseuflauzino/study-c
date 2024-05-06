#include <stdio.h>
#include <conio.h>

void contrario(char s[])
{
    if (s[0] != '\0')
    {
        contrario(&s[1]);
        printf("%c", s[0]);
    }
}

int main(void)
{
    char s[30];
    printf("Imprime reverso\n\n");
    printf("\nDigite a string: ");
    gets(s);
    contrario(s);
    getch();// espera alguma tecla ser apertada para finalizar o programa
}