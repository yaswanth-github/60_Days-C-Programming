#include <stdio.h>

int main ()
{
  int number=0,n;
  printf("\nEnter the number upto where do u want the numbers ::");
  scanf("%d",&n);
  
  while (number < n)
    {
      int count = 0, result = 0, mul = 1, cnt, rem;
     /*  printf ("\nEnter the number ::");
      scanf ("%d", &number); */

      int q = number;
      while (q != 0)
	{
	  q = q / 10;
	  count++;
	}
      /* printf ("\nThe order of the number is %d", count); */

      cnt = count;
      q = number;
      while (q != 0)
	{
	  rem = q % 10;
	  while (cnt != 0)
	    {
	      mul = mul * rem;
	      cnt--;
	    }
	  result = result + mul;
	  cnt = count;
	  q = q / 10;
	  mul = 1;
	}

    if (result == number)
	{
	  printf ("\n%d is an armstrong number", number);
	}
    /*  else
	{
	  printf ("\n%d is not an armstorng number", number);
	}
	*/
	
	number++;
    }
}