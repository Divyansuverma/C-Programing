#include<stdio.h>
#include<conio.h>

int main()
{
   int i=1;
   int n;
   printf("enter the value for i\n");
   scanf("%d",&n);
   do
   {
   	printf("the valu of i %d\n",i*n);
   	++i;
   }
   while(i<=10);
	return 0;
}