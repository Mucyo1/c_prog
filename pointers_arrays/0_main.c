//Every time you declare a variable, the computer will reserve memory for this variable.
//The memory reserved will then store the value of the variable.
//Depending on the type of the variable, the computer will reserve more or less memory.
//The size of each type is generally defined in bytes (1 byte = 8 bits, each bit being 0 or 1).
//The sizes of the types also depend on the computer you are using. 
//Here are the sizes of the most common types on most 64-bit Linux machines:

/**
 * char -> 1 byte
 * int -> 4 bytes
 * float -> 4 bytes
 * To determine the size of those types on your computer, you can use the sizeof operator.
*/



#include <stdio.h>

/**
 * main - using sizeof to dynamically determine the size of types char, int and float
 *
 * Return: Always 0.
 */
int main(void)
{
   int n; 

   printf("Size of type 'char' on my computer: %lu bytes\n", sizeof(char));
   printf("Size of type 'int' on my computer: %lu bytes\n", sizeof(int));
   printf("Size of type 'float' on my computer: %lu bytes\n", sizeof(float));
   printf("Size of type of my variable n on my computer: %lu bytes\n", sizeof(n));
   return (0);
}