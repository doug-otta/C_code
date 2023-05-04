#include <stdio.h>

int main(void){
    double celsius;
    double fahrenheit;

    printf("Input the temperature in Celsius: ");
    scanf("%lf",&celsius);

    fahrenheit = celsius * 9 / 5 + 32;

    printf("The temperatutre in Farenheit: %.1lf", fahrenheit);
    
    return 0;
}