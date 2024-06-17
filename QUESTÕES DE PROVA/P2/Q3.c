#include <stdio.h>

int Q3(char *nome, int tamanho, int matricula){
    int inicio = 0, meio, fim = tamanho -1, pcont = 0;
    char chave = nome[matricula%10];
    while(inicio<=fim){
        pcont++;
        meio = (inicio+fim)/2;
        if(chave == nome[meio]) break;
        else if (chave < nome[meio]) fim = meio-1;
        else inicio = meio + 1;
    }
    return pcont;
}
int main(){
    int res = Q3("    aaadeeefhhiillnnnooqrsssstttuuuz", 37, 222006178); // letras do nome em ordem alfabetica com espacos no inicio, n de chars do nome, matricula;
    printf("\n\nresultado = %d\n\n", res);
    // "    aaadeeefhhiillnnnooqrsssstttuuuz"
}