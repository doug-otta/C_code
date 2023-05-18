#include <stdio.h>

int main(void){
    int ingridients[10];
    int i;
    int readValue = 0;
    int correspQtd;

    for(i = 0; i < 10; i++){
        printf("Input the ingridients quantity: ");
        scanf("%d", &readValue);
        ingridients[i] = readValue;
    }

    printf("\n");

    printf("Input the ingrients's ID stored at the array: ");
    scanf("%d", &correspQtd);

    printf("\n");

    printf("The ingridient quantity id %d", ingridients[correspQtd]);

    return 0;
}