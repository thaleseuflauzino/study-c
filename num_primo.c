#include <stdio.h>

int main() {
    int i, num, result = 0;
    printf("Digite um número: ");
    scanf("%d", &num);
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            result++;
            break;
        } 
    }
    
    if (result == 0) {
        printf("O número %d é primo\n", num);
    } else {
        printf("O número %d não é primo\n", num);
    }

    return 0;
}
