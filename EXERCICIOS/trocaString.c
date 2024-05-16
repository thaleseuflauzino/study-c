#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void trocar(char v[]){
    int temp, tam = strlen(v), fim = strlen(v) - 1;
    for (int i = 0; i < tam/2; i++, fim--)
    {
        temp = v[i];
        v[i] = v[fim];
        v[fim] = temp;
    }
    
}
int main(){
    char v[] = {"Thales!"};
    trocar(v);
    printf("%s", v);
}