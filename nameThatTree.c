#include <stdio.h>

int main(void){
    int height;
    int leaflets;

    printf("What's the height of the tree: ");
    scanf("%d", &height);

    printf("How many leaflets the tree has: ");
    scanf("%d", &leaflets);

    if(height <= 5 && leaflets >= 8){
        printf("Tinuviel");
    } else if(height >= 10 && leaflets >= 10){
        printf("Calaelen");
    } else if(height <= 8 && leaflets <= 5){
        printf("Falarion");
    } else if(height >= 12 && leaflets <= 7){
        printf("Dorthonion");
    } else{
        printf("Uncertain");
    }

    return 0;
}



/*
There are 4 types of trees:

the "Tinuviel" is 5 meters high or less and its leaves are composed of 8 or more leaflets

the "Calaelen" is 10 meters high or more and its leaves are composed of 10 or more leaflets

the "Falarion" is 8 meters high or less and its leaves are composed of 5 or fewer leaflets

the "Dorthonion" is 12 meters tall or more and its leaves are composed of 7 or fewer leaflets
*/