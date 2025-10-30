/*
Name:Juanita njoki Karuri
Reg no:CT101/G/26501/25
Description:
Date:28/10/2025
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    float revenue[7];       // Array to store daily revenues
    float total = 0, average;
    int i;

    printf("Enter revenue for each day of the week:\n");

    // Input daily revenues
    for(i = 0; i < 7; i++) {
        printf("Day %d revenue: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }

    // Calculate average
    average = total / 7;
      // Display results
    printf("\nTotal weekly revenue: %.2f\n", total);
    printf("Average daily revenue: %.2f\n", average);

    return 0;
}