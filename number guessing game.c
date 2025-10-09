
 /*
Name: Juanita Njoki
reg no: CT101/G/26501/25
Description: program for a number guessing game 
Date;7/10/2025
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;

    // Seed the random number generator
    srand(time(0));
    // Generate random number between 1 and 20
    secretNumber = rand() % 20 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 20. Try to guess it!\n");

    // Loop until the correct guess 
    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;  

        if (guess > secretNumber) {
            printf("Too high!\n");
        } 
        else if (guess < secretNumber) {
            printf("Too low!\n");
        } 
        else {
            printf("Congratulations!");
            printf("Total attempts: %d\n", attempts);
            break;
        }
    }

    return 0;
}
