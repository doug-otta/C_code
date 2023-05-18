#include <stdio.h>

int main(void){
    int numberBoxCars, i;
    double totalWeight, average;

    printf("Input the number of boxcars: ");
    scanf("%d", &numberBoxCars);

    double boxCarsWeight[numberBoxCars], weight;

    for(i = 0; i < numberBoxCars; i++){
        printf("Input the weight of boxcar[%d]: ", i);
        scanf("%lf", &weight);
        boxCarsWeight[i] = weight;

        //Total Weight
        totalWeight = totalWeight + weight;
    }
    
    //Average Weight of boxCars
    average = totalWeight / numberBoxCars;

    for(i = 0; i < numberBoxCars; i++){
        printf("The boxcar[%d] need to have %.1lf\n", i, average - boxCarsWeight[i]);
    }

    return 0;
}