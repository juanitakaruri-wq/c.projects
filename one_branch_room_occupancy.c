/*
Name:Juanita Njoki Karuri
Reg no:CT101/G/26501/25
Description:program to determine room occupancy for one branch
Date:28/10/2025
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10];
    int occupied, vacant;
    int floor, room;
    int totalOccupied = 0, totalVacant = 0;

    srand(time(0)); // seed random number generator

    printf("=== HOTEL ROOM OCCUPANCY SUMMARY ===\n\n");

    // Calculate occupied and vacant rooms per floor
    for (floor = 0; floor < 5; floor++) {
        occupied = 0;

        for (room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2;
            if (occupancy[floor][room] == 1)
                occupied++;
        }

        vacant = 10 - occupied;
        totalOccupied += occupied;
        totalVacant += vacant;

        printf("Floor %d -> Occupied: %d | Vacant: %d\n", floor + 1, occupied, vacant);
    }

    // Display total summary
    printf("\n-----------------------------------\n");
    printf("Total Occupied: %d | Total Vacant: %d\n", totalOccupied, totalVacant);
    printf("Total Rooms: %d\n", totalOccupied + totalVacant);

    return 0;
}