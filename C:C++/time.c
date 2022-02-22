#include <stdio.h>

int main ()
{
  /*  The unit conversions between the times, 
     as follows with a short names ::
     min      :: minutes
     hs      :: hours
     sec      :: seconds
     Msec :: milliseconds
   */

  float min, hs, sec, Msec;

  /* convertion from minutes to hours */
  printf ("\nEnter the value of minutes to convert into hours ::");
  scanf ("%f", &min);
  hs = min/60;
  printf ("\nThere are %f hours in %f minutes", hs, min);
  
  /* convertion from hours to minutes */
  printf ("\n\nEnter the value of hours to convert into minutes::");
  scanf ("%f", &hs);
  min = hs * 60;
  printf ("\nThere are %f minutes in %f hours", min, hs);
  
  /* convertion from hours to seconds */
  printf ("\n\nEnter the value of hours to convert into seconds::");
  scanf ("%f", &hs);
  sec = hs * 3600;
  printf ("\nThere are %f seconds in %f hours", sec, hs);
  
  /* convertion from seconds to hours */
  printf ("\n\nEnter the value of seconds to convert into hours::");
  scanf ("%f", &sec);
  hs = sec / 3600;
  printf ("\nThere are %f hours in %f seconds", hs, sec);
  
  /* convertion from milliseconds to seconds */
  printf("\n Enter the values of millseconds to convert into seconds ::");
  scanf("%f",&Msec);
  sec= Msec/1000;
  printf ("\nThere are %f seconds in %f milliseconds", sec, Msec);
  
  /* convertion from seconds to milliseconds */
  printf ("\n\nEnter the value of seconds to convert into milliseconds:");
  scanf ("%f", &sec);
  Msec = sec * 1000;
  printf ("\nThere are %f milliseconds in %f seconds", Msec, sec);

  return 0;
}