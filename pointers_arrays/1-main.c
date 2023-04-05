#include <stdio.h>

/**
 * main - addresses of variables
 *
 * Return: Always 0.
 */
int main(void)
{
   char c;
   int n;

   printf("Address of variable 'c': %p\n", &c);//& sign is used to print the address of c.
   printf("Address of variable 'n': %p\n", &n);//%p prints the value of pointers with printf.
   return (0);
}