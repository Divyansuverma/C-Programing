#include<stdio.h>
#include<conio.h>

	void starPattern (int rows)
	
	{
		for (int i=0; i<rows; i++)
		{
			for(int j=0; j<=i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		
	}
	
		void reversestarPattern (int rows)
	
	{
		for (int i=0; i<rows; i++)
		{
			for(int j=0; j<= rows-i-1; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		
	}
	
	int main()
	{
		int rows,type;
		
		printf("enter4 0 for star pattern and 1 for reverse star pattern\n");
		scanf("%d",&type);
		
			printf("how manys do you want rows\n");
		scanf("%d",&rows);
		
		
	switch (type )
	{
		case 0:
			starPattern(rows);
			break;
			
			
		case 1:
		reversestarPattern(rows);
		break;
		
		
		default: 
		printf("Enter your invalid choice");	
		}		
		return 0;
	}