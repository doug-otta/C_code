#include <stdio.h>
#include <stdlib.h>

int main(void){
    int x = 0;
    float y = 1.2;
    char z = 'a';

    int *pointerX = &x;
    float *pointerY = &y;
    char *pointerZ = &z;

    printf("The value of x = %d and the address is %p \n", *pointerX, pointerX);
    printf("The value of y = %.1lf and the address is %p \n", *pointerY, pointerY);
    printf("The value of z = %c and the address is %p \n", *pointerZ,  pointerZ);

    printf("\n");

    float soma = *pointerX + *pointerY;
    printf("The sum is %lf", soma);
    printf("\n");   

    return 0;

}