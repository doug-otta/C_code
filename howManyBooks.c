#include <stdio.h>

int main(void){
    double amountMoney, pricePerBook, numberOfbooks;

    printf("How much money you have: ");
    scanf("%lf", &amountMoney);
    printf("Input the price of the books: ");
    scanf("%lf", &pricePerBook);

    numberOfbooks = amountMoney/pricePerBook;

    printf("The largest number of books is: %d", (int) numberOfbooks);
}

/*#include <stdio.h>
int main(void) {
    double dOne, dTwo;
    int iOne, iTwo;
    printf("Please enter two decimals: ");
    scanf("%lf %lf", &dOne, &dTwo);
    printf("I read dOne = %lf, dTwo = %lf.\n", dOne, dTwo);
    iOne = (int) dOne;
    iTwo = (int) dTwo;
    printf("iOne = %d, iTwo = %d.\n", iOne, iTwo);
    printf("%d / %d = %d.\n", iOne, iTwo, iOne/iTwo);
    return 0;
}
*/