#include<stdio.h>
int main()
{
   float F,C;
   printf("Enter the Temperature in America ::");
   scanf("%f",&F);
   C=((F-32)*5)/9;
   printf("\n Temperature in Indian system in %f celsius",C);
   return 0;
   
}
