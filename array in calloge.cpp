#include<stdio.h>
#include<stdio.h>

int main()
{
	int a[2] [3];
	int i,j;
	for(i=0; i<2; i++)
	{
		for (j=0; j<3; j++)
		{
			printf("enter the array");
			scanf("%d",&a[i][j]);
		}
	}
	printf("two dimentional array elements:\n");
	for (i-0; i<2; i++)
	{
		for (j=0; j<3; j++)
		{
			printf("%d ",a[1][j]);
			if (j==2)
			{
				printf("\n");
			}
		}
	}
	return 0;
}