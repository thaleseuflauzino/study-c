#include <stdio.h>
#include <stdlib.h> // Para usar malloc
#include <locale.h>

char *Q3(int *M, char *NC) {
    char *code = (char*) malloc(9 * sizeof(char));
    for (int i = 0; i < 9; i++) {
        code[i] = NC[M[i]];
        if (code[i] == ' ') {
            code[i] = '-'; 
        }
    }
    return code;
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    int m[] = {2,2,2,0,0,6,1,7,8};
    char nc[] = "thales henrique euflauzino dos santos";
    char *result = Q3(m, nc);
    printf("Resultado: %s\n", result);
    free(result); 
    return 0;
}
