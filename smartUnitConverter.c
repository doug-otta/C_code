#include <stdio.h>
#include <string.h>

double meeterToFeet(double);
double gramToPound(double);
double celsiusToFahrenheit(double);

int main(void){
    int i, numberOfConv;
    double value[50];
    char unit[50][20];

    printf("How many convertions would like to do: ");
    scanf("%d", &numberOfConv);

    for(i = 0; i < numberOfConv; i++){
        printf("Input the value and the respect unit to convert: ");
        scanf("%lf %s", &value[i], unit[i]);
    }


    for(i = 0; i < numberOfConv; i++){
        if(strcmp(unit[i], "m") == 0){
            double result;
            result = meeterToFeet(value[i]);
            printf("%lf ft\n", result);
        } else if(strcmp(unit[i], "g") == 0){
            double result;
            result = gramToPound(value[i]);
            printf("%lf lbs\n", result);
        } else if(strcmp(unit[i], "c") == 0){
            double result;
            result = celsiusToFahrenheit(value[i]);
            printf("%lf f\n", result);
        } else {
            printf("Input a correct unit!");
        }
    }

    return 0;
}

double meeterToFeet(double meeter){
    double feet;
    feet = meeter * 3.2808;
    return feet;
}

double gramToPound(double gram){
    double pounds;
    pounds = gram * 0.002205;
    return pounds;
}

double celsiusToFahrenheit(double celsius){
    double fahrenheit;
    fahrenheit = 32 + 1.8 * celsius;
    return fahrenheit;
}