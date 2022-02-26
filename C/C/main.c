#include <stdio.h>
#include <string.h>

void main()
{
    float ece,ecelab,che,cse,mat,pes;
    float per;
    char name[20];

    printf("Input the Name of the Student :");
    scanf("%s",nm);
    printf("Input  the marks of Physics, Chemistry and Computer Application : ");
    scanf("%d%d%d",&phy,&che,&ca);
    total = phy+che+ca;
    per = total/3.0;
    if (per>=60)
	 strcpy(div,"First");
    else
	if (per<60&&per>=48)
	    strcpy(div,"Second");
	else
	    if (per<48&&per>=36)
		strcpy(div,"Pass");
	     else
		strcpy(div,"Fail");

       printf("\nRoll No : %d\nName of Student : %s\n",rl,nm);
       printf("Marks in Physics : %d\nMarks in Chemistry : %d\nMarks in Computer Application : %d\n",phy,che,ca);
       printf("Total Marks = %d\nPercentage = %5.2f\nDivision = %s\n",total,per,div);
}
