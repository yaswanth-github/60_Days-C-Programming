#include<stdio.h>
int main()
{
int a[50],n,i, j, t;
printf("\n Enter integer value for total no. of elements to be sorted: ");
scanf("%d",&n);///n = 5
printf("\n Enter array elements");
for( i=0;i<n;i++)
{  scanf("%d",&a[i]);
}
for(i=0;i<n;i++)///for(i=0;i<5;i++)
{///i = 1
    int last = (n-1)-i; ///last = 3
///a[5]= {4,5,10,25,1}
for(j=0; j<last ;j++) ///last = 3
{ ///j = 0
if(a[j]>a[j+1])///a[3]>a[4] 25>1
{
    t=a[j];    /// t = 25
    a[j]=a[j+1];   ///a[3] = a[4]; /// a[3] = 1
    a[j+1]=t;
a[j+1]=t; ///a[4] = 25
    ///a[5] = {4,5,10,1,25}
    ///a[5] = {4,5,1,10,25}
    ///a[] = {1,4,5,10,25}
}
}
}
printf("Array in ascending order");
for(i=0; i<n; i++)
printf("\n%d", a[i]);
return 0;
}