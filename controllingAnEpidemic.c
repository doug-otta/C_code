#include <stdio.h>

int main(void){
    int numberPopulation;
    int day = 1;
    
    printf("Enter the number of population: ");
    scanf("%d", &numberPopulation);

    int infectedPeople = 0;
    int total = 1;

    while(numberPopulation > total){
        day++;
        infectedPeople = 2 * total;
        total = total + infectedPeople;
    }

        printf("%d", day);

    return 0;

}

//POPULATION = 100

/*
day 1 : 1 infected person   -> total: 1
day 2 : 2 infected people   -> total: 3
day 3 : 6 infected people   -> total: 9
day 4 : 18 infected people  -> total: 27
day 5 : 54 infected people  -> total: 81
day 6 : 162 infected people -> total: 162
*/