#include <stdio.h>
#include <stdlib.h>

int Q1(int valor){
    int *ptr, *pnumeros, pn = valor%10, pp, psoma=0;
    if(pn<2) pn = 5 - pn;
    pnumeros = (int*)malloc(pn*sizeof(int));
    ptr = pnumeros;
    for(pp=0; pp < pn; pp++) {
        *ptr = valor%10;
        valor = valor/10;
        ptr++;
    }
    for(pp=0; pp<pn;pp++){
        if((pnumeros[pp]%2) == 1)
            psoma = psoma+pnumeros[pp];
    }
    return psoma;
}

int main(){
    int matricula = Q1(222006178);
    printf("resposta = %d\n", matricula); 
}