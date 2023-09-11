/*Suppose you wanted to reserve space in memory for one number of type float 
and then store the memory location in a variable num of type float *. Which 
of the following would be the correct way to do so?

#include <stdio.h>
#include <stdlib.h>

int main(void){
    float * number;
    number = (float *) malloc(sizeof(float));
    * number = 5.74;

    printf("The float number is allocated in: %p \n and the number is: %.2f", number, *number);
    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main(void){
    int * a;
    a = (int *)malloc(sizeof(int));
    * a = 7;

    printf("The int number is allocated in: %p \n The value is: %d", a, *a);

    free(a);

    return 0;
}



#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *a, *b;
    float *c;

    a = (int *)malloc(sizeof(int));
    * a = 1;
    b = (int *)malloc(sizeof(int));
    * b = 2;
    free(a);
    free(b);
    c = (float *)malloc(sizeof(float));
    * c = 3.5;
    free(c);

    //What's the return? We cannot describe a possible result, because after the free(a) and free(b), the assignment in "c" can be storage in the
    //same place at memory allocation in "a" or "b".

    return 0;
}

*/