#include <stdio.h>

int main(void){
    char word[50];
    char swap;

    int i, j;
    int length = 0;
    int asciiNumbers[20];
    int count = 0;
    char separateWord[length];

    printf("Input the word: ");
    scanf("%s", word);

/* Passo 1 - QUANTIDADE DE CARACTERES E ARMAZENADO A PALAVRA EM UM VETOR */
    while(word[length] != '\0'){
        separateWord[length] = word[length];
        printf("%c ", separateWord[length]);
        length++;
    }

/* Passo 2 - CONVERTER LETRAS EM ASCII CODE */
    for(i = 0; i < length; i++){
        asciiNumbers[i] = separateWord[i];
        //printf("%d ", asciiNumbers[i]);
    }

/* Passo 3 - ORDENAR O VETOR (asciiNumbers) - BUBBLESORT */
    for(j = 0; j < length - 1; j++){
        for(i = 0; i < length - 1; i++){
            if(asciiNumbers[i] > asciiNumbers[i + 1]){
                swap = asciiNumbers[i];
                asciiNumbers[i] = asciiNumbers[i + 1];
                asciiNumbers[i + 1] = swap;
            }
        }
    }

    for(i = 0; i < length; i++){
        printf("%d ",asciiNumbers[i]);
    }

/* Passo 4 - COMPARAR CADA POSIÇÃO DO VETOR */
    // [d o u g l a s]
    // [100 111 117 103 108 97 115]
    // [97 100 103 108 111 115 117]

        for(i = 0; i < length; i++){
            if(asciiNumbers[i] == asciiNumbers[i + 1] && asciiNumbers[i + 1] != asciiNumbers[i + 2] ){
                count++;
            }
        }


    printf("%d", count);

    return 0;
}

/*

apple
1
 
keeper
1

erroneousnesses
5
 
taylor
0

*/