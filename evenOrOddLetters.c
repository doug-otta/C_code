#include <stdio.h>

int main(void){
    char name[50];
    int i = 0;

    printf("What's your name: ");
    scanf("%s", name);


    //ENCONTRAR O TAMANHO DO VETOR
    while(name[i] != '\0'){
        i++;
    }
    
    if(i%2){
        printf("2");
    } else{
        printf("1");
    }

    return 0;
}