#include<stdio.h>
#include<conio.h>

int main()
{
	int a,j,k;
	int marks[5][4]={ { 4	,9	,6	,3	},
	                   {8	,5	,6	,2	},
					   {8	,5	,6	,3	},
					   {8	,5	,6	,3	},
					   {8	,6	,3	,8	}};
	
	for(a=0;a<5;a++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",marks[a][j]);
		}
		printf("\n");
	}

	return 0;
}