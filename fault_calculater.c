#include <stdio.h>
#include<conio.h>
//#include<string.h>
void main()
{
	char c, ch , z ;  
	ch = 'y';
	int a, b;
	while (ch == 'y')
	{
		printf("enter the 1st number\n");
		scanf("%d %d", &a, &b);
		printf("enter the name of first latter ");
		scanf("%s", &c);

		switch (c)
		{
		case '+':
			if (a + b == 55)
			{
				printf("ERROR");
			}
			else

				printf("a+b=%d\n", a + b);
			break;
		case '-':

			if (a - b == 20)
			{
				printf("ERROR");
			}
			else
				printf("a-b=%d\n", a - b);
			break;

		case '*':

			if (a * b == 30)
			{
				printf("ERROR");
			}
			else
				printf("a*b=%d\n", a * b);
			break;

		case '/':

			if (a / b == 2)
			{
				printf("ERROR");
			}
			else
				printf("a/b=%f\n", (float)a / b);
			break;

		default:
			printf("invailed ERROR");
		}

		printf("if you want to again calculation(yes/no)\n");
		z = getch();
		if(z== 'n')
			break; 

	}
	return ;
}
