#include<stdio.h>
int main()
{
int a; ///a = 4 bytes
double b; /// b = 8 bytes
int *pnum;
char *pch;
float *pfnum;
double *pdnum;
long *plnum;
printf("\n Size of integer variable=%d",sizeof(a));
printf("\n Size of double variable=%d",sizeof(b));
printf("\n Size of integer pointer=%d",sizeof(pnum));
printf("\n Size of character pointer=%d",sizeof(pch));
printf("\n Size of float pointer=%d",sizeof(pfnum));
printf("\n Size of double pointer=%d",sizeof(pdnum));
printf("\n Size of long pointer=%d",sizeof(plnum));
return 0;
}
///All will give the same answer(
///equivalent to size taken by unsigned
///integer for a particular compiler)