#include<stdio.h>
#include<conio.h>



int reverse(int num)
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
}
