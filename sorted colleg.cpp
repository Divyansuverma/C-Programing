#include <stdio.h>
#include <conio.h>

int main()
{
	int i, j, temp;
	int a[7];
	int n;
	printf("enter the number\n");
	scanf("%d", &n);

	printf("enter the array element\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("sorted elements\n");
	for (i = 0; i < 7; i++)
	{
		printf("%d\t", a[i]);
	}
	return 0;
}