#include <stdio.h>

int main(void){
    char letter;
    printf("Input a anything: \n");
    scanf("%c", &letter);

    printf("++++%c++++\n",letter);
    printf("+++%c%c%c+++\n", letter, letter, letter);
    printf("++%c%c%c%c%c++\n", letter, letter, letter, letter, letter);
    printf("+%c%c%c%c%c%c%c+\n", letter, letter, letter, letter, letter, letter, letter );
    printf("%c%c%c%c%c%c%c%c%c\n", letter, letter, letter, letter, letter, letter, letter, letter, letter);

    return 0;
}