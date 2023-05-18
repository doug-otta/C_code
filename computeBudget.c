#include <stdio.h>

int main(void){
    int account = 0; 
    int finalAccount = 0;

    printf("Enter account values (negative to end):\n");

    while (account >= 0){  
        printf("Account value: ");
        scanf("%d", &account);

        if (account >= 0){  
            finalAccount += account;
        }
    }

    printf("The account value is: US$%d.00\n", finalAccount);

    return 0;
}