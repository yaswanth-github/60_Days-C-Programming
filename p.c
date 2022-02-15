#include<stdio.h>
int main()
{
     int a[]={1,2,3,4};
     int *p=a,x;
     x=*p++;
     printf("\n%d %d",x,*p);
     return 0;
}
