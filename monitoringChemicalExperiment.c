#include <stdio.h>

int main(void){
    int maxTemp, minTemp;

    printf("Set the minimun temperature: ");
    scanf("%d", &minTemp);

    printf("Set the maximun temperature: ");
    scanf("%d", &maxTemp);

    int readTemp = minTemp + 10;

    while(readTemp >= minTemp && readTemp <= maxTemp){
        printf("Now the temperature is: ");
        scanf("%d", &readTemp);
        if(readTemp == -999 ){
          return 0;   
        } else if(readTemp < minTemp || readTemp > maxTemp){
            printf("Alert!\n");
        } else{
            printf("Nothing to report\n");
        }
    }

    return 0;
}

/*
100 200
100 105 110 107 200 -999

Nothing to report
Nothing to report
Nothing to report
Nothing to report
Nothing to report



10 20
15 10 20 0 15 -999

Nothing to report
Nothing to report
Nothing to report
Alert!

*/