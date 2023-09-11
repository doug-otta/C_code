#include <stdio.h>

int main()
{
    /* INPUT:
    Science Computer on Papers Selected Knuth, Ervin Donald ― correct."
       OUTPUT:
    be correct." ― Donald Ervin Knuth, Selected Papers on Computer Science 
    */ 
    
    char word[68][40];
    int i = 0;
    
    for(i = 0; i < 68; i++){
        scanf("%s", word[i]);
    }
    
    for(i = 67; i >= 0; i--){
        printf("%s ", word[i]);
    }
    
    
    return 0;
}