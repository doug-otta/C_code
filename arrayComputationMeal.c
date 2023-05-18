#include <stdio.h>

int main(void){
    int ingridientsNumber, i;
    printf("Input the number of ingridients: ");
    scanf("%d", &ingridientsNumber);

    if(ingridientsNumber > 10){
        printf("Sorry, we only calculate the maximun cost of 10 ingridients :\)\ ");
    } else{
        double ingridients[ingridientsNumber], weightOfIngridient[ingridientsNumber];
        double totalCost = 0.0;

        for(i = 0; i < ingridientsNumber; i++){
            printf( "Input the value of [%d]: ", i + 1);
            scanf("%lf", &ingridients[i]);
            printf("Input the weight of [%d]: ", i + 1);
            scanf("%lf", &weightOfIngridient[i]);
            
            totalCost = ingridients[i] * weightOfIngridient[i] + totalCost;
        }

        printf("The total cost is: %.6lf", totalCost);
    }

    return 0;
}