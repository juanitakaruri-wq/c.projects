/*
Name: Juanita Njoki
reg no: CT101/G/26501/25
Description: PROGRAM TO CACULATE SURFACE AREA AND VOLUME  OF A CYLINDER
Date;20/9/2025
*/

#include<stdio.h>
#include<math.h>
int main (){
	
 double radius,height,volume,surfacearea;
 
 
 // prompting the user to enter the radius
 printf ("Enter the  radius of the cylinder:  ");
 scanf("%lf",&radius);
 
 
 // prompting the user to enter the height
  printf ("Enter the  height of the cylinder :");
 scanf("%lf",&height);
 
// caculating  volume and surface area

volume = M_PI * radius * radius * height;
surfacearea= 2 * M_PI * radius * radius + 2 * M_PI *  radius * height;

printf("volume of the cylinder = %.2lf cubic units \n" ,volume);
printf("surfacearea of the cylinder = %.2lf square  units \n" ,surfacearea);
return 0;
  
}