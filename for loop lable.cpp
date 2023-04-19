#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    int n;
    int f=2;
    printf("enter the number for table\n");
    scanf("%d",&n);
    int l;
	l=n*f;
    for(a=1;a<=10;a++)
    {
    	printf("the value of a in %d\n",a*l);
	}
	return 0;
}