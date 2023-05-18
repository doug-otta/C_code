#include <stdio.h>

int main(void){
    int redDice, yellowDice, greenDice, numeberRounds, i;
    double currentAvarage, sumOfDiceNumbers;

    printf("How many rounds the match has: ");
    scanf("%d", &numeberRounds);

    int storedNumbers[numeberRounds];

    for(i = 0; i < numeberRounds; i++){
        printf("What's the number of the red dice[%d]: ", i + 1);
        scanf("%d", &redDice);
        printf("What's the number of the yellow dice[%d]: ", i + 1);
        scanf("%d", &yellowDice);
        printf("What's the number of the green dice[%d]: ", i + 1);
        scanf("%d", &greenDice);

        storedNumbers[i] = greenDice*100 + yellowDice*10 + redDice;
    }

    for(i = 0; i < numeberRounds; i++){
        //sum of dices
        sumOfDiceNumbers = sumOfDiceNumbers + storedNumbers[i];

        //average of dice
        currentAvarage = sumOfDiceNumbers / (i + 1);

        printf("[%d]. you rolled: %d, current average: %.1lf\n", i + 1, storedNumbers[i], currentAvarage);
    }

    return 0;

}