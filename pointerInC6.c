#include <stdio.h>

int main(void){
    int nWet, nDry, i;
    double arrayWet[100] = {};
    double arrayDry[50] = {};
    double totalWet = 0;
    double totalDry = 0;

    printf("How many is the wet ingridients: ");
    scanf("%d", &nWet);
    printf("How many is the dry ingridients: ");
    scanf("%d", &nDry);

    printf("Input the quantity of wet ingridientes: ");
    for(i = 0; i < nWet; i++){
        scanf("%lf", &arrayWet[i]);
    }

    printf("Input the quantity of dry ingridientes: ");
    for(i = 0; i < nDry; i++){
        scanf("%lf", &arrayDry[i]);
    }

    for(i = 0; i < nWet; i++){
        totalWet = totalWet + *(arrayWet + i);
    }
    printf("Total amount of wet ingredients: %.2lf grams.", totalWet);

    printf("\n");

    for(i = 0; i < nDry; i++){
        totalDry = totalDry + *(arrayDry + i);
    }
    printf("Total amount of dry ingredients: %.2lf grams.", totalDry);

    printf("\n");

    printf("Ratio of wet to dry ingredientes: %.2lf ", totalDry / totalWet);

    printf("\n");

    printf("New water amount: %.2lf grams, new oil amount: %.2lf grams.", totalWet / 2, totalWet / 2);

    return 0;
   
}