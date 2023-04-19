#include<stdio.h>
#include<conio.h>

int main()
{
   printf("Lets learn about pointer");
   int a=30;
   int*ptr=&a;
   
   printf("the address to pointer of a is %p\n",&ptr);
   
   printf("the address of a is %p\n",&a);
   printf("the address of a is %p\n",ptr);
   printf("the value of a is %d\n",*ptr);
    printf("the value of a is %d\n",a);
    return 0;
   
}