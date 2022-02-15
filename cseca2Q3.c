#include <stdio.h>
#include <string.h>

void main()
{
    char name[20];
    float ece,ecelab,che,cse,mat,pes;
    
    for(int i=0;i<20;i++)
    {
    printf("Enter the Name of the Student :");
    scanf("%s",name);
    printf("Enter the marks of ECE,ECELAB,CHEMISTRY,CSE,MATHS,PES :: ");
    scanf("%f%f%f%f%f%f",&ece,&ecelab,&che,&cse,&mat,&pes);
    
    
    printf("\nName of Student : %s\n",name);
    printf("\nMarks in ECE : %f",ece);
    printf("\nMarks in ECELAB : %f",ecelab);
    printf("\nMarks in CHEMISTRY : %f",che);
    printf("\nMarks in CSE : %f",cse);
    printf("\nMarks in MATHS : %f",mat);
    printf("\nMarks in PES : %f\n\n",pes);
    }    
    
}
