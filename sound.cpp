#include<stdio.h>
#include<conio.h>
#include<dos.h>

int main()
{
	int i;
	
	for(i=0;i<100;i++)
	{
		sound(i);
		textcolor(RED);
		cprintf("%d",i);
		delay(50);
		
	}
	nosound();
	return 0;
}