#include<stdio.h>
int main()
{
	int n,i,j,a[i][j];
	printf("ebnter the aarsay size:");
	scanf("%d",&n);
	
	printf("enter the array\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0; i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
	return 0;
}