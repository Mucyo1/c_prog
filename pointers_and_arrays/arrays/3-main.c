#include <stdio.h>

/**
 * main - An array is not a pointer, but...
 *
 * Return: Always 0.
 */
int main(void)
{
   int a[98]; /* array */
   int name[10];

   printf("a: %p\n", a);
   printf("&a[0]: %p\n", &a[0]);
   
   printf("value of name: %d\n", name[10]);
   printf("value of name: %p\n", name);
   return (0);
}
//An array is not a pointer.
//But, you can still use the name of the array in your code, and its value will be… 
//the address of the first element of the array.