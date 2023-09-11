#include <stdio.h>

void invertNumbers(int []);

int main(void){
    int num[6];

    printf("Input 6 integers: ");

    invertNumbers(num);

    return 0;

}

void invertNumbers(int num[]){
    int i;

    for(i = 0; i < 6; i++){
        scanf("%d", &num[i]);
    }

    for(i = 5; i >= 0; i--){
        printf("%d ", num[i]);
    }
}