#include <stdio.h>

int main(void){
    int firstDice, secondDice;
    int twiceCost = 2;
    int specialFee = 36;

    printf("Value first dice: ");
    scanf("%d", &firstDice);
    printf("Value second dice: ");
    scanf("%d", &secondDice);

    if(firstDice + secondDice >= 10){
        printf("Special tax\n");
        printf("The tax value is U$%d.00", specialFee);
    } else {
        int newCost;

        newCost = twiceCost * (firstDice + secondDice);

        printf("Regular tax\n");
        printf("The tax value is U$%d.00", newCost);
    }

    return 0;
}