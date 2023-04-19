#include <stdio.h>
#include <conio.h>

int main()
{
	int a, b, c, ch;
	printf("enter the two number");
	scanf("%d %d", &a, &b);
	printf("enter the choice case ");
	scanf("%d", &ch);

	switch (ch)
	{
	case 'a':
		c = a + b;
		printf("a+b=%d", c);
		break;
	case 2:
		c = a - b;
		printf("%d", c);
		break;
	case 3:
		c = a * b;
		printf("%d", c);
		break;
	default:
		printf("wrong choice");
	}

	return 0;
}