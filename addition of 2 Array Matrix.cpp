#include<stdio.h>
#include<conio.h>

int main()
{
     int a[100][100],b[100][100],c[100][100];
     int i,j,n;
     
     printf("enter array size\n");
     scanf("%d",&n);
     
     printf("enter the 1st array\n");
     {
     	for(i=0;i<n;i++)
     	for(j=0;j<n;j++)
     	{
     		scanf("%d",&a[i][j]);
		 }
	 }
	 
	 printf("1st matrix\n");
	 {
	 	for(i=0;i<n;i++)
	 	{
	 		for(j=0;j<n;j++)
	 		{
	 			printf("%d\t",a[i][j]);
			 }
			 printf("\n");
			 
		 }
	 }
	 
	  printf("enter the 2nd array\n");
     {
     	for(i=0;i<n;i++)
     	for(j=0;j<n;j++)
     	{
     		scanf("%d",&b[i][j]);
		 }
	 }
	 
	 printf("2nd matrix\n");
	 {
	 	for(i=0;i<n;i++)
	 	{
	 		for(j=0;j<n;j++)
	 		{
	 			printf("%d\t",b[i][j]);
			 }
			 printf("\n");
			 
		 }
	 }
	 
	 
	  //Addition of Two Matrix
     	for(i=0;i<n;i++)
     	for(j=0;j<n;j++)
     	{
     		c[i][j]=a[i][j]+b[i][j];
		 }
	 
	 printf("Addition of two matrix\n");
	 {
	 	for(i=0;i<n;i++)
	 	{
	 		for(j=0;j<n;j++)
	 		{
	 			printf("%d\t",c[i][j]);
			 }
			 printf("\n");
			 
		 }
	 }
	return 0;
}