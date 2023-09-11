#include <stdio.h>
#include <stdlib.h>

int **allocateIntStarArray(int num) {
    int **ptr = (int **)malloc(num * sizeof(int *));
    return ptr;
}

int *allocateIntArray(int num) {
    int *ptr = (int *)malloc(num * sizeof(int));
    return ptr;
}

int main() {
    int length, width;
    int i, j;

    // Read the dimensions of the area
    scanf("%d", &length);
    scanf("%d", &width);

    // Allocate memory for temperature values
    int **temperatures = allocateIntStarArray(width);
    for (i = 0; i < width; i++) {
        temperatures[i] = allocateIntArray(length);
    }

    // Read temperature values
    for (i = 0; i < width; i++) {
        for (j = 0; j < length; j++) {
            scanf("%d", &temperatures[i][j]);
        }
    }

    // Process and print temperature values
    for (i = 0; i < width; i++) {
        for (j = 0; j < length; j++) {
            if (temperatures[i][j] > 1000) {
                printf("[X]");
            } else if (temperatures[i][j] >= 100 && temperatures[i][j] <= 1000) {
                printf("[*]");
            } else {
                printf("[ ]");
            }
        }
        printf("\n");
    }

    // Free allocated memory
    for (i = 0; i < width; i++) {
        free(temperatures[i]);
    }
    free(temperatures);

    return 0;
}
