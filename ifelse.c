#include<stdio.h>
int main()
{
    float mat,phy,che,avg;
    printf("Enter Maths Marks : ");
    scanf("%f",&mat);
    printf("Enter Physics Marks : ");
    scanf("%f",&phy);
    printf("Enter Chemistry Marks : ");
    scanf("%f",&mat);
    avg=(mat+phy+che)/3;

    if (avg>=60)
    {
        printf("grate");
        printf("%f",avg);
    }
    else if (avg>=50 && avg<60)
    {
        printf("good");
        printf("%f",avg);
    }
    else if (avg>=30 && avg<50)
    {
        printf("not bad");
        printf("%f",avg);
    }
    else 
    {
        printf("bad");
        printf("%f",avg);
    }

    return 0;
}