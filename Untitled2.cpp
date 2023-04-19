#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,temp;
	int a[5],b[100];
    int n;
	printf("enter the number\n");
	
	scanf("%d",&n);
	
	printf("enter the array element\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n   ;j++)
		{
			if (b[i]>b[j])
		 {
			temp=b[i];
			b[i]=b[j];
			b[j]=temp;
		 }
		}
	}
		for(i=0;i<5;i++) 
		{
			a[i]=b[i];
		}
	
	printf("sorted elements\n");
	for(i=0;i<5;i++) 
	{
		printf("%d\t",a[i]);
	}
	return 0;
}