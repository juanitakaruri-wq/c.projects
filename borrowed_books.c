/*
Name:Juanita Njoki Karuri
Reg no:CT101/G/26501/25
Description:
Date:5/11/202
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file_ptr;
    char book_title[100];

    // Open the file in append mode
    file_ptr = fopen("borrowed_books.txt", "a");
    if (file_ptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Get user input and write to the file
    printf("Enter the title of the book:\n ");
    fgets(book_title, sizeof(book_title), stdin);
    fprintf(file_ptr, "%s", book_title);

    // Close the file and display a confirmation
    fclose(file_ptr);
    printf("Book title successfully stored.\n");

    return 0;
}