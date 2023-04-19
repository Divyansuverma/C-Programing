#include<stdio.h>
#include<conio.h>

int main()
{
    int a=1;
    int n;
    printf("enter the number for table\n");
    scanf("%d",&n);
    printf("your table\n");
    while(a<=10)
    {
    	printf("%d\n",a*n);
    	a++;
	}
	return 0;
}