#include <stdio.h>
#include <conio.h>

int main()

{
	char alphabat;
	printf("enter the name of first latter ");
	scanf("%c", &alphabat);
	switch (alphabat)
	{
	case 'v':
	{
		printf("best friend");
		break;
	}

	case 'g':
	{
		printf("mirza pur");
		break;
	}
	default:
		printf("chum friend");
	}
	return 0;
}
