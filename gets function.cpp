#include<stdio.h > 
#include<conio.h >
int main()
{
    char name[3][100], add[3][100], fname[3][100];
    int i;
    printf("ENTER YOUR DETAIl:\n");
    for (i = 0; i < 3; i++)
	 {
       // fflush(stdin);
        printf("ENTER NAME:  ");
        gets(name[i]);
        printf("ENTER ADDRESS: ");
        gets(add[i]);
        printf("ENTER FATHER NAME");
        gets(fname[i]);
    }
    for (i = 0; i < 3; i++) 
	{
        printf("\nNAME:%s\n", name[i])
        printf("\n___________________\;
        printf("\Address:%s\n", add[i]);
        printf("\nFather name:%s\n",fname[i]);
        printf("\n___________________\n");
    }
    return 0;
}