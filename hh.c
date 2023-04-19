#include <stdio.h>
int main()
{
	int a, b;
	char opp;
	printf("Enter the 1st number\n");
	scanf("%d", &a);
    printf("Enter the 2nd number\n");
	scanf("%d", &b);
	printf("Choice the opertors(+,-,*,/)");
	scanf("%s", &opp);

switch (opp)
{
case 1:
printf("a+b=%d",a+b);
    break;

default:
printf("hello");
    break;
}

	return 0;
}
