#include <stdio.h>
int main()
{
	int a[30];
	int i, n;
	printf("Enter the array size:");
	scanf("%d", &n);

	printf("Enter array\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}