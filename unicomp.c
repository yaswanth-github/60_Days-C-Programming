#include<stdio.h>
union company{
char name[40];
int ph;
float to;
};
int main()
{
union company c1;
printf("Sizeof company union is : %d",sizeof(c1));
printf("\nEnter the value of the company name");
scanf("%s",&c1.name);
printf("\nCompany Name is : %s",c1.name);

printf("\nEnter the phone number");
scanf("%d",&c1.ph);
printf("\nPhonu Number is : %d",c1.ph);
printf("\nENter the turnover : ");
scanf("%f",&c1.to);

printf("\nTurnOver is : %f",c1.to);
}