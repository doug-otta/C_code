#include <stdio.h>
#include <stdlib.h>

void add(int, int, int *);

int main(void){
    int a, b, sum;
    printf("Input two integers: ");
    scanf("%d%d", &a, &b);
    
    add(a, b, &sum);
    printf("The sum is: %d", sum);

    return 0; 
}

void add(int x, int y, int * sumPtr){
    int z;
    z = x + y;
    *sumPtr = z;
    printf("The value has add! \n");
}
