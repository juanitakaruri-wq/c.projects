 
 /*
Name: Juanita Njoki
reg no: CT101/G/26501/25
Description: program to offer loan
Date;20/9/2025
*/


 #include <stdio.h>

int main() {
	int age;
	float income;
	
	// prompt user for input
	printf("Enter your age: ");
		scanf("%d", &age);
	
		printf("Enter your annual salary  income ");
	scanf("%f",  &income);
	
	// check loan qualification
	if(age > 21 && income >=21000) {
		printf("congratulations! You qualify for the bank loan.\n");
	} else { 
		printf("unfortunately,We are unable to offer you aloan at this time.\n");
	}
	
	
	return 0;
}
	
	