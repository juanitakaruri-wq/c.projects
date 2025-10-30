/*
Name:Juanita Njoki Karuri
Reg no:CT101/G/26501/25
Description:program to determine room occupancy for multiple branches
Date:28/10/2025
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];
    int branch, floor, room;
    int totalOccupied = 0, branchOccupied;

    srand(time(0));

    printf("=== HOTEL CHAIN OCCUPANCY SUMMARY ===\n\n");

    for(branch = 0; branch < 3; branch++) {

        branchOccupied = 0;

        for(floor = 0; floor < 5; floor++) {

            for(room = 0; room < 10; room++) {

                chain[branch][floor][room] = rand() % 2;

                if(chain[branch][floor][room] == 1)

                    branchOccupied++;

            }

        }

        int branchTotalRooms = 5 * 10;
        int branchVacant = branchTotalRooms - branchOccupied;

        printf("Branch %d -> Occupied: %d | Vacant: %d | Total Rooms: %d\n",
               branch + 1, branchOccupied, branchVacant, branchTotalRooms);
        totalOccupied += branchOccupied;
    }

    int totalRooms = 3 * 5 * 10;
    int totalVacant = totalRooms - totalOccupied;

    printf("\n=============================================\n");
    printf("TOTAL ACROSS ALL BRANCHES\n");
    printf("Occupied: %d | Vacant: %d | Total Rooms: %d\n",
           totalOccupied, totalVacant, totalRooms);
    printf("=============================================\n");



    return 0;

}