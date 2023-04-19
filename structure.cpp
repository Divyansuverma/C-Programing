#include<stdio.h>
#include<conio.h>

struct student 
{
	int rollno;
	char name[100];
	int cgp;
};

int main()
{
	struct student s1;
	printf("enter your roll no");
	scanf("%d",&(s1.rollno));
	printf("enter your name\n");
	scanf("%s",&(s1.name));
	printf("enter your cgp\n");
	scanf("%d",&s1.cgp);
	
     printf("your roll no:%d",(s1.rollno));
	printf("your name: %s\n",s1.name);
	printf("your cgp: %d\n",s1.cgp);
	
	return 0;
}