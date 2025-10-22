/*
Name:Juanita Njoki Karuri
Reg no:CT101/G/26501/25
Description:program to calculate the fare
Date:22/10/2025
*/

  // function definition
  float total_fare(float distance)
  {
  	   float total_fare ;//variable declaration
  	   total_fare = distance*50;
  	   return total_fare;
  }
  #include <stdio.h>
  
  void main()
  {
  	float d,fare;
  	printf("Enter ditance covered in km \n");
  	scanf("%f",&d);
  	fare = total_fare(d);//call function
  	printf("Total fare = ksh %.2f\n",fare);//prints out the results
  	    
  	    return 0;
  }