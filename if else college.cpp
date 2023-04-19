#include<stdio.h>
#include<conio.h>
 
 int main()
 {
 	int marks;
 	printf("enyter");
 	scanf("%d",&marks);
 	
 if (marks==100)
 {
 	printf("genouub");
	 }	

else if (marks>=80 && marks<100)
{
	printf("topper");
	 }
	 
	else if (marks>=60 && marks<79)
	{
		printf("pass");
		  } 	 
		  
else
{
	printf("fail");
		  }		  
		  
		  return 0;
 }