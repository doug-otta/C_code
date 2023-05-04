#include<stdio.h>

int main(void){
    int robotsNumber, i;
    int total = 0;
    int estadoAnterior = 0;

    printf("Enter the number of the robots: ");
    scanf("%d",&robotsNumber);

    for(i = 0; i < robotsNumber; i++){
    int enginePower, resistance, weight, height;
        printf("Enter the robot[%d] resistance: ", i + 1);
        scanf("%d",&resistance);
        printf("Enter the robot[%d] engine power: ", i + 1);
        scanf("%d",&enginePower);
        printf("Enter the robot[%d] weight: ", i + 1);
        scanf("%d",&weight);
        printf("Enter the robot[%d] height: ", i + 1);
        scanf("%d",&height);
    
    estadoAnterior = (enginePower - resistance) * (weight + height);

    total = total + estadoAnterior;

    //Power calc
    //(enginePower + resistance) * (weight - height)
    }

    printf("The total power is: %d", total);

    return 0;
}