/*
Name: Juanita Njoki
reg no: ct101/g/26501/25
Description: PROGRAM TO CACULATE SIMPLE INTEREST
s_I =P * rate/100 * time
*/

#include<stdio.h>
int main (){
float principle, rate,time,interest;

printf("Enter principle amount: ");
scanf("%f", &principle);

printf("\n Enter rate:");
scanf("%f", &rate);


printf("\n Enter time:");
scanf("%f", &time);

interest = principle *rate/100*time;

printf("\n simple interest is ksh %.2f",interest);

return 0;
}




