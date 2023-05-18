#include <stdio.h>

int main(void){
    int qtdOfrepetition, i;
    char wordToRepeat[10];

    printf("How many repetions would you like: ");
    scanf("%d", &qtdOfrepetition);

    printf("What's the word to repeat: ");
    scanf("%s", wordToRepeat);

    for(i = 0; i < qtdOfrepetition; i++){
        printf("%s\n", wordToRepeat);
    }

    return 0;
}