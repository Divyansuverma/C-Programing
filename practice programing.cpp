/*#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
	int id;
	char name[20];
	int cgp;
};
int main()
{
    struct student s[3];
	int i;
	
for(i=1;i<=3;i++)
 {
 printf("enter your id");
 scanf("%d",&s[i].id);
 printf("enter your name");
 gets(s[i].name);
 //printf("enter your cgp");
 //scanf("%d",&s[i].cgp);
  }
 for(i=1;i<=3;i++)
  {
 printf("your id:%d",s[i].id);
 printf("your name:%s",s[i].name);
//printf("your cgp:%d",s[i].cgp);
  }
	return 0;  
}*/
#include<stdio.h>
#include<conio.h>
 
 int main()
 {
 	int a, b, marks;
    printf("Enter the first number\n");
    scanf("%d", &a);
    printf("Enter the Second number\n");
    scanf("%d", &b);
    printf("(choice this operator +,-,*,/)");
    scanf("%&", &marks);
 	
 if (marks = '+')
     {
 	 printf("a+b=%d",a+b);
	 }	
 if else (marks = '-')
     {
 	 printf("a-b=%d",a-b);
	 }	
 if else (marks = '*')
     {
 	 printf("a*b=%d",a*b);
	 }	
if else (marks = '/')
     {
 	 printf("a/b=%d",a/b);
	 }	
	 else
	 {
	 	printf("inviled");
	 }
	 return 0;
}