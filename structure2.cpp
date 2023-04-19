#include<stdio.h>
#include<conio.h>

struct student
{
	char name[20],fname[20];
	int marks;
	float cgp;
};
int main()
{
    struct student s1;
	printf("enter your name\n");
	gets(s1.name);
	printf("enter your father name\n");
	gets(s1.fname);
	printf("enter your cgp\n");
	scanf("%f",&s1.cgp);
	printf("enter your marks");
	scanf("%d",&s1.marks);


    printf("Displaying your information\n");
	printf("your name: %s\n",s1.name);
	printf("your father name=%s\n",s1.fname);
	printf("your cgp: %f\n",s1.cgp);
	printf("your marks: %d\n",s1.marks);

	return 0;	
}
	