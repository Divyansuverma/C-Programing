#include<stdio.h>
#include<graphics.h>
#include<dos.h>

// function for making of rainbow
void rainbow()
{

// auto detection
int gdriver = DETECT,gmode;
int x, y, i;

initgraph(&gdriver,&gmode);

// message

printf(“\nThis is a Rainbow“);

//for background color
setbkcolor(BLUE+WHITE);

//finding centre x-ordinate of screen

x = getmaxx() / 2;

//finding centre y-ordinate of screen
y = getmaxy() / 2;

for (i=30; i<200; i++)
{

delay(100);

// select color for making of rainbow
setcolor(i/10);

//arc making with fixed centre and increasing radius
arc(x, y, 0, 180, i-10);
}
}
// driver program
int main()
{
rainbow();
return 0;
}

