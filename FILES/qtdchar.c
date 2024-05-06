#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int qtd = 0, qtdspaces = 0, qtdtab = 0, qtdlines = 0;
    fp = fopen("helloworld.c", "r");
    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
            break;
        if (ch == ' ')
        {
            qtdspaces++;
        }
        if (ch == '\n')
        {
            qtdlines++;
        }
        if (ch == '\t')
        {
            qtdtab++;
        }

        qtd++;
    }
    printf("A quantidade de caracteres no arquivo e: %d\n", qtd);
    printf("A quantidade de espacos no arquivo e: %d\n", qtdspaces);
    printf("A quantidade de tabs no arquivo e: %d\n", qtdtab);
    printf("A quantidade de linhas no arquivo e: %d\n", qtdlines);
    fclose(fp);
    
    return 0;

}
