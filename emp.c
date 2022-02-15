#include <stdio.h>
struct Employee
{
char ename[20];
int ssn;
float salary;
struct date
{
int date;
int month;
int year;
}doj;
}emp = {"Pritesh",1000,100000.50,{22,6,2010}};
int main()
{
printf("\nEmployee Name : %s",emp.ename);
printf("\nEmployee SSN : %d",emp.ssn);
printf("\nEmployee Salary : %f",emp.salary);
printf("\nEmployee DOJ : %d/%d/%d",
emp.doj.date,emp.doj.month,emp.doj.year);
return 0;
}