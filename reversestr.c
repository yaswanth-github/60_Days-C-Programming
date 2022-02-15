/* Program to Reverse a String without using strrev() */
#include <stdio.h>
#include <string.h>
main()
{ ///s1 = hello
char string1[20], string2[20];
int i, length;
printf("Enter any string:\n");
gets(string1);///hello'\0'
length = strlen(string1)-1;///4
for(i=0; string1[i]!='\0'; i++)
{
string2[length]=string1[i];
length--;
///str2[4] = str1[0]; /// h
///str2[3] = str1[1];/// e
///str2[2] = str1[2]; //l
}
///string2[length+1]='\0';
printf("\nThe Reverse of string is:\n");
puts(string2);
}