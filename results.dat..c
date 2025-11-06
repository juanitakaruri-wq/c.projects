/*
Name:Juanita Njoki Karuri
Reg no:CT101/G/26501/25
Description:program to read student records from binary files
Date:5/11/202
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LENGTH 50
#define REG_NUM_LENGTH 20

typedef struct {
    char name[NAME_LENGTH];
    char reg_number[REG_NUM_LENGTH];
    int total_marks;
} Student;

int main() {
    FILE *file_ptr;
    Student student;

    file_ptr = fopen("results.dat", "rb");
    if (file_ptr == NULL) {
        perror("Error opening file");
        return 1;
        
    }

    printf("Displaying student examination results:\n");

    // Read records from the file one by one until the end of the file is reached
    while (fread(&student, sizeof(Student), 1, file_ptr) == 1) {
        printf("Name: %s, Marks: %d\t", student.name, student.total_marks);
    }

    fclose(file_ptr);
    printf("File 'results.dat' has been closed.\n");

    return 0;
}