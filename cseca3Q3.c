#include<stdio.h>

int main()

{

    int *ptr;  // Wild pointer 
    printf("Wild Pointer ptr ::%u\n",ptr);  // gives Any address
    printf("Wild Pointer *prt::%d\n",*ptr); // gives Garbage value
    
    int x = 4;
    ptr = &x;  // Not a Wild pointer
    printf("Non-Wild Pointer ::%u\n",ptr); // gives address of x
    printf("Non-Wild Pointer ::%d",*ptr); // gives value of x
    return 0;
}