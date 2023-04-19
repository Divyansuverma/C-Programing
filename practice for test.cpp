#include<stdio.h>
#include<conio.h>

int sum(int ,int);
void main()
{
	int a,b,r;
	printf("enter the two number");
	scanf("%d %d",&a,&b);
	r=sum(a+b);
	printf("%d",r)
}
int sum(int a, int b)
{
	return a+b;
}

/*int main()
{
    int i,n,l;
    double a=1;
    printf("enter the value");
    scanf("%d",&n);
    printf("enter the power");
    scanf("%d",&l);
    for(i=1;i<=l;++i)
	{
		a=a*n;
	  } 
	  printf("%lf",a); 
	return 0;
}*/
/*int main()
{
   int a[5],i,j,temp;
   printf("enter the five element\n");
   for(i=0;i<5;i++)
   {
   	scanf("%d",&a[i]);
   }
   
   for(i=0;i<5-1;i++)
   {
   	for(j=i+1;j<5;j++)
   	{
   		if(a[i]<a[j])
   		{
   			temp=a[i];
   			a[i]=a[j];
   			a[j]=temp;
		   }
	   }
   }
   
   printf("show you dessending order sorting element\n");
   for(i=0;i<5;i++)
   printf("%d\n",a[i]);
   
	return 0;
}xx*/

/*struct student {
                char name[20];
                int rollno;
                float marks;
               };
int main( )
{
        int i,n;
        printf("Enter how many records u want to store :: ");
        scanf("%d",&n);
        struct student stuarr[n];
        printf("Enter name, roll no. and marks Below :: \n");

        for(i=0; i<n; i++)
        {
                printf("\nEnter %d record :: \n",i+1);

                printf("Enter Name :: ");
                scanf("%[^\n]",stuarr[i].name);//when use this "%[^\n]" so even then this error 
                printf("Enter RollNo. :: ");
                scanf("%d",&stuarr[i].rollno);
                printf("Enter Marks :: ");
                scanf("%f",&stuarr[i].marks);

        }
        printf("\n\tName\tRollNo\tMarks\t\n");
        for(i=0; i<n; i++)
                printf("\t%s\t%d\t%.2f\t\n", stuarr[i].name, stuarr[i].rollno, stuarr[i].marks);

                return 0;
}*/

/*int reverse(int num)
{
	int rev=0,rem;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	return rev;
}
int main()
{
	int a,num1;
	printf("enter the number\n");
	scanf("%d",&num1);
	a=reverse(num1);
	printf("reverse=%d\n",a);
}*/

/*int main()
{
   
   int a,b,c,sum,rev;
   printf("enter the number of a\n");
   scanf("%d",&a);
    printf("enter the number of a\n");
   scanf("%d",&b);
    printf("enter the number of a\n");
   scanf("%d",&c);
   
   sum=a+b+c;
   
   printf("the sum of three number=%d\n",sum);
   
   while(rev)
   {
   int temp=a;
   b=b;
   c=temp;
}
    printf("reverse of three num=%d",rev);
	return 0;
}*/