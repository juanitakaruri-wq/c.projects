/*
Name:Juanita Njoki Karuri
Reg no:CT101/G/26501/25
Description:program to convert farenheit temperature to celcius
Date:22/10/2025
*/
#include <stdio.h>

      //function declaration
      float convert_to_celcius(float farenheit)
      {
	  	float celcius;
	  	celcius =(farenheit-32)*5/9;//converts farenheit to celcius
	  	  
	  	  return celcius;
	  }
	  
	  
	  void main()  {
		  
		  float result,f;
		  printf("enter temperature in farenheit;\n");
		  scanf("%f",&f);
		  result = convert_to_celcius(f);  //call the funcion
		  printf("Temp in farenheit=%.0fF\n",f);
		  printf("Temperature = %.2f c\n", result);//print results
		  
		  
		     return 0;
		     
	  }
	  