#include <stdio.h>

int main(void){
    char word[68][41];
    int i;

    printf("Input the words of your sentence: "); 
    
    for(i = 0; i < 68; i++){
        scanf("%s", word[i]);
    }

    for(i = 68; i >= 0; i--){
        printf("%s ", word[i]);
    }
    return 0;

}