#include<stdio.h>
#include<conio.h>

int main()
{
    int n,f=2;
    printf("enter the number for find factroial\n");
    scanf("%d",&n);
    
    fact:
    	while(n<=4)
    	{
    		f=f*n;
    		++n;
    		goto fact;
		}
		
		printf("Factroial=%d",f);
     
	return 0;
}