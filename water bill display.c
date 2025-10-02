/*
Name:Juanita Njoki Karuri
Reg no:CT101/G/26501/25
Description: program to show the amount of water units consumed
Date:26/9/2025
*/

#include <stdio.h>

   int main(){
   	//variable declaration
   	  int units_consumed;
   	  float bill = 0.0;
   	
   	  /*
   	   chargefor_0_30 = 20.0;
   	   chargefor_31_60 = 25.0;
   	   chargefor_above_60 = 30.0;
   	  */
	  
   
   //prompt user to enter units
   printf("Enter number of units_consumed : ");
   scanf("%d", &units_consumed);

    

    if (units_consumed < 30) {
        bill = units_consumed * 20;
    } else if (units_consumed >30 && units_consumed <= 60) {
        bill = units_consumed * 25;
    } else {
        bill = units_consumed * 30;
    }

    
 

	//prompt to display results
printf("Total bill = %.2f KES\n",bill);

    return 0;
   }
		
	
    	