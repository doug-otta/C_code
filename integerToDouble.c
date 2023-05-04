#include <stdio.h>

int main (void){
    int grade, i;
    double avarage, score, totalScore;

    scanf("%d", &grade);

    for(i = 0; i < grade; i++){
        scanf("%lf", &score);

        totalScore = totalScore + score;
    }

    avarage = totalScore / (double) grade;
    
    printf("%.2lf", avarage);

    return 0;
    
}

/*
#include <stdio.h>

int main (void){
    int grade = 0;
    int i  = 0;
    double avarage, score;
    double totalScore = 0;

    scanf("%d", &grade);

    for(i = 0; i < grade; i++){
        scanf("%lf", &score);

        totalScore = totalScore + score;
    }

    avarage = totalScore / grade;
    
    printf("%.2lf", avarage);

    return 0;
    
}
*/