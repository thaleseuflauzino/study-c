char letra(int P)
{
    P = P % 26; // 78/26, 26+26 = 52 + 26 = 78
    return 'a' + P; // 'a' + 0 = a;
}
int Q2(char *nc, int matricula)
{
    int p = 0, posic = -1;
    char chave = letra(matricula%100); 
    printf("%d\n", matricula%100);
    while(nc[p] != '\0'){
        if(chave == nc[p])
            posic = p;
        p++;
    }
    return posic;
}
// RESUMO
// RETORNA A POSICAO DO CARACTERE QUE RETORNA APOS A EXECUCAO DO PROCEDIMENTO 'LETRA';

int main(){
    int res = Q2("thales henrique euflauzino dos santos", 222006178);
    printf("resposta = %d\n\n", res); 
}