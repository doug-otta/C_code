#include <stdio.h>

int main(void){
    int initBox, initMatches, endBox, endMatches;

    printf("Input the number o matches: ");
    scanf("%d", &initMatches);

    printf("Input the number of boxes with you have: ");
    scanf("%d", &initBox);

    endBox = initMatches / initBox;
    endMatches = initMatches % initBox;

    printf("You have %d full boxes, the remaining matches is %d", endBox, endMatches);
}