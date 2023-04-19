#include <stdio.h>
#include <conio.h>
int main()
{
	int num;
	printf("enter any number");
	scanf("%d",&num);
	switch (num)
	{
	case 1:
		printf("your entered number is one");
		break;

	case 2:
		printf("entred your number is two");
		break;

	default:
		printf("invalued");
	}
	return 0;
}