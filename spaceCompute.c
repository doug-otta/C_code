#include <stdio.h>
#include <string.h>

int main(void){
    char typeOfArg[30][20];
    int qtd, count, qtdRead[20], result;
    int totalBytes = 0;
    int message = 0;

    printf("How many arguments will be read: ");
    scanf("%d", &qtd);

    printf("Input the quantity and the type of argument: ");
    for(count = 0; count < qtd; count++){
        scanf("%d %s", &qtdRead[count], typeOfArg[count]);
    }

    for(count = 0; count < qtd; count++){
        if(strcmp(typeOfArg[count], "c") == 0){
            result = sizeof(char) * qtdRead[count];
        } else if (strcmp(typeOfArg[count], "i") == 0){
            result = sizeof(int) * qtdRead[count];
        } else if (strcmp(typeOfArg[count], "d") == 0){
            result = sizeof(double) * qtdRead[count];
        } else{
            message = 1;
        } 
        totalBytes = totalBytes + result;    
    }

    if(message){
        printf("Invalid tracking code type");
    } else{
        printf("The compute space is: %d bytes", totalBytes);
    }
    
    return 0;
    
}