#include <stdio.h>

int main(void){
    char firstName[10];
    char lastName[10];
    int qtdNames, i;

    printf("How many name would like swap: ");
    scanf("%d", &qtdNames);

    for(i = 0; i < qtdNames; i++){
        printf("Input the first name and the lastName: ");
        scanf("%s %s", firstName, lastName);

        printf("%s %s\n", lastName, firstName);
    }

    return 0;
}