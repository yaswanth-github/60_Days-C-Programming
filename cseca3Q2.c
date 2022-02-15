#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int count_insensitive(char *str, char ch)
{
    int n = 0;
    int i;
    for (i=0;i<strlen(str);i++)
    {
        if (tolower(*(str+i))== tolower(ch)) // IGNOREING CASE-SENSITIVITY
        {
            n++;
        }
    }
    return n;
}

int main()
{
    char *ch=(char*)malloc(9000*sizeof(char));
    printf("Enter the Characters ::");              // INPUT
    fgets(ch,9000,stdin); // gets(ch)
    printf("\nEnter the Char you want to find how many times a Char exist in Character array ::");
    char c=getchar();
    int a=count_insensitive(ch,c);
    printf("The Char '%c' Exists %d Times.\n",c,a);  // OUTPUT
}