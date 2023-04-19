#include<stdio.h>
#include<conio.h>

int main()
{
	int a[3][3],b[3][3],c[3][3];
	int i,j;
	printf("enter the numer 1st matrix\n");
	for (i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		printf(" 1st matrix\n");
		for (i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
		
		
			printf("enter the numer of 2nd matrix\n");
	for (i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
		printf("2nd matrix\n");
		for (i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d\t",b[i][j]);
			}
			printf("\n");
		}
		
		printf("after addition matrx\n");
		
		for (i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
		  c[i][j]=a[i][j]+b[i][j];
		}
	}
		
		for (i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}	
		
		
				
return 0;		
		
}