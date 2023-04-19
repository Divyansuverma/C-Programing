#include <stdio.h>
int main()
{
   int element[5], i, j, n, temp;
   printf("enter 5 integer numbers:");
   for (i = 0; i < 5; i++)
   {
      scanf("%d", &element[i]);
   }
   for (i = 0; i < 5 - 1; i++)
   {
      for (j = i + 1; j < 5; j++)
      {
         if (element[i] > element[j]) // element[i]<element[j] for desending order !...
         {
            temp = element[i]; // swapping element[i] with element[j]
            element[i] = element[j];
            element[j] = temp;
         }
      }
   }
   printf("Elements are now in ascending order:");
   for (i = 0; i < 5; i++)
      printf("%d\n", element[i]);
   return 0;
}
