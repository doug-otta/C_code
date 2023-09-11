#include <stdio.h>

int min(int, int *);

int main(void){
    int qtdIntegers; 
    int i = 0;
    int numbers[50];
    int result;

    printf("How many numbers the array has: ");
    scanf("%d", &qtdIntegers);

    printf("Input the values: ");
    for(i = 0; i < qtdIntegers; i++){
        scanf("%d", &numbers[i]);
    }

    result = min(qtdIntegers, numbers);

    printf("%d", result);

    return 0;   
}

int min(int qtdIntegers, int *numbers){
    int i;
    int smallestNumber = 10000;
    for(i = 0; i < qtdIntegers; i++){
        if(numbers[i] < smallestNumber){
            smallestNumber = numbers[i];
        }
    }

    return smallestNumber;
}