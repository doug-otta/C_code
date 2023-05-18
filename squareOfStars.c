#include <stdio.h>

int main(void){
    int starsNumber;

    //iterative number
    int i, j;

    printf("Will be print a square stars N x N");
    printf("\n");
    printf("Set the number N: ");
    scanf("%d", &starsNumber);

    for(i = 0; i < starsNumber; i++){
        for(j = 0; j < starsNumber; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;

}