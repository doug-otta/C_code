#include <stdio.h>

int main(void){
    double mile;
    double km;
    printf("Input the distance in KM: ");
    scanf("%lf", &km);

    mile = km * 0.621371;

    printf("The distance in MILES is %lf", mile);
    
    return 0;
}