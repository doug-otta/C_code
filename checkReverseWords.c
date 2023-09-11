#include <stdio.h>
#include <string.h>

int isReverse(const char* word1, const char* word2) {
    int length1 = strlen(word1);
    int length2 = strlen(word2);

    if (length1 != length2) {
        return 0; // Se os tamanhos das palavras forem diferentes, elas não podem ser reversas uma da outra
    }

    for (int i = 0; i < length1; i++) {
        if (word1[i] != word2[length1 - i - 1]) {
            return 0; // Se algum caractere não coincidir com seu correspondente reverso, as palavras não são reversas uma da outra
        }
    }

    return 1; // Se chegamos até aqui, as palavras são reversas uma da outra
}

int main() {
    char word1[100];
    char word2[100];

    printf("Digite a primeira palavra: ");
    scanf("%s", word1);

    printf("Digite a segunda palavra: ");
    scanf("%s", word2);

    if (isReverse(word1, word2)) {
        printf("%s é o reverso de %s\n", word1, word2);
    } else {
        printf("%s não é o reverso de %s\n", word1, word2);
    }

    return 0;
}