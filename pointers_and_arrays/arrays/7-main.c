#include <stdio.h>

/**
 * main - illustrates pointers arithmetic
 *
 * Return: Always 0.
 */
int main(void)
{
   int a[5];

   *a = 98; /* same as *(a + 0) */
   *(a + 1) = 198;
   *(a + 2) = 298;
   *(a + 3) = 398;
   *(a + 4) = 498;

   /*Another way to access different elements of an array,
   is to use this other notation: *(var + x),where var is the name of an array,
   and x is the (x+1)th element (starting counting elements at 0 of course) of this array.
   For instance if we declare:int i[10];
   then, when we will use i in the code,
   i[5] will be the same as *(i + 5).
   We already knew that i is evaluated as a pointer to the first element of the array,
   since i is an array.
   But now, we also know that i + 5 will be evaluated as a pointer to the 6th element of the array i.*/
   printf("Value of a[0]: %d\n", *a);
   printf("Value of a[1]: %d\n", *(a + 1));
   printf("Value of a[2]: %d\n", *(a + 2));
   printf("Value of a[3]: %d\n", *(a + 3));
   printf("Value of a[4]: %d\n", *(a + 4));
   printf("----------------\n");
   printf("Value of 'a' (also address of a[0]): %p\n", a);
   printf("Address of 'a[1]': %p\n", (a + 1));
   printf("Address of 'a[1]': %p\n", &(*(a + 1)));
   return (0);
}