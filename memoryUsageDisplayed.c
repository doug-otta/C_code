#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int variableQtd, result, kbResult, mbResult, bResult;
    char variableType[2];

    printf("How much memory you need (e.g: i 10000): ");
    scanf("%c %d", variableType, &variableQtd);

    if(strcmp(variableType, "i") == 0){
        result = variableQtd * sizeof(int);
    } else if(strcmp(variableType, "s") == 0){
        result = variableQtd * sizeof(short);
    } else if(strcmp(variableType, "c") == 0){
        result = variableQtd * sizeof(char);        
    } else if(strcmp(variableType, "d") == 0){
        result = variableQtd * sizeof(double);
    }

    mbResult = result / (int) pow(10, 6);
    kbResult = (result % (int) pow(10, 6) / pow(10, 3)); 
    bResult = (result % (int) pow(10, 3)) % (int) pow(10, 3); 

    if(mbResult == 0 && kbResult == 0){
        printf("%d B", bResult);
    } else if(mbResult == 0){
        printf("%d KB and %d B", kbResult, bResult);
    } else{
        printf("%d MB and %d KB and %d B", mbResult, kbResult, bResult);
    }

    return 0;

}