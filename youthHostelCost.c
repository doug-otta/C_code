#include <stdio.h>

int main(void){
    int numberHours;
    int basePrice = 10;
    int maxPayment = 53;
    int multiplier = 5;

    printf("Input the number of hours past noon of your arrival: ");
    scanf("%d", &numberHours);

    if(numberHours < 10){
        int result;
        result = numberHours * multiplier + basePrice;
        printf("The cost is: U$%d.00 ", result);
    } else{
        printf("The cost is: U$%d.00", maxPayment);
    }

    return 0;
}