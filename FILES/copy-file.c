/* Creating a file copy */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fOriginal, *fCopia;
    char ch;
    fOriginal = fopen("Arquivo1.txt", "r");
    if (fOriginal == NULL)
    {
        puts("Nao foi possivel abrir o arquivo!!!");
        exit(0);
    }
    fCopia = fopen("Copia_Arquivo1.txt", "w");
    if (fCopia == NULL)
    {
        puts("Nao foi possivel gravar o arquivo!!!");
        exit(0);
    }
    else
    {
        puts("Arquivo copiado com sucesso!!!");
    }

    while (1)
    {
        ch = fgetc(fOriginal);
        if (ch == EOF)
            break;
        fputc(ch, fCopia);
    }
    fclose(fOriginal);
    fclose(fCopia);
    return 0;
}