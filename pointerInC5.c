#include <stdio.h>

void printArray(int *, int);
void squareArray(int *, int);

int main(void){
    int array[] = {0, 1, 2, 3, 4, 5};
    int n = 6;
    printArray(array, n);
    squareArray(array, n);

    return 0;
}

void printArray(int * pointer, int size){
    int i = 0;
    for(i = 0; i < size; i++){
        printf("array[%d] = %d \n", i, *(pointer+i));
    }
}

void squareArray(int * pointer, int size){
    int i;
    for(i = 0; i < size; i++){
        printf("array[%d] = %d \n", i, *(pointer + i) * (*(pointer + i)));
    } 
}