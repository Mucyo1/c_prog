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
   
   /*But wait a second, if the value of a is 0x7ffff8f19240,
   how come a + 1 == 0x7ffff8f19244 and not 0x7ffff8f19241?
   This is the pointers arithmetic. 
   The computer knows that a points to an integer. 
   The computer also knows that the size of an integer in memory is sizeof(int) bytes - in this case 4 bytes - and concludes that the next element of this type will be stored 4 bytes later in memory*/
}