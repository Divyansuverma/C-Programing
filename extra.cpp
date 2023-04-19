#include<stdio.h>
#include<string.h>

/*struct student
{
	int id;
	char name[100];
	float cgp;
}s1;

int main()
{
	int i;
	for(i=1;i<=2;i++)
	{
	printf("enter your id");
	scanf("%d",&s1.id);
	printf("enter your name");
	scanf("%s",&s1.name);
	printf("enter your cgp");
	scanf("%f",&s1.cgp);
    }
	
	for(i=1;i<=2;i++)
	{
	printf("your id:%d\n",s1.id);
	printf("your name:%s\n",s1.name);
	printf("your cgp:%f\n",s1.cgp);
    }
	return 0;
}*/

struct student
{
	char name[3][100],add[3][100],fname[3][100],bname[3][100];
    int results[3][100],cgpa[3][100];
   
};

int main()
{
	struct student r[3];
	int i;
	 for (i=1; i<3; i++)
	 {
	 	printf("ENTER NAME: ");
        gets(r[i].name[i]);
        printf("ENTER ADDRESS: ");
        gets(r[i].add[i]);
        printf("enter the fname: ");
        gets(r[i].fname[i]);
        printf("enter your brother name: ");
        gets(r[i].bname[i]);
        printf("enter your mark: ");
      scanf("%d",&r[i].results[i]);
        printf("enter your cgpa:  ");
       scanf("%d",&r[i].cgpa[i]);
        printf("\n___________________\n");
     }
        
        printf("STUDENT INFORMATION\N");
	 for (i=1; i<3; i++) 
	{
		printf("\n___________________\n");
        printf("\nNAME:%s\n",r[i].name[i]);
        printf("\Address:%s\n", r[i].add[i]);
        printf("\your fname:%s\n",r[i].fname[i]);
        printf("\your brother name:\n",r[i].bname[i]);
        printf("your marks:%d\n",r[i].results[i]);
        printf("your cgpa:%d",r[i].cgpa[i]);
        printf("\n___________________\n");
    }
    return 0;
}