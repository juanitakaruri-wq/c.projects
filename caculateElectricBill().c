/*
Name:Juanita Njoki Karuri
Reg no:CT101/G/26501/25
Description:program to calculate electricity bill
Date:22/10/2025
*/

#include <stdio.h>

float calculatebill(float units,float bill);
 
 int main() {
 	float bill,units,billtotal;
	 bill = 50;
	 printf("enter units consumed:");
	 scanf("%f",&units);
	 
	 billtotal=calculatebill(units,bill);
	 printf("your total bill is KES %.2f\n\n",billtotal);
	 
	 return 0;
 }
	 
	 
	float calculatebill(float units,float bill){
	 	float billtotal;
	 	
	 	billtotal =units * bill;
	 	return billtotal;
		 
	 }
 