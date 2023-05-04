#include <stdio.h>

int main(void){
    int age;
    int weightLuggage;
    int weightLuggageLimit = 20; //weight
    int elderly60 = 60;     //age
    int childLess10 = 10;   //age
    int costChildLess10 = 5;//money
    int standartCost = 30;  //money
    int addCostLuggage = 10;//money

    printf("What's your age: ");
    scanf("%d", &age);
    printf("What's your luggage weight: ");
    scanf("%d", &weightLuggage);

    if(elderly60 == age){
        printf("The room will cost: FREE!");
    } else if (age < childLess10){
        printf("The room will cost: US$%d.00",costChildLess10);
    } else if ((age < elderly60 || age > childLess10 || age > elderly60) && weightLuggage > weightLuggageLimit)
    {
        int finalCost;
        finalCost = addCostLuggage + standartCost;
        printf("The room will cost: U$%d.00", finalCost);
    } else{
        printf("The room will cost: U$30.00");
    }   
    
    return 0;

}