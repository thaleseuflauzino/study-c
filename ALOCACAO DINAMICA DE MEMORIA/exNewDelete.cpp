#include <iostream>

int main() {
    int pind, ptam;
    float *pVetor; // Declaração dos ponteiros
    std::cout << "Digite a qtde de elementos: ";
    std::cin >> ptam;
    pVetor = new float[ptam]; // Alocação de memória
    for(pind = 0; pind < ptam; pind++)
        pVetor[pind] = static_cast<float>(pind) / ptam;
    for(pind = 0; pind < ptam; pind++)
        std::cout << pVetor[pind] << " ";
    delete[] pVetor; // Desalocação de memória
    return 0;
}
