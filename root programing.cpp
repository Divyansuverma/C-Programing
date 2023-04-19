#include<math.h>
#include<stdio.h>
#include<conio.h>

int main()
{
     int a,b,c,d;
     float x,y;
     printf("enter the value of a,b,c\n");
     scanf("%d %d %d",&a,&b,&c);
     d=b*b-4*c*a;
     
     if(d<0)
     {
     	printf("both root are imagenary\n");
	 }
     
     if(d==0)
     {
     printf("both root are equal\n");
     x=-b/(2.0*a);
     printf("both root are equal=%f",x);
	 }
     
	 if(d>0)
	 {
	 	printf("both root are real and dimention\n");
	 	x=-b+sqrt(d)/(2*a);
	 	y=-b-sqrt(d)/(2*a);
	 	printf("both root are real=%f and dimention=%f",x,y);
	 	
	  } 
     
	return 0;
}