 /*
 Name:Juanita Njoki Karuri
 Reg no:CT101/G/26501/25
 Description:program to check eligibiity of final exams
 */
 #include <stdio.h>
 
 int main(){
 	int attendance_percentage;
 	int average_marks;         
 	
 	printf("Enter the attendance in percentage : ");
 	scanf("%d",  &attendance_percentage);

	 printf("Enter the average_marks : ");
	 scanf("%d", &average_marks);
	 
	 
	 if(attendance_percentage >= 75 && average_marks >= 40) 
	 {printf("you are eligible to sit for final exams.\n");}
	 	
		 else{printf("you are not eligile to sit for final exams.\n");}
		 	
		 	
		 	return 0;
 }