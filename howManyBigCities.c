#include <stdio.h>

int main(void){
    int citiesQtd, i;
    int citiesNumber = 0;
    int bigCity = 10000;

    printf("Input the number of cities of the region: ");
    scanf("%d", &citiesQtd);

    int population[citiesQtd];

    for(i = 0; i < citiesQtd; i++){
    printf("Input the population of the [%d] city: ", i + 1);
    scanf("%d", &population[i]);
        if(population[i] > bigCity){
            citiesNumber++;
        }
    }

    printf("the number of cities that have a population above 10.000 is: %d", citiesNumber);

    return 0;
}