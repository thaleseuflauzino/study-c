#include <stdio.h>
#include <stdlib.h>
long Q5(char *NC, int R){
    long r;
    FILE *A = fopen("Saida.txt", "w");
    for (int i = 0; i < R; i++) fprintf(A, "%s", NC); fclose(A);

    A = fopen("Saida.txt", "r");
    fseek(A, 0, SEEK_END);
    r = ftell(A); fclose(A); //remove("Saida.txt");
    return r;
}

int main(){
    char nc[] = "thales henrique euflauzino dos santos";
    int R = 11;
    long r = Q5(nc, R);
    printf("resultado: %ld \n", r);
}