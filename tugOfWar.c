# include <stdio.h>

int main(void){
    int numbersPlayer, i, firstTeamWeigth, secondTeamWeight;
    int totalFirstTeamWeight = 0;
    int totalSecondTeamWeight = 0;

    printf("Input the numbers of players per team: ");
    scanf("%d", &numbersPlayer);

    for(i = 0; i < numbersPlayer; i++){
        printf("Insert the weight of the team 1 - player %d: ", i + 1);
        scanf("%d", &firstTeamWeigth);
        printf("Insert the weight of the team 2 - player %d: ", i + 1);
        scanf("%d", &secondTeamWeight);

        totalFirstTeamWeight = totalFirstTeamWeight + firstTeamWeigth;
        totalSecondTeamWeight = totalSecondTeamWeight + secondTeamWeight;

    }

    printf("\n");

    if (totalFirstTeamWeight == totalSecondTeamWeight){
        printf("The two teams have the same weights \n");
    } else if (totalFirstTeamWeight > totalSecondTeamWeight){
        printf("Team 1 has an advantage \n");
    } else{
        printf("Team 2 has an advantage \n");
    }

    printf("Total weight for team 1: %d\n", totalFirstTeamWeight);
    printf("Total weight for team 2: %d\n", totalSecondTeamWeight);
    
    return 0;

}