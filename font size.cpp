#include<stdio.h > 
#include<conio.h >
int main()
{
    char name[3][100], add[3][100];
    int i;
    printf("ENTER YOUR DETAIl:");
    for (i = 0; i < 3; i++) {
        fflush(stdin);
        printf("ENTER NAME:  ");
        gets(name[i]);
        printf("ENTER ADDRESS: ");
        gets(add[i]);
    }
    for (i = 0; i < 3; i++) {
        printf("\n___________________\n");
        printf("\nNAME:%s", name[i]);
        printf("\Address:%s", add[i]);
        printf("\n___________________\n");
    }

    return 0;
}