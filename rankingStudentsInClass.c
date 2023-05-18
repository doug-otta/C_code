#include <stdio.h>

void computeRanks(int numStudents, int scores[], char names[][50], int ranks[]) {
    int i, j;
    
    for (i = 0; i < numStudents; i++) {
        ranks[i] = 1; // Initialize rank as 1 for each student
        
        for (j = 0; j < numStudents; j++) {
            if (scores[j] > scores[i]) {
                ranks[i]++; // Increment rank if a higher score is found
            }
        }
    }
}

int main() {
    int numStudents, i;
    scanf("%d", &numStudents); // Read the number of students
    
    int scores[numStudents];
    for (i = 0; i < numStudents; i++) {
        scanf("%d", &scores[i]); // Read the scores
    }
    
    char names[numStudents][50];
    for (i = 0; i < numStudents; i++) {
        scanf("%s", names[i]); // Read the names
    }
    
    int ranks[numStudents];
    computeRanks(numStudents, scores, names, ranks); // Compute the ranks
    
    for (i = 0; i < numStudents; i++) {
        printf("%s rank is %d\n", names[i], ranks[i]); // Print the output
    }
    
    return 0;
}
 