#include<stdio.h>
#include<conio.h>

void swap(int , int);
int main()
{
	int a=20;
	int b=30;
	
	printf("befor the swaping value a=%d\n , b=%d\n",a,b);
	
	swap(a,b);
	printf("after the swaping value a=%d\n , b=%d\n",a,b);	
}

void swap(int a, int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	
	printf("after the swaping value a=%d\n , b=%d\n",a,b);
	
}