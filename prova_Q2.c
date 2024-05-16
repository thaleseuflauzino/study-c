#include <stdio.h>
char * acheSobrenome(char nome[]){
    char *pnome;
    int i = 0;
    while (nome[i] != ' ')
    {
        i++;
    }
    i++;
    pnome = &nome[i]; // complete o codigoo aqui para achar o sobrenome
    return pnome;
}
int main(void){
    char nomeCompleto[80];
    char *p;
    puts("Entre com seu nome e sobrenome");
    gets(nomeCompleto);
    p = acheSobrenome(nomeCompleto);
    puts(p);
    return 0;
}