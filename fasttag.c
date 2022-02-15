#include<stdio.h>
int main()
{
struct time{
int second;
int minute;
int hour;
};
struct car
{
int carno;
struct time st;
};

struct car myCar;
printf("\n car no. starting time reaching time:");
scanf("%d", &myCar.carno);
scanf("%d %d %d", & myCar.st.hour, &myCar.st.minute, &myCar.st.second);
printf("\n%d", myCar.carno);
printf("\t %d:%d:%d \t", myCar.st.hour, myCar.st.minute, myCar.st.second);
return 0;
}