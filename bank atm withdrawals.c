
 /*
Name: Juanita Njoki
reg no: CT101/G/26501/25
Description: program for bank Atm withdrawal
Date;7/10/2025
*/



#include <stdio.h>

int main() {
    float balance, amount;

    // Enter initial account balance
    printf("Enter your starting account balance: ");
    scanf("%f", &balance);

    // Allow withdrawals while balance is greater than 0
    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &amount);

        balance -= amount;  

        // Display current balance after withdrawal
        printf("Current balance: %.2f\n", balance);
    }

    // When balance is zero or negative
    printf("Balance is zero or negative hence No more withdrawals allowed.\n");

    return 0;
}

