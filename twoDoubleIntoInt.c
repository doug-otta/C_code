#include <stdio.h>

int main(void){
    int currentPopulation;
    double projectPopulation;
    double expectedPopulation;
    double percentageProjectPopulation;

    printf("Input the number current population: ");
    scanf("%d", &currentPopulation);
    printf("Input de projected population in decimal: ");
    scanf("%lf", &projectPopulation);

    percentageProjectPopulation = projectPopulation / 100;

    expectedPopulation = percentageProjectPopulation * currentPopulation + currentPopulation;

    printf("The expected population is %d", (int) expectedPopulation);

    return 0; 
}
