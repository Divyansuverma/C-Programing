#include<stdio.h>
#include<conio.h>
	#define PI 3.14
	#include<math.h>
int main()
{
	float area,readus;
    int ch,rec,l,b,squ;
	printf("enter the 1 for curcule, 2 tringular, 3 square, 4 pythagoras,5 sum, 6 greater, 7 marks ");
	scanf("%d",&ch);
	 switch(ch)
    {
    	
		
case 1:
     printf("enter the readus circular\n");
	 scanf("%f",&readus);
	 
	 area= PI * readus * readus;
	 printf("area of circular = %0.4f\n",area);
	 break;
	 
case 2:
	
	 printf("enter the lenght\n");
	 scanf("%d",&l);
	 printf("enter the base\n");
	 scanf("%d",&b);
	 
	 rec=l*b;;
	 printf("area of rectangle=%d\n",rec);
	 break;
	 
case 3:
	float squ;
	printf("enter the value a=");
	scanf("%f",&squ);
	
	area=squ*squ;
	printf("area of square = %f\n",area);
	break;
	
case 4:
    char pythagoras;
    float base,height,hypotenuse;
	printf("you want find \nheight for p\nBase for b\nhypotenuse  for h=");
	scanf("%s",&pythagoras);
	switch(pythagoras)
	{
		case 'p':
			
			printf("enter the base=");
			scanf("%f",&base);
			printf("enter the hypotenuse=");
			scanf("%f",&hypotenuse);
			
			height=sqrt(hypotenuse*hypotenuse-base*base);
			printf("Height=%f",height);
			break;
		     
			
		case 'b':
			printf("enter the height=");
			scanf("%f",&height);
			printf("enter the hypotenuse=");
			scanf("%f",&hypotenuse);
			
			base=sqrt(hypotenuse*hypotenuse-height*height);
			printf("Base=%f",base);
			break;
		    
		case 'h':
			printf("enter the base=");
			scanf("%f",&base);
			printf("enter the height=");
			scanf("%f",&height);
			
			hypotenuse=sqrt(height*height+base*base);
			printf("hypotenuse=%f",hypotenuse);
			break;	  
			  
	}
	
		case 5:
		{
		int w,r;
		printf("enter the value for w");
		scanf("%d",&w);
		printf("enter the value for r");
		scanf("%d",&r);
		int z=w+r;
		printf("sum of two number=%d",z);
		break;
	}
		
	
	
	
		
	case 6:
		int a,b,c;	
		printf("enter the three value for a,b,c\n");
		scanf("%d %d %d",&a,&b,&c);
		
		if(a>b)
		{
			if(a>c)
			{
				printf("a is greater");
				break;
			}
		}
			
			if(b>a)
			{
				if(b>c)
				{
					printf("b is greater");
					break;
				}
			}
			
			if(c>a)
			{
				if(c>b)
				{
					printf("c is greater");
				}
			}
			
			
	case 7:
	    
		int age,markes;
	    printf("enter your age");
	    scanf("%d",&age);
	    printf("enter your markes");
    	scanf("%d",&markes);
	
    	switch(age)
    	{
	    	case 18:
		   	printf("correct your age");
		
			
      	switch(markes)
	    {
	    	case 90:
			printf("you are selected");
			break;
			
		    default:
		 	printf("you are not selected because your makes is not 90");
	
	 	}
	    	default:
	    	printf("your age is not 18 so your not selected");
	}		
	
	
}
	 return 0;

}
