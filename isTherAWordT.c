#include <stdio.h>

int main(void){
    char letterToFind1 = 't';
    char letterToFind2 = 'T';
    char wordToCompare[51];

    int tLowerPosition = 0;
    int tLowerLength = 0;
    // int i = 0;

    printf("Input the word to find the letter 't': ");
    scanf("%s", wordToCompare);

    //Identify how many characters
    // O vetor irá iterar sobre a quantidade de letras armazenadas pelo usuário, enquanto não aparecer '\0' o loop adicionará 1 para descobrir a quantidade de letras.

    if(wordToCompare[tLowerPosition] == letterToFind2){
        printf("1");
    } else {
            while(wordToCompare[tLowerPosition] != letterToFind1){
            tLowerPosition++;
        }

        //Length of the string array;
        while(wordToCompare[tLowerLength] != '\0'){
            tLowerLength++;
        }

        if(tLowerPosition == 52){
            printf("-1");
        } else if(tLowerPosition > (tLowerLength / 2)){
            printf("2");
        } else if (tLowerPosition < (tLowerLength / 2) || tLowerPosition == (tLowerLength / 2)){
            printf("1");
        }
    }
    
    return 0;
}

//CHATGPT ANSWER
/*
#include <stdio.h>

int main() {
    char word[51];
    int length = 0;
    int half = 0;
    int i;
    int foundT = 0;
    int foundTInFirstHalf = 0;

    printf("Enter a word: ");
    scanf("%s", word);

    // Calculate the length of the word
    while (word[length] != '\0') {
        length++;
    }

    half = length / 2;

    for (i = 0; i < length; i++) {
        if (word[i] == 't' || word[i] == 'T') {
            foundT = 1;
            if (i <= half) {
                foundTInFirstHalf = 1;
                break;
            }
        }
    }

    if (foundTInFirstHalf) {
        printf("1\n");
    } else if (foundT) {
        printf("2\n");
    } else {
        printf("-1\n");
    }

    return 0;
}
*/