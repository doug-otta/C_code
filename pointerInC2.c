#include <stdio.h>
#include <stdlib.h>

void times2(int *);

int main(void){
    int n;
    printf("Input a number: ");
    scanf("%d", &n);
    printf("1 - The value of n is: %d \n", n);
    times2(&n);
    printf("4 - The value of n is: %d \n", n);

    return 0;
}

void times2(int * num){
    printf("2 - The value of n is: %d \n", * num);
    * num = * num * 2;
    printf("3 - The value of n is: %d \n", * num);
}