/*
Name:Juanita Njoki Karuri
Reg no:CT101/G/26501/25
Description: program to display Mobile Data Bundle Options
Date:28/9/2025
*/

#include <stdio.h>

int main() {
    int choice;

    // Display menu
    printf(" Mobile Data Bundle Options \n");
    printf("1. 100 MB = KES 50\n");
    printf("2. 500 MB = KES 200\n");
    printf("3. 1 GB   = KES 350\n");
    printf("4. 2 GB   = KES 600\n");
    printf("Please enter your choice (1 – 4): ");
    
    // Get user input
    scanf("%d", &choice);

    // Process choice using switch statement
    switch (choice) {
        case 1:
            printf("You selected: 100 MB bundle. Cost: KES 50\n");
            break;
        case 2:
            printf("You selected: 500 MB bundle. Cost: KES 200\n");
            break;
        case 3:
            printf("You selected: 1 GB bundle. Cost: KES 350\n");
            break;
        case 4:
            printf("You selected: 2 GB bundle. Cost: KES 600\n");
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 4.\n");
    }

    return 0;
}
