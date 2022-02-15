#include <stdio.h>
#include <math.h> /* contains sin() and cos() */

void fun(float value) /* function for cos and sine */
{
    for(float i = 0; i <= 1; i = i + value)
   {
       printf("sin(%f) = %f\tcos(%f) = %f\n", i, sin(i), i, cos(i));
       
   }

}

int main()
{
    float value;
    printf("Enter the desired value between 0 and 1 : ");
    scanf("%f", &value);
    fun(value);
    return 0;
}