#include <stdio.h>
/* function declaration */
void func(void);
static int count = 5; /* Global variable - static is the default */
 
int main() {

   while(count--) {
      func();
   }
   return 0;
}

/* function definition */
void func( void )
{

   static int i = 5; /* 'i' is local to 'func' - it is only initalised at run time. Its value 
                    *is NOT reset on every invocation of 'func'  */
   i++;

   printf("i is %d and count is %d\n", i, count);
}

