#include<stdio.h>
struct company
{
char companyName[40]; ///40
int phoneNumber; ///4
float turnover; ///4
};

int main()
{
struct company c1 = {"ABC",12425435,4356476.454}, c2[5]; /// c2 is str variable
printf("Size of str is : %lu",sizeof(c1));
printf("\nSize of Array of str var is %lu",sizeof(c2));

printf("\nCompany name is : %s",c1.companyName);
printf("\nPhone Number of the company is : %d",c1.phoneNumber);
printf("\nTurnover of the company is : %f ",c1.turnover);

///to store and print the values of the structure array

printf("\n\nEntering the values to the structure array Now");
int i;

for(i=0;i<5;i++)
{
printf("\nEnter the details of company : %d",i+1);
printf("\n\nEnter the Name of the company :");
scanf("%s",&c2[i].companyName);
printf("\nEnter the Phone number of the company");
scanf("%d",&c2[i].phoneNumber);
printf("\nEnter the Turnover of the company");
scanf("%f",&c2[i].turnover);
}
printf("\n\n Entered Value are : ");


}

