#include <stdio.h>

int main(void){
    int array[8] = {0, 1, 2, 3, 4, 5, 6, 7};
    int i;

    printf("The value stored at the array is: %d, %d ... %d \n", array[0], array[1], array[7]);
    printf("The value of array is: %p \n", array);

    //array = &array[0];
    int *ptr = array;
    printf("The position of first element is: %p \n And the first adress is: %p", &array[0], array);

    *array = 8;
    *(array + 5) = 13;

    for(i = 0; i < 8; i++){
        printf("The array[%d] = %d \n", i, array[i]);
    }

    printf("The value of array before the the changing position is: %p \n", ptr);
    ptr++;
    printf("The value of array after the the changing position is: %p \n", ptr);

    return 0;
}