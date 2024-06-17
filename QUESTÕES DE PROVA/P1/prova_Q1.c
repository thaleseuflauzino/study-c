#include <stdio.h>

int main(void){
    int vet[]= {10,20,30};
    int *p = vet;
    p++;
    printf("\n%d", *p);
    (*p)++;
    printf("\ - %d", *p);
    printf("\ - %d", (*p+1));
    return 0;
}