#include <stdio.h>

int main(void){
    int treeHeight;
    int treeLeaflets;

    printf("What is the height of the tree: ");
    scanf("%d", &treeHeight);
    printf("How many leaflets the tree has: ");
    scanf("%d", &treeLeaflets);

    if(treeHeight <= 5 && treeLeaflets >= 8){
        printf("Tinuviel");
    } else if (treeHeight <= 8 && treeLeaflets <= 5) {
        printf("Falrion");
    } else if (treeHeight >= 10 && treeLeaflets >= 10){
        printf("Calaelen");
    } else if (treeHeight >= 12 && treeLeaflets <= 7){
        printf("Dorthonios");
    } else {
        printf("Uncertain");
    }

    return 0;

}

/*
the "Tinuviel" is 5 meters high or less and its leaves are composed of 8 or more leaflets
the "Falarion" is 8 meters high or less and its leaves are composed of 5 or fewer leaflets
the "Calaelen" is 10 meters high or more and its leaves are composed of 10 or more leaflets
the "Dorthonion" is 12 meters tall or more and its leaves are composed of 7 or fewer leaflets
Your program should read the height and the number of leaflets of a given tree

o "Tinuviel" tem 5 metros de altura ou menos e suas folhas são compostas por 8 ou mais folíolos
o "Falarion" tem 8 metros de altura ou menos e suas folhas são compostas por 5 ou menos folíolos
o "Calaelen" tem 10 metros ou mais de altura e suas folhas são compostas por 10 ou mais folíolos
o "Dorthonion" tem 12 metros de altura ou mais e suas folhas são compostas por 7 ou menos folíolos*/