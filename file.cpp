#include<stdio.h>
 int main()
{
	FILE *file;
	if (file=fopen("Desktop/baby.text","w"));
	{
		printf("yes");
	}
	 
	 else
	
		printf("erro!");
/*char ch;
	//fp=fopen("Desktop/baby.text","r");
	while (1)
	{
		ch =fgetc(fp);
		if(ch==EOF)
		break;
		printf("%c",ch);
	}*/
	fclose(file);
	return 0;
}