#include<stdio.h>
int main()
{
    int n;
    printf("What is the answer of 2+3+5?\n");
    printf("1)9\n2)3\n3)10\n4)7\n Enter Answer :: ");
    scanf("%d",&n);
    switch (n)
    {
        case 1 :
        printf("wrong answer");
        break;
        case 2 :
        printf("wrong answer");
        break;
        case 3 :
        printf("correct answer");
        break;
        case 4 :
        printf("wrong answer");
        break;
        default :
        printf("wrong input");
    }

    return 0;
}
