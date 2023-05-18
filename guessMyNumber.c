#include <stdio.h>

int main(void){
    int correctNumber;
    int guess = correctNumber + 1;
    int numberOfTry = 0;

    printf("Input the correct number: ");
    scanf("%d", &correctNumber);

    while(correctNumber != guess){
        printf("Your attempt: ");
        scanf("%d", &guess);
        if(guess > correctNumber){
            printf("it is less\n");
        } else if (guess < correctNumber){
            printf("it is more\n");
        }
        numberOfTry++;
    }

    printf("Number of tries needed:\n %d", numberOfTry);

    return 0;
    
}