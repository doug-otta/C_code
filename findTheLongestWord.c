#include <stdio.h>

int main(void) {

    int i, length;
    int max = 0;
    int num = 0;
    char word[101];

    scanf("%d", &num);

    for(i = 0 ; i < num ; i++){
        
        scanf("%s", word);
        length = 0;

        while(word[length] != '\0'){
            length++;
        }

        if (length > max)
        	max = length;
        }

    printf("%d\n", max);
    return 0;
}
/*
Input: 
14
This is a simple example text
we have to find the largest word length

Output:
7
*/