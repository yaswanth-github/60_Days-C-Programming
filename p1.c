#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	int *p1,*p2;
	p1=arr;
	p1++;// p1 will point towards next memory location
	printf("\n%d",*p1);//2 will be displayed
	p1--;//p1 will point towards previous memory location
	printf("\n%d",*p1);// 1 will be displayed
	p1=p1+2;// Adding a constant to pointer(p1 will point towards 3rd element)
	printf("\n%d",*p1);// 3 will be displayed
	p1=p1-2;//Subtracting a constant from a pointer(P1 will point towards first element)
	printf("\n%d",*p1);// 1 will be displayed
	p2=&arr[4];
	printf("\n%d",p2-p1);//Subtracting two pointers(Returns 4(no. of elements b/w+1)(Pointers pointing to the same array)
	//Comparing two pointers
	while(p1<=p2)
	{
		printf("\n%d",*p1);//Comparison of two pointers (Pointers pointing to the same array)
		p1++;
	}
	//Following are the invalid arithmetic operations(Not allowed on pointers)
	//printf("\n%d",p1+p2);//Invalid arithmetic
    //printf("\n%d",p1/p2);//Invalid arithmetic
    //printf("\n%d",p1*p2);//Invalid arithmetic
	//printf("\n%d",p1%p2);//Invalid arithmetic
    //printf("\n%d",p1*2);//Invalid arithmetic
    //printf("\n%d",p1/2);//Invalid arithmetic
    //printf("\n%d",p1%2);//Invalid arithmetic
	return 0;
}