#include<stdio.h>
#include<conio.h>
int main()
{
int i,n;
int f=1;
printf("enter the number");
scanf("%d",&n);

for(i=1;i<=n;i++)
f=f*i;
printf("factorial=%d",f);
return 0;
}
