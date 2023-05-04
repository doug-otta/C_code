#include <stdio.h>

int main(void){
    int passenger = 0;
    int driver = 1;
    int fee = 1;
    double totalGasCost = 0;
    double result = 0;

    printf("How many passenger will go on the trip: ");
    scanf("%d", &passenger);
    printf("Input the total price of the trip: ");
    scanf("%lf", &totalGasCost);

    if(passenger > 0){
        result = (totalGasCost + fee)/(driver + passenger);
        printf("The final cost is: %.2lf", result);
    } else{
        printf("The final cost is: %.2lf", totalGasCost);
    }

    return 0;
}