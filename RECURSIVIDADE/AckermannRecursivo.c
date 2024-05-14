// exercicio do laboratorio de recursividade.
#include <stdio.h>

int AckermannRecursivo(int x, int y){
    if(x == 0) {return y+1;}
    else if(y == 0) {return AckermannRecursivo(x-1, 1);}
    else {return AckermannRecursivo(x-1, AckermannRecursivo(x,y-1));}
}
int main(){
    float x, y;
    int op;
    do{
        printf("\n\t1 - Fazer uma operacao\n\t0 - Encerrar Programa\n");
        scanf("%d", &op);
        switch(op){
        case 1:
            printf("Digite dois inteiros positivos: ");
            scanf("%f %f", &x, &y);
            scanf("%*c");
            int m = (int) x;
            int n = (int) y;
            if(x < 0 || y < 0) {printf("ERRO: numero invalido\n");}
            else {int result; result = AckermannRecursivo(x,y); printf("\nO valor da funcao de Ackermann para m = %d e n = %d e %d\n\n", m, n, result);}
            break;
        case 0:
            printf("\n\tPrograma encerrado!! \n");
            break;
        default:
            printf("Digite uma opcao valida!\n");
        }

    } while(op != 0);
}