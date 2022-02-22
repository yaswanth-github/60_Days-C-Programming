#include<stdio.h>

int main ()
{
  signed int i1 = -32770;
  unsigned int i2 = -32770 ;
  signed char c1 = 255;
  unsigned char c2 = 255;

  printf("Signed int : %d", i1);
  printf("\nUnsigned int : %u", i2);
  printf ("\nSigned char : %d", c1);
  printf ("\nUnsigned char : %u", c2);
  return 0;
}