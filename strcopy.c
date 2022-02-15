//strncpy()
#include<stdio.h>
#include<string.h>
int main()
{
char str1[15],str2[15];
int n;
printf("\nEnter Source String:");
gets(str1);
printf("\nEnter Destination String:");
gets(str2);
printf("Enter number of characters to copy in destination string:");
scanf("%d",&n);
strncpy(str2,str1,n);
printf("Source string is:%s",str1);
printf("\nDestination String is:%s",str2);
return 0;
}