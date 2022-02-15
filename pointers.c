#include<stdio.h>
int main()
{
int var = 10;
int *ptr;/// pointer declaration
ptr = &var; /// pointer initilization

printf("Address of var is : %d ",&var);
printf("\nAddress of var using pointer is : %d ",ptr);
printf("\naddress of ptr is : %d ", &ptr);
printf("\nValue of var is : %d ",var);
//var = 20;
printf("\nValue of var using pointer variable is : %d ",*ptr);
var = 20;
printf("\nValue of var using pointer variable is : %d ",*ptr);

}