#include<stdio.h>
#include<conio.h>

int main()
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
}