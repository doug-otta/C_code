#include <stdio.h>

void behind(int *, int);

int main(void) {
    int array[10];
    int N, i;
    
    scanf("%d", &N);

    for (i=0; i<N; i++) {
        scanf("%d", &array[i]);
    }

    behind(array, N);

    for (i=0; i<N; i++) {
        printf("%d\n", array[i]);
    }
    
    return 0;
}

void behind(int * ptr, int N){
    int i;
    int bigger = 0;
    

    for(i = 0; i < N; i++){
        if(ptr[i] > ptr[i + 1]){
            bigger = ptr[i];
        }
    }

    for(i = 0; i < N; i++){
        ptr[i] = bigger - ptr[i];
    }

}