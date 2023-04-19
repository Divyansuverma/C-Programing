#include<stdio.h>
#include<conio.h>

int main()
{
	int age,markes;
	printf("enter your age");
	scanf("%d",&age);
	printf("enter your markes");
	scanf("%d",&markes);
	
	switch(age)
	{
		case 18:
			printf("correct your age");
		
			
	switch(markes)
	{
		case 90:
			printf("you are selected");
			break;
			
		 default:
		 	printf("you are not selected because your makes is not 90");
	
		}
		default:
		printf("your age is not 18 so your not selected");
	}
	
	
	return 0;
}