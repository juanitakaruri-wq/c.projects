/*
Name:Juanita Njoki Karuri
Reg no:CT101/G/26501/25
Description:
Date:5/11/202
*/

#include <stdio.h>

int main() {
    FILE *file;
    float amount, total = 0;

    file = fopen("sales.txt", "r"); 
    if (file == NULL) {
        printf("Error opening sales.txt file.\n");
        return 1;
    }

    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
    }

    printf("Total Sales for the Day: %.2f\n", total);

    fclose(file); 
    return 0;
}
