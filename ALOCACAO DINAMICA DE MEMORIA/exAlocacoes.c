#include <stdlib.h>
int main()
// CALLOC SEMPRE INICIALIZA COM ZEROS!
{
    int *Vet1, *Vet2;                        // Declaração dos ponteiros
    int *Vet1_2, *Vet2_2;                    // Declaração dos ponteiros
    Vet1 = (int *)malloc(100 * sizeof(int)); // Alocação de memória
    Vet1_2 = malloc(100 * sizeof(int));      // Alocação de memória EQUIVALENTE, não é necessário o casting (int*)
    Vet2 = (int *)calloc(100, sizeof(int));  // Alocação de memória
    Vet2_2 = calloc(100, sizeof(int));       // Alocação de memória EQUIVALENTE, não é necessário o casting (int*)
    free(Vet1);                              // Desalocação de memória
    free(Vet2);                              // Desalocação de memória
    free(Vet1_2);                            // Desalocação de memória
    free(Vet2_2);                            // Desalocação de memória
    return 0;
}