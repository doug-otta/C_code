#include <stdio.h>

int main(void){
    //age
    int age;
    int oldMan60 = 60; 
    int childAgeLessThan10 = 10; 

    //cost
    int luggage;
    int standart = 30;
    int ageLessThan10 = 5;
    int add = 10; // aditional cost if you bring more than 20 pounds
    
    //weight
    int luggageMoreThan20 = 20;

    printf("What's your age: ");
    scanf("%d", &age);

    printf("What's your luggage weight: ");
    scanf("%d", &luggage);

    if(age == oldMan60){
        printf("Cost of room is: FREE! ");
    } else if(age < childAgeLessThan10){
        printf("Cost of room is: US$%d.00", ageLessThan10);
    } else if ((age > childAgeLessThan10 || age > oldMan60) && luggage > luggageMoreThan20) {
        int finalCost;
        finalCost = standart + add;
        printf("Cost of room is: US$%d.00", finalCost);
    } else if((age > childAgeLessThan10 || age > oldMan60) && luggage < luggageMoreThan20) {
        printf("Cost of room is: US$%d.00", standart);
    }

    return 0;
    
}