#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isStopWord(char *word) {
    char *stopWords[] = {"a", "o", "e", "de", "da", "do", "em", "um", "uma"};
    int numStopWords = sizeof(stopWords) / sizeof(stopWords[0]);
    for (int i = 0; i < numStopWords; ++i) {
        if (strcmp(word, stopWords[i]) == 0) {
            return 1; 
        }
    }
    return 0;
}

int word2vec(char *entradaTxt) {
    FILE *entrada, *entradacopia;
    char palavra[100];
    int i = 0;

    entrada = fopen(entradaTxt, "r");
    if (entrada == NULL) {
        return 0;
    }

    entradacopia = fopen("lab1_Vocaculo.txt", "w");
    if (entradacopia == NULL) {
        fclose(entrada);
        return 0;
    }

    char palavraFormatada[100]; // Para armazenar a palavra formatada (sem pontuações e em minúsculas)
    while (fscanf(entrada, "%99s", palavra) == 1) {
        // Remover pontuações
        int j = 0;
        for (int i = 0; palavra[i]; i++) {
            if (isalpha(palavra[i])) {
                palavraFormatada[j++] = tolower(palavra[i]);
            }
        }
        palavraFormatada[j] = '\0'; // Adicionar terminador de string

        // Ignorar palavras com menos de 4 caracteres e stop words
        if (strlen(palavraFormatada) >= 4 && !isStopWord(palavraFormatada)) {
            fprintf(entradacopia, "%s\n", palavraFormatada);
            i++;
        }
    }

    fclose(entrada);
    fclose(entradacopia);
    return 1;
}

main() {
    char *entradaTxt = "lab1.txt";
    if (!word2vec(entradaTxt)) {
        printf("Erro na geracao do vocabulo\n");
    } else {
        printf("Vocabulo gerado com sucesso!\n");
    }
    return 0;
}
