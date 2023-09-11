#include <stdio.h>
#include <stdlib.h>

void storeArray(int *, int);
void printArray(int *, int);
void findTheGreater(int *, int);

int main(void){
    int array[] = {};
    int size;

    printf("What's the size of the array: ");
    scanf("%d", &size);

    printf("Input the score values: ");
    storeArray(array, size);
    findTheGreater(array, size);
    printArray(array, size);

    return 0;
}

void storeArray(int * pointer, int elements){
    int i;
    for(i = 0; i < elements; i++){
        scanf("%d", (pointer + i));
    }
}

void printArray(int * pointer, int elements){
    int i;
    for(i = 0; i < elements; i++){
        printf("array[%d] = %d \n", i, *(pointer + i));
    } 
}

void findTheGreater(int * pointer, int elements){
    int i;
    int bigger = pointer[0];
    for(i = 0; i < elements; i++){
        if(pointer[i] > bigger){
            bigger = pointer[i];
        }
    }

    for(i = 0; i < elements; i++){
    pointer[i] = bigger - pointer[i]; 
    }
}


/*
INPUT
5
8 12 7 15 11 
*/


/*
OUTPUT
7 3 8 0 4
*/